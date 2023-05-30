#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/mapping/projection.hpp"

#include <cmath>
#include <complex>

namespace geometry {

  template< typename R >
  points<R> cross_point_cl(const circle<R> &c, const line<R> &l) {
    point<R> pr = projection(l, c.center());

    R d = std::norm(c.radius()) - std::norm(pr - c.center());

    if (sign(d) == -1) {
      return {};
    }
    if (sign(d) == 0) {
      return {pr};
    }

    point<R> e = (l.b - l.a) / std::abs(l.b - l.a);
    R k = std::sqrt(d);
    return {pr + e * k, pr - e * k};
  }

}
