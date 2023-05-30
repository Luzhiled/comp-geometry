#pragma once

#include <random>
#include <algorithm>

#include "./point.hpp"
#include "./circle.hpp"
#include "./in_circle.hpp"
#include "./circumscribed_circle.hpp"

namespace geometry {
  circle minimum_covering_circle(points pts, unsigned int seed) {
    auto make_circle = [](const point &a, const point &b) {
      return circle((a + b) * 0.5, abs(a - b) * 0.5);
    };

    int n = pts.size();
    if (n == 1) return circle(pts[0], 0);
    mt19937 engine(seed);
    shuffle(pts.begin(), pts.end(), engine);
    circle res(point(), -1);

    for (int i = 0; i < n; i++) {
      if (in_circle(res, pts[i])) continue;
      res = circle(pts[i], 0);
      for (int j = 0; j < i; j++) {
        if (in_circle(res, pts[j])) continue;
        res = make_circle(pts[i], pts[j]);
        for (int k = 0; k < j; k++) {
          if (in_circle(res, pts[k])) continue;
          res = circumscribed_circle(pts[i], pts[j], pts[k]);
        }
      }
    }
    return res;
  }
}
