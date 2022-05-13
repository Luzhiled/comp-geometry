#include <utility>

#include "point.hpp"
#include "det.hpp"

namespace intgeometry2d {
  template< typename Z >
  bool argcmp(const lattice_point<Z> &a, const lattice_point<Z> &b) {
    using std::pair;
    bool fa = pair(a.y(), a.x()) < pair<Z, Z>(0, 0);
    bool fb = pair(b.y(), b.x()) < pair<Z, Z>(0, 0);
    Z d = det(a, b);
    return fa != fb ? fa < fb : (d == 0 ? a.norm() < b.norm() : d > 0);
  }
} // intgeometry2d

