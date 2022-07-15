#pragma once

#include "alias.hpp"
#include "point.hpp"

namespace intgeometry2d {

  template< typename Z >
  class circle {
    lattice_point< Z > center_;
    Z r_;

   public:
    circle() {}
    circle(lattice_point< Z > center_, Z r_) : center_(center_), r_(r_) {}

    lattice_point< Z > center() const { return center_; }
    Z r() const { return r_; }
  };

} // intgeometry2d
