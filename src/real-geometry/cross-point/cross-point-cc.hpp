#pragma once

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/equals/vector.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <complex>
#include <cmath>

namespace geometry {

  template< typename R >
  points<R> cross_point_cc(const circle<R> &a, const circle<R> &b) {
    R d = std::abs(a.o - b.o), r = a.r + b.r;

    if (sign(d - r) > 0 or sign(d + a.r - b.r) < 0) return {};
    
    R s = std::acos( (std::norm(a.r) - std::norm(b.r) + std::norm(d)) / (2 * a.r * d) );
    R t = std::arg(b.o - a.o);

    point<R> p{a.o + std::polar(a.r, t + s)};
    point<R> q{a.o + std::polar(a.r, t - s)};

    if (equals(p, q)) return {p};
    return {p, q};
  }

}


