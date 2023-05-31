#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/distance/distance-sp.hpp"

#include <complex>

namespace geometry {

  template< typename R >
  circle<R> inscribed_circle(const point<R> &a, const point<R> &b, const point<R> &c) {
    R A = std::abs(b - c), B = std::abs(c - a), C = std::abs(a - b);

    point<R> o((a * A + b * B + c * C) / (A + B + C));
    R r = distance_sp({a, b}, o);

    return {o, r};
  }

}
