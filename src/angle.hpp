#pragma once

#include <cmath>
#include <algorithm>

#include "./base.hpp"

// angle
namespace geometry {
  real_number radian_to_degree(real_number theta) {
    return theta * 180.0 / PI;
  }

  real_number degree_to_radian(const real_number deg) {
    return deg * PI / 180.0;
  }

  real_number get_smaller_angle(const point &a, const point &b, const point &c) {
    const point v(b - a), w(c - b);
    real_number alpha = atan2(v.imag(), v.real());
    real_number beta = atan2(w.imag(), w.real());
    if (alpha > beta) swap(alpha, beta);
    real_number theta = beta - alpha;
    return min(theta, 2 * PI - theta);
  }
}
