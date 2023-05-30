#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/numbers/ccw.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/operation/inner-product.hpp"
#include "src/real-geometry/utility/sign.hpp"

namespace geometry {

  using namespace geometry::number::ccw;

  template< typename R >
  int ccw(const point<R> &a, point<R> b, point<R> c) {
    b = b - a, c = c - a;
    if (sign(cross_product(b, c)) == +1) return COUNTER_CLOCKWISE;
    if (sign(cross_product(b, c)) == -1) return CLOCKWISE;
    if (sign(inner_product(b, c)) == -1) return ONLINE_BACK;
    if (std::norm(b) < std::norm(c)) return ONLINE_FRONT;
    return ON_SEGMENT;
  }
}
