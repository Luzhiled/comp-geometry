#pragma once

#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/operation/cross-product.hpp"

#include <algorithm>
#include <numeric>
#include <tuple>
#include <utility>
#include <vector>

namespace geometry {

  template< typename R >
  std::pair< polygon<R>, std::vector< usize > > convex_hull_with_index(const points<R> &pts) {
    usize n = pts.size();
    if (n <= 2) {
      std::vector< usize > idxs(n);
      std::iota(idxs.begin(), idxs.end(), 0);
      return {pts, idxs};
    }

    std::vector< std::pair< point<R>, usize > > ps;
    ps.reserve(n);
    for (usize i = 0; i < n; i++) {
      ps.emplace_back(pts[i], i);
    }

    auto cmp = [](const std::pair<point<R>, usize> &a, const std::pair<point<R>, usize> &b) {
      return compare_x(a.first, b.first);
    };
    std::sort(ps.begin(), ps.end(), cmp);

    std::vector< usize > idxs(2 * n);
    polygon<R> poly(2 * n);
    usize k = 0, i = 0;

    auto check = [&](usize i) {
      return sign(cross_product<R>(poly[k - 1] - poly[k - 2], ps[i].first - poly[k - 1])) == -1;
    };

    while (i < n) {
      while (k >= 2 and check(i)) k--;

      std::tie(poly[k], idxs[k]) = ps[i];
      k++; i++;
    }

    i = n - 2;
    usize t = k + 1;
    while (true) {
      while (k >= t and check(i)) k--;

      std::tie(poly[k], idxs[k]) = ps[i];
      k++;
      if (not i) break;
      i--;
    }

    poly.resize(k - 1);
    idxs.resize(k - 1);
    return {poly, idxs};
  }

}
