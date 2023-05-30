#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/mapping/projection.hpp"
#include "src/real-geometry/operation/ccw.hpp"

#include <complex>
#include <algorithm>

namespace geometry {

  template< typename R >
  R distance_sp(const segment<R> &s, const point<R> &p) {
    point<R> pr = projection({s.a, s.b}, p);
    if (ccw(s.a, s.b, pr) == 0) return std::abs(pr - p);
    return std::min(std::abs(s.a - p), std::abs(s.b - p));
  }

}
