#pragma once

#include "src/real-geometry/class/point.hpp"

#include <vector>

// circle
namespace geometry {

  template< typename R >
  class circle {
   public:
    point<R> o;
    R r;

    circle() = default;
    circle(point<R> o, R r) : o(o), r(r) {}

    const point<R> center() const {
      return o;
    }

    const R radius() const {
      return r;
    }
  };


  template< typename R >
  using circles = std::vector< circle<R> >;

}
