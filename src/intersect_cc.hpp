#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./circle.hpp"

namespace geometry {
  constexpr int SEPERATE     = 4;
  constexpr int CIRCUMSCRIBE = 3;
  constexpr int INTERSECT    = 2;
  constexpr int INSCRIBE     = 1;
  constexpr int CONTAIN      = 0;
  int intersect_cc(circle c1, circle c2) {
    if (c1.r > c2.r) swap(c1, c2);
    real_number d = abs(c1.p - c2.p), r = c1.r + c2.r;

    if (sign(d - r) > 0) return SEPERATE;
    if (sign(d + c1.r - c2.r) < 0) return CONTAIN;
    if (is_equal(d, r)) return CIRCUMSCRIBE;
    if (is_equal(d + c1.r, c2.r)) return INSCRIBE;
    return INTERSECT;
  }
}
