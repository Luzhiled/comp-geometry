#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/equals/real-number.hpp"

namespace geometry {

  template< typename R >
  bool compare_x(const point<R> &a, const point<R> &b) {
    return not equals(a.x(), b.x()) ? a.x() < b.x() : a.y() < b.y();
  }

}
