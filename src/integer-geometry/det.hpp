#include "point.hpp"

namespace intgeometry2d {

  template< typename Z >
  Z det(const lattice_point<Z> &a, const lattice_point<Z> &b) {
    return a.x() * b.y() - a.y() * b.x();
  }

} // intgeometry2d
