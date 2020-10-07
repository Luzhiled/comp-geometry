#include <bits/stdc++.h>
using namespace std;

#include "../segment.cpp"
#include "../ccw.cpp"

// intersect
namespace geometry {
  bool is_intersect(const segment &s1, const segment &s2) {
    return ccw(s1.a, s1.b, s2.a) * ccw(s1.a, s1.b, s2.b) <= 0 &&
           ccw(s2.a, s2.b, s1.a) * ccw(s2.a, s2.b, s1.b) <= 0;
  }
}
