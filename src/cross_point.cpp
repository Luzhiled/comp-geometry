#include <bits/stdc++.h>
using namespace std;

#include "./base.cpp"
#include "./segment.cpp"
#include "./angle.cpp"

// cross point
namespace geometry {
  point cross_point(const segment &s1, const segment &s2) {
    real_number a = cross(s1.b - s1.a, s2.b - s2.a);
    real_number b = cross(s1.b - s1.a, s1.b - s2.a);
    if (is_equal(a, 0) && is_equal(b, 0)) return s2.a;
    return s2.a + (s2.b - s2.a) * b / a;
  }
}
