#pragma once

#include "src/real-geometry/class/vector.hpp"

#include <vector>

namespace geometry {

  template< typename R >
  using point = vec2d<R>;

  template< typename R >
  using points = std::vector< point< R > >;

}
