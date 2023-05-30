#pragma once

#include "src/real-geometry/utility/sign.hpp"

namespace geometry {

  template< typename R >
  bool equals(R a, R b) {
    return sign(a - b) == 0;
  }

}
