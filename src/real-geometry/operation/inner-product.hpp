#pragma once

#include "src/real-geometry/class/vector.hpp"

namespace geometry {

  template< typename R >
  R inner_product(const vec2d<R> &a, const vec2d<R> &b) {
    return a.x() * b.x() + a.y() * b.y();
  }

}
