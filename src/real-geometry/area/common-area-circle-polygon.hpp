#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/cross-point/cross-point-cl.hpp"
#include "src/real-geometry/distance/distance-sp.hpp"
#include "src/real-geometry/numbers/sign.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/operation/inner-product.hpp"
#include "src/real-geometry/utility/polygon-to-segments.hpp"

#include <algorithm>
#include <complex>
#include <cmath>

namespace geometry::internal {

  template< typename R >
  R impl_common_area_ca_cp(const circle<R> &c, const segment<R> &s) {
    point<R> va = c.center() - s.a, vb = c.center() - s.b;
    R f = cross_product(va, vb), res = 0;

    if (sign(f) == 0) return res;
    if (sign(std::max(std::abs(va), std::abs(vb)) - c.radius()) <= 0) return f;

    point<R> d(inner_product(va, vb), cross_product(va, vb));
    if (sign(distance_sp(s, c.center()) - c.radius()) >= 0) {
      return std::norm(c.radius()) * std::atan2(d.y(), d.x());
    }

    points<R> ps = cross_point_cl(c, {s.a, s.b});
    if (ps.empty()) return res;
    if (ps.size() == 2 and sign(inner_product<R>(ps[1] - ps[0], s.a - ps[0])) >= 0) {
      std::swap(ps[0], ps[1]);
    }

    ps.emplace(ps.begin(), s.a);
    ps.emplace_back(s.b);
    for (usize i = 1; i < ps.size(); i++) {
      if (equals(ps[i - 1], ps[i])) continue;
      res += impl_common_area_ca_cp(c, {ps[i - 1], ps[i]});
    }

    return res;
  }

}

namespace geometry {

  template< typename R >
  R common_area_circle_polygon(const circle<R> &c, const polygon<R> &p) {
    usize n = p.size();
    if (n < 3) return 0;

    auto segs = polygon_to_segments(p);

    R res = 0;
    for (auto &seg: segs) {
      res += internal::impl_common_area_ca_cp(c, seg);
    }
    
    return res / 2;
  }

}
