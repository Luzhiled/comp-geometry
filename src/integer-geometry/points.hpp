#pragma once

#include <vector>

#include "point.hpp"

namespace intgeometry2d {

  template< typename Z >
  using lattice_points = std::vector< lattice_point<Z> >;

} // intgeometry2d
