#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./polygon.hpp"
#include "./angle.hpp"

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
