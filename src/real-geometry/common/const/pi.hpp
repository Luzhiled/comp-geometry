#pragma once

#include "src/real-geometry/common/float-alias.hpp"

#include <cmath>

namespace geometry {

  static f80 pi() {
    static const f80 PI = acosl(-1); // no need `std::`. (?)
    return PI;
  }

}
