#pragma once

#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/utility/next-idx.hpp"
#include "src/real-geometry/utility/sign.hpp"

namespace geometry {

  template< typename R >
  polygon<R> convex_cut(const polygon<R> &poly, const line<R> &l) {
    usize n = poly.size();

    polygon<R> res;
    for (usize i = 0; i < n; i++) {
      usize j = next_idx(i, n);

      R cf = cross_product<R>(l.a - poly[i], l.b - poly[i]);
      R cs = cross_product<R>(l.a - poly[j], l.b - poly[j]);

      if (sign(cf) >= 0) res.emplace_back(poly[i]);

      if (sign(cf) * sign(cs) < 0) {
        R s = cross_product<R>(poly[j] - poly[i], l.a - l.b);
        R t = cross_product<R>(l.a - poly[i], l.a - l.b);
        res.emplace_back(poly[i] + t / s * (poly[j] - poly[i]));
      }
    }

    return res;
  }

}
