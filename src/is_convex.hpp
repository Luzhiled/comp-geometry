#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./polygon.cpp"
#include "./ccw.cpp"

namespace geometry {
  bool is_convex(const polygon &poly) { // poly given counterclockwise 
    int n = poly.size();
    for (int i = 0; i < n; ++i) {
      if (ccw(poly[(i + n - 1) % n], poly[i], poly[(i + 1) % n]) == -1) return false;
    }
    return true;
  }
}
