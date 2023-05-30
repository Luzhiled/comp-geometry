#pragma once

#include "src/real-geometry/class/point.hpp"

#include <vector>

namespace geometry {

  template< typename R >
  class segment {
   public:
    point a, b;

    segment() = default;
    segment(point a, point b) : a(a), b(b) {}

  };

  template< typename R >
  using segments = std::vector< segment >;

}
