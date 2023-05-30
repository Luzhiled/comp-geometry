#pragma once

#include "src/real-geometry/numbers/sign.hpp"

namespace geometry {

  template< typename R >
  bool equals(R a, R b) {
    return sign(r1 - r2) == 0;
  }

}
