#pragma once

#include "src/real-geometry/common/const/pi.hpp"

namespace geometry {

  template< typename R >
  R radian_to_degree(R theta) {
    return theta * 180.0 / pi();
  }

}
