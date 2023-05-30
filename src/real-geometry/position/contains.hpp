#pragma once

#include <algorithm>

#include "./base.hpp"
#include "./product.hpp"
#include "./polygon.hpp"
#include "./point.hpp"

namespace geometry {
  /// O(N)
  /// 0 : point out the polygon
  /// 1 : point on the polygon edge
  /// 2 : point in the polygon
  constexpr int OUT     = 0;
  constexpr int ON_EDGE = 1;
  constexpr int IN      = 2;
  int contains(const polygon &poly, const point &p) {
    bool in = false;
    int n = poly.size();
    for (int i = 0; i < n; ++i) {
      int j = (i + 1 == n ? 0 : i + 1);
      point a = poly[i] - p, b = poly[j] - p;
      if (a.imag() > b.imag()) swap(a, b);
      if (a.imag() <= 0 && 0 < b.imag() && cross(a, b) < 0) in = !in;
      if (sign(cross(a, b)) == 0 && sign(dot(a, b)) <= 0) {
        return ON_EDGE;
      }
    }

    return in ? IN : OUT;
  }
}
