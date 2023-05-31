#pragma once

#include "src/real-geometry/common/const/pi.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <complex>
#include <algorithm>
#include <cmath>

namespace geometry {

  template< typename R >
  R common_area_cc(circle<R> a, circle<R> b) {
    using std::norm;

    if (a.r > b.r) std::swap(a, b);

    R d = std::abs(a.o - b.o);

    if (sign(a.r + b.r - d) <= 0) return 0;
    if (sign(d - (b.r - a.r)) <= 0) return norm(a.r) * pi();

    R res = 0;
    for (int i = 0; i < 2; ++i) {
      R alpha = std::acos((norm(b.r) + norm(d) - norm(a.r)) / (2 * b.r * d));

      R s = alpha * norm(b.r);
      R t = norm(b.r) * std::sin(alpha) * std::cos(alpha);
      res += s - t;

      std::swap(a, b);
    }

    return res;
  }

}
