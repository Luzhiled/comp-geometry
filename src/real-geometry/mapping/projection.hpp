#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/operation/inner-product.hpp"

#include <complex>

namespace geometry {

  template< typename R >
  point<R> projection(const line<R> &l, const point<R> &p) {
    R t = inner_product<R>(p - l.a, l.a - l.b) / std::norm(l.a - l.b);
    return l.a + (l.a - l.b) * t;
  }

}
