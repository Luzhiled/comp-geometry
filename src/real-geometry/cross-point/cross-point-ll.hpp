#pragma once

#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/utility/equals/real-number.hpp"

namespace geometry {

  template< typename R >
  point<R> cross_point_ll(const line<R> &l1, const line<R> &l2) {
    R a = cross_product<R>(l1.b - l1.a, l2.b - l2.a);
    R b = cross_product<R>(l1.b - l1.a, l1.b - l2.a);
    if (equals<R>(a, 0) && equals<R>(b, 0)) return l2.a;
    return l2.a + (l2.b - l2.a) * b / a;
  }

}
