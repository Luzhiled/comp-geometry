#pragma once

#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/utility/next-idx.hpp"

namespace geometry {

  template< typename R >
  R polygon_area(const polygon<R> &poly) {
    usize n = poly.size();

    R res = 0;
    for (usize i = 0; i < n; ++i) {
      res += cross_product(poly[i], poly[next_idx(i, n)]);
    }
    return res / 2;
  }

}
