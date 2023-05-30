#pragma once

#include "src/real-geometry/class/point.hpp"

#include <vector>

// circle
namespace geometry {

  template< typename R >
  class circle {
    point o;
    R r;

   public:
    circle() = default;
    circle(point o, R r) : o(o), r(r) {}

    const point center() const {
      return o;
    }

    const R radius() const {
      return r;
    }
  };


  template< typename R >
  using circles = std::vector< circle<R> >;

}
