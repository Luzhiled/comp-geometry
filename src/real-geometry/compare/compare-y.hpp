#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/equals/real-number.hpp"

namespace geometry {

  template< typename R >
  bool compare_y(const point<R> &a, const point<R> &b) {
    return not equals(a.y(), b.y()) ? a.y() < b.y() : a.x() < b.x();
  }

}
