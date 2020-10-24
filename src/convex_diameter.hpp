#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./polygon.hpp"
#include "./product.hpp"
#include "./compare.hpp"

namespace geometry {
  real_number convex_diameter(const polygon &poly) {
    int n = poly.size();
    if (n == 2) return abs(poly[0] - poly[1]);

    polygon p = poly;
    int i = 0, j = 0;
    for (int k = 0; k < n; ++k) {
      if (compare_x(poly[i], poly[k])) i = k;
      if (!compare_x(poly[j], poly[k])) j = k;
    }

    real_number res = 0;
    int si = i, sj = j;
    while (i != sj || j != si) {
      res = max(res, abs(poly[i] - poly[j]));
      if (sign(cross(poly[(i + 1) % n] - p[i], p[(j + 1) % n] - p[j])) == -1) {
        i = (i + 1) % n;
      } else {
        j = (j + 1) % n;
      }
    }

    return res;
  }
}
