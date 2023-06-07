#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/common/const/pi.hpp"

#include <algorithm>
#include <cmath>

namespace geometry {

  template< typename R >
  R get_smaller_angle(const point &a, const point &b, const point &c) {
    const point u(a - b), v(c - b);
    R alpha = std::atan2(u.y(), u.x());
    R beta  = std::atan2(v.y(), v.x());

    if (alpha > beta) std::swap(alpha, beta);

    R theta = beta - alpha;
    return std::min(theta, 2 * pi() - theta);
  }

}
