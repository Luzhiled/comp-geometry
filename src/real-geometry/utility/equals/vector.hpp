#pragma once

#include "src/real-geometry/utility/equals/real-number.hpp"

namespace geometry {

  template< typename R >
  bool equals(const vec2d<R> &a, const vec2d<R> &b) {
    return equals(a.x(), b.x()) and equals(a.y(), b.y());
  }

}
