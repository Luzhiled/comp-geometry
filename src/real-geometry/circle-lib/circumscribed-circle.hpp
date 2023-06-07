#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/operation/cross-product.hpp"

namespace geometry {

  template< typename R >
  circle<R> circumscribed_circle(const point<R> &a, const point<R> &b, const point<R> &c) {
    R A = std::norm(b - c), B = std::norm(c - a), C = std::norm(a - b);

    R S = std::norm(cross_product<R>(b - a, c - a));
    R T = A + B + C;

    point<R> o{(A*(T - 2*A) * a + B*(T - 2*B) * b + C*(T - 2*C) * c) / (4 * S)};

    return circle(o, std::abs(o - a));
  }

}
