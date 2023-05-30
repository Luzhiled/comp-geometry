#pragma once

#include "src/real-geometry/class/point.hpp"

#include <vector>

namespace geometry {

  template< typename R >
  class line {
   public:
    point a, b;

    line() = default;
    line(point a, point b) : a(a), b(b) {}

  };

  template< typename R >
  using lines = std::vector< line >;

}
