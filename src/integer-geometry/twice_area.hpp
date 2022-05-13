#pragma once

#include "alias.hpp"
#include "polygon.hpp"
#include "det.hpp"
#include "nidx.hpp"

namespace intgeometry2d {
  
  template< typename Z >
  Z twice_signed_area(const polygon<Z> &poly) {
    Z s = Z(0);
    for (usize i = 0; i < poly.size(); i++) {
      s += det(poly[i], poly[nidx(i, poly.size())]);
    }
    return s;
  }

  template< typename Z >
  Z twice_unsigned_area(const polygon<Z> &poly) {
    return abs(twice_signed_area(poly));
  }

} // intgeometry2d
