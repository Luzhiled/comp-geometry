#pragma once

#include "src/real-geometry/common/const/eps.hpp"
#include "src/real-geometry/numbers/sign.hpp"

namespace geometry {

  using namespace geometry::number::sign;

  template< typename R >
  inline int sign(R r) {
    if (r < -eps()) return MINUS;
    if (r > +eps()) return PLUS;
    return ZERO;
  }

}
