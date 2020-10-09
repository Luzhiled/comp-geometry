#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./point.cpp"
#include "./polygon.cpp"
#include "./compare.cpp"
#include "./angle.cpp"

// convex_hull
namespace geometry {
  polygon convex_hull(points poly) {
    int n = poly.size(), k = 0;
    if (n <= 2) return poly;
    sort(poly.begin(), poly.end(), compare_x);

    polygon res(2 * n);
    for (int i = 0; i < n; res[k++] = poly[i++]) {
      while (k >= 2 && sign(cross(res[k - 1] - res[k - 2], poly[i] - res[k - 1])) == -1) {
        --k;
      }
    }

    for (int i = n - 2, t = k + 1; i >= 0; res[k++] = poly[i--]) {
      while (k >= t && sign(cross(res[k - 1] - res[k - 2], poly[i] - res[k - 1])) == -1) {
        --k;
      }
    }

    res.resize(k - 1);
    return res;
  }
}
