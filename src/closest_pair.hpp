#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./compare.hpp"

namespace geometry {
  real_number impl_closest_pair(points &pts, int l, int r) {
    if (r - l <= 1) return abs(pts[0] - pts[1]);
    int m = (l + r) / 2;
    real_number x = pts[m].real();
    real_number d = min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r));
    inplace_merge(pts.begin() + l, pts.begin() + m, pts.begin() + r, compare_y);

    points ps;
    for (int i = l; i < r; ++i) {
      if (sign(abs(pts[i].real() - x) - d) >= 0) continue;
      for (int j = 0; j < (int)ps.size(); ++j) {
        real_number dy = pts[i].imag() - (*next(ps.rbegin(), j)).imag();
        if (sign(dy - d) >= 0) break;
        d = min(d, abs(pts[i] - *next(ps.rbegin(), j)));
      }

      ps.emplace_back(pts[i]);
    }

    return d;
  }

  real_number closest_pair(points pts) {
    const real_number INF = 1e18;
    if (pts.size() <= 1) {
      return INF;
    }

    sort(pts.begin(), pts.end(), compare_x);

    return impl_closest_pair(pts, 0, pts.size());
  }
}
