#pragma once

#include "src/real-geometry/class/vector.hpp"

namespace geometry {

  template< typename R >
  R cross_product(const vec2d<R> &a, const vec2d<R> &b) {
    return a.x() * b.y() - a.y() * b.x();
  }

}
