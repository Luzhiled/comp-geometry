#pragma once

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/common/const/pi.hpp"

#include <cmath>

namespace geometry {

  template< typename R >
  R get_signed_angle(const point &a, const point &b, const point &c) {
    auto fix = [](R theta) {
      if (theta < 0) theta += 2 * pi();
      return theta;
    };

    const point u(a - b), v(c - b);
    R alpha = fix(std::atan2(u.y(), u.x()));
    R beta  = fix(std::atan2(v.y(), v.x()));
    return fix(beta - alpha);
  }

}
