#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.cpp"
#include "./polygon.cpp"
#include "./angle.cpp"

// area
namespace geometry {
  real_number area(const polygon &poly) {
    int n = poly.size();
    real_number res = 0;
    for (int i = 0; i < n; ++i) {
      res += cross(poly[i], poly[(i + 1) % n]);
    }
    return res / 2;
  }
}
