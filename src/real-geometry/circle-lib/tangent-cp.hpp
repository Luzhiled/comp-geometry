#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/cross-point/cross-point-cc.hpp"

#include <complex>
#include <cmath>

namespace geometry {

  template< typename R >
  points<R> tangent_cp(const circle<R> &c, const point<R> &p) {
    circle<R> t{p, std::sqrt(std::norm(c.o - p) - std::norm(c.r))};

    return cross_point_cc(c, t);
  }

}
