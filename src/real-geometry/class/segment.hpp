#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/equals/vector.hpp"

#include <cassert>
#include <vector>

namespace geometry {

  template< typename R >
  class segment {
   public:
    point<R> a, b;

    segment() = default;
    segment(point<R> a, point<R> b) : a(a), b(b) {
      assert(not equals(a, b));
    }

  };

  template< typename R >
  using segments = std::vector< segment<R> >;

}
