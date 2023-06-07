#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <complex>

namespace geometry {

  template< typename R >
  bool in_circle(const circle<R> &c, const point<R> &p) {
    return sign(std::abs(c.o - p) - c.r) == -1;
  }

}
