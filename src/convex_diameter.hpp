#pragma once

#include <complex>
#include <algorithm>
using namespace std;

#include "./base.hpp"
#include "./polygon.hpp"
#include "./product.hpp"
#include "./compare.hpp"

namespace geometry {
  real_number convex_diameter(const polygon &p) {
    int n = p.size();
    if (n == 2) return abs(p[0] - p[1]);

    int i = 0, j = 0;
    for (int k = 0; k < n; ++k) {
      if ( compare_x(p[i], p[k])) i = k;
      if (!compare_x(p[j], p[k])) j = k;
    }

    real_number res = 0;
    int si = i, sj = j;
    while (i != sj || j != si) {
      res = max(res, abs(p[i] - p[j]));
      if (sign(cross(p[(i + 1) % n] - p[i], p[(j + 1) % n] - p[j])) == -1) {
        i = (i + 1) % n;
      } else {
        j = (j + 1) % n;
      }
    }

    return res;
  }
}
