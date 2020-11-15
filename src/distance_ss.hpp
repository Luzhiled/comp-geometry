#pragma once

#include <algorithm>
using namespace std;

#include "./base.hpp"
#include "./segment.hpp"
#include "./is_intersect.hpp"
#include "./distance_sp.hpp"

// distance
namespace geometry {
  real_number distance(const segment &s1, const segment &s2) {
    if (is_intersect(s1, s2)) return 0;
    real_number r1 = distance_sp(s1, s2.a);
    real_number r2 = distance_sp(s1, s2.b);
    real_number r3 = distance_sp(s2, s1.a);
    real_number r4 = distance_sp(s2, s1.b);
    return min({r1, r2, r3, r4});
  }
}
