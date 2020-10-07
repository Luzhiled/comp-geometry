#include <bits/stdc++.h>
using namespace std;

#include "./base.cpp"
#include "./polygon.cpp"
#include "./point.cpp"

namespace geometry {
  // O(N)
  // 0 : poing out the polygon
  // 1 : point on the polygon edge
  // 2 : poing in the polygon
  int contains(const polygon &poly, const point &p) {
    bool in = false;
    int n = poly.size();
    for (int i = 0; i < n; ++i) {
      int j = (i + 1 == n ? 0 : i + 1);
      point a = poly[i] - p, b = poly[j] - p;
      if (a.imag() > b.imag()) swap(a, b);
      if (a.imag() <= 0 && 0 < b.imag() && cross(a, b) < 0) in = !in;
      if (sign(cross(a, b)) == 0 && sign(dot(a, b)) <= 0) {
        return 1;
      }
    }

    return in ? 2 : 0;
  }
}
