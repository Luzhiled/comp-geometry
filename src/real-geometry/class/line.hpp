#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/equals/vector.hpp"

#include <cassert>
#include <vector>

namespace geometry {

  template< typename R >
  class line {
    using P = point<R>;

   public:
    P a, b;

    line() = default;
    line(P a, P b) : a(a), b(b) {
      assert(not equals(a, b));
    }

  };

  template< typename R >
  using lines = std::vector< line<R> >;

}
