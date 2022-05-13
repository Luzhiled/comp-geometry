#include "point.hpp"

namespace intgeometry2d {

  template< typename Z >
  Z dot(const lattice_point<Z> &a, const lattice_point<Z> &b) {
    return a.x() * b.x() + a.y() * b.y();
  }

} // intgeometry2d
