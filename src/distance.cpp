#include <bits/stdc++.h>
using namespace std;

#pragma once

#include "./base.cpp"
#include "./point.cpp"
#include "./segment.cpp"
#include "./ccw.cpp"
#include "./projection.cpp"
#include "./is_intersect.cpp"

// distance
namespace geometry {
  real_number distance(const segment &s, const point &p) {
    point pr = projection(s, p);
    if (ccw(s.a, s.b, pr) == 0) return abs(pr - p);
    return min(abs(s.a - p), abs(s.b - p));
  }

  real_number distance(const segment &s1, const segment &s2) {
    if (is_intersect(s1, s2)) return 0;
    real_number r1 = distance(s1, s2.a);
    real_number r2 = distance(s1, s2.b);
    real_number r3 = distance(s2, s1.a);
    real_number r4 = distance(s2, s1.b);
    return min({r1, r2, r3, r4});
  }
}
