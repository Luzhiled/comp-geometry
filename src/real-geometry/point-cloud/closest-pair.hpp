#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/compare/compare-y.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <algorithm>
#include <cmath>
#include <complex>
#include <iterator>
#include <limits>
#include <utility>

namespace geometry::internal {

  template< typename R >
  using closest_pair_result_t = std::pair< R, std::pair<point<R>, point<R> > >;

  // WARNING: pts are sorted by y after calling this function
  template< typename R >
  closest_pair_result_t<R> impl_closest_pair(points<R> &pts, usize l, usize r) {
    constexpr R inf = std::numeric_limits< R >::infinity();
    using result_t = closest_pair_result_t<R>;

    auto comp = [](const result_t &lhs, const result_t &rhs) {
      return lhs.first < rhs.first;
    };

    if (r - l <= 1) {
      return {inf, {}};
    }

    usize m = (l + r) / 2;
    R x = pts[m].x();
    result_t result = std::min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r), comp);

    auto f = pts.begin();
    std::inplace_merge(f + l, f + m, f + r, compare_y<R>);

    points<R> ps;
    for (usize i = l; i < r; i++) {
      if (sign(std::abs(pts[i].x() - x) - result.first) >= 0) continue;

      for (usize j = 0; j < ps.size(); j++) {
        R dy = pts[i].y() - (*std::next(ps.rbegin(), j)).y();
        if (sign(dy - result.first) >= 0) break;

        auto &u = pts[i];
        auto &v = *std::next(ps.rbegin(), j);
        result = std::min(result, {std::abs(u - v), std::make_pair(u, v)}, comp);
      }

      ps.emplace_back(pts[i]);
    }

    return result;
  }

}

namespace geometry {

  template< typename R >
  internal::closest_pair_result_t<R> closest_pair(points<R> pts) {
    constexpr R inf = std::numeric_limits< R >::infinity();
    if (pts.size() <= 1) {
      return {inf, {}};
    }

    std::sort(pts.begin(), pts.end(), compare_x<R>);

    return internal::impl_closest_pair(pts, 0, pts.size());
  }

}
