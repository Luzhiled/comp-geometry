#pragma once

#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/mapping/projection.hpp"

namespace geometry {

  template< typename R >
  R distance_lp(const line<R> &l, const point<R> &p) {
    point<R> pr = projection(l, p);
    return std::abs(pr - p);
  }

}
