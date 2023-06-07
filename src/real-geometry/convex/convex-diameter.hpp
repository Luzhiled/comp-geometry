#pragma once

#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/utility/sign.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/utility/next-idx.hpp"

#include <complex>
#include <algorithm>

namespace geometry {

  template< typename R >
  R convex_diameter(const polygon<R> &poly) {
    usize n = poly.size();

    if (n == 2) return std::abs(poly[0] - poly[1]);

    usize i = 0, j = 0;
    for (usize k = 0; k < n; k++) {
      if (    compare_x(poly[i], poly[k])) i = k;
      if (not compare_x(poly[j], poly[k])) j = k;
    }

    R res{0};
    usize s = i, t = j;
    while (i != t or j != s) {
      res = std::max(res, std::abs(poly[i] - poly[j]));
      auto u = poly[next_idx(i, n)] - poly[i];
      auto v = poly[next_idx(j, n)] - poly[j];
      if (sign(cross_product<R>(u, v)) == -1) {
        i = next_idx(i, n);
      } else {
        j = next_idx(j, n);
      }
    }

    return res;
  }
}
