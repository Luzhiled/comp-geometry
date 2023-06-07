#pragma once

#include "src/real-geometry/class/point.hpp"

#include <vector>

namespace geometry {

  template< typename R >
  using polygon = std::vector< point<R> >;

  template< typename R >
  using polygons = std::vector< polygon<R> >;

}
