#pragma once

#include <algorithm>

#include "./point.hpp"
#include "./polygon.hpp"
#include "./compare.hpp"
#include "./product.hpp"

// convex_hull
namespace geometry {
  polygon convex_hull(points poly) {
    int n = poly.size(), k = 0;
    if (n <= 2) return poly;

    sort(poly.begin(), poly.end(), compare_x);
    polygon res(2 * n);

    auto check = [&](int i) {
      return sign(cross(res[k - 1] - res[k - 2], poly[i] - res[k - 1])) == -1;
    };

    for (int i = 0; i < n; res[k++] = poly[i++]) {
      while (k >= 2 and check(i)) --k;
    }

    for (int i = n - 2, t = k + 1; i >= 0; res[k++] = poly[i--]) {
      while (k >= t and check(i)) --k;
    }

    res.resize(k - 1);
    return res;
  }
}
