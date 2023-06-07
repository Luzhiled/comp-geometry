#pragma once

#include "src/real-geometry/circle-lib/circumscribed-circle.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/position/in-circle.hpp"

#include <random>
#include <algorithm>

namespace geometry {

  template< typename R >
  circle<R> minimum_covering_circle(points<R> pts, unsigned int seed) {
    auto make_circle = [](const point<R> &a, const point<R> &b) {
      return circle<R>(point<R>(a + b) * 0.5, abs(a - b) * 0.5);
    };

    int n = pts.size();
    if (n == 1) return circle<R>(pts[0], 0);

    std::mt19937 engine(seed);
    std::shuffle(pts.begin(), pts.end(), engine);
    circle<R> res(point<R>(), -1);

    for (int i = 0; i < n; i++) {
      if (in_circle(res, pts[i])) continue;
      res = circle<R>(pts[i], 0);

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
