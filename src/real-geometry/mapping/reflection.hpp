#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/mapping/projection.hpp"

namespace geometry {

  template< typename R >
  point<R> reflection(const line<R> &l, const point<R> &p) {
    return 2 * projection(l, p) - p;
  }

}
