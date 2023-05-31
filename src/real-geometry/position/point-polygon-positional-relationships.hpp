#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/numbers/posision-of-point-polygon.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/operation/inner-product.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/utility/next-idx.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <algorithm>

namespace geometry {

  // O(N)
  template< typename R >
  int point_polygon_positional_relationships(const point<R> &p, const polygon<R> &poly) {
    using namespace number::point_polygon_positional_relationships;
    usize n = poly.size();

    bool in = false;
    for (usize i = 0; i < n; i++) {
      usize j = next_idx(i, n);
      point<R> a = poly[i] - p, b = poly[j] - p;

      if (a.y() > b.y()) std::swap(a, b);

      if (a.y() <= 0 and 0 < b.y() and cross_product(a, b) < 0) {
        in = not in;
      }

      if (sign(cross_product(a, b)) == 0 and sign(inner_product(a, b)) <= 0) {
        return ON_EDGE;
      }
    }

    return in ? IN : OUT;
  }
}
