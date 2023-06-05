#pragma once

#include "src/real-geometry/class/vector.hpp"

#include <cmath>

namespace geometry {

  template< typename R >
  vec2d<R> rotate(const R theta, const vec2d<R> &v) {
    return {std::cos(theta) * v.x() + std::sin(-theta) * v.y(),
            std::sin(theta) * v.x() + std::cos(-theta) * v.y()};
  }

}
