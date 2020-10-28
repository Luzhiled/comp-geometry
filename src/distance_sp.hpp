#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./projection.hpp"
#include "./segment.hpp"
#include "./point.hpp"
#include "./ccw.hpp"

namespace geometry {
  real_number distance_sp(const segment &s, const point &p) {
    point pr = projection(s, p);
    if (ccw(s.a, s.b, pr) == 0) return abs(pr - p);
    return min(abs(s.a - p), abs(s.b - p));
  }
}
