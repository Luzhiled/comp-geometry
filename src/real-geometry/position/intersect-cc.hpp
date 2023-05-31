#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/utility/equals/real-number.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <algorithm>
#include <complex>

namespace geometry {

  constexpr int SEPERATE     = 4;
  constexpr int CIRCUMSCRIBE = 3;
  constexpr int INTERSECT    = 2;
  constexpr int INSCRIBE     = 1;
  constexpr int CONTAIN      = 0;

  template< typename R >
  int intersect_cc(circle<R> c1, circle<R> c2) {
    if (c1.r > c2.r) std::swap(c1, c2);
    R d = std::abs(c1.o - c2.o), r = c1.r + c2.r;

    if (sign(d - r) > 0) return SEPERATE;
    if (sign(d + c1.r - c2.r) < 0) return CONTAIN;
    if (equals(d, r)) return CIRCUMSCRIBE;
    if (equals(d + c1.r, c2.r)) return INSCRIBE;
    return INTERSECT;
  }

}
