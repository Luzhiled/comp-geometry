#pragma once

#include "src/real-geometry/common/float-alias.hpp"

namespace geometry {

  inline static f80 &eps() {
    static f80 EPS = 1e-10;
    return EPS;
  }

  void set_eps(f80 EPS) {
    eps() = EPS;
  }

}
