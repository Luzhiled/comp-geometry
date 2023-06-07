#pragma once

#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/operation/ccw.hpp"

namespace geometry {

  template< typename R >
  bool intersect_ss(const segment<R> &s1, const segment<R> &s2) {
    return ccw(s1.a, s1.b, s2.a) * ccw(s1.a, s1.b, s2.b) <= 0 and
           ccw(s2.a, s2.b, s1.a) * ccw(s2.a, s2.b, s1.b) <= 0;
  }

}
