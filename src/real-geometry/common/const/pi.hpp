#pragma once

#include "src/real-geometry/float-alias.hpp"

#include <cmath>

namespace geometry {

  static f80 pi() {
    const f80 PI = std::acosl(-1);
    return PI;
  }

}
