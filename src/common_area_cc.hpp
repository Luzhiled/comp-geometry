#pragma once

#include <complex>
#include <algorithm>
#include <cmath>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./circle.hpp"

namespace geometry {
  real_number common_area_cc(circle a, circle b) {
    real_number d = abs(a.p - b.p);
    if (a.r > b.r) swap(a, b);

    if (sign(a.r + b.r - d) <= 0) return 0;
    if (sign(d - (b.r - a.r)) <= 0) {
      return norm(a.r) * pi;
    }

    real_number res = 0;
    for (int i = 0; i < 2; ++i) {
      real_number alpha = acos((norm(b.r) + norm(d) - norm(a.r)) / (2 * b.r * d));
      real_number s = alpha * norm(b.r);
      real_number t = norm(b.r) * sin(alpha) * cos(alpha);
      res += s - t;
      swap(a, b);
    }

    return res;
  }
}

