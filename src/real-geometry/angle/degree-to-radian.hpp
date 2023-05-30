#pragma once

#include "src/real-geometry/common/const/pi.hpp"

namespace geometry {

  template< typename R >
  R degree_to_radian(R deg) {
    return deg * pi() / 180.0;
  }

}
