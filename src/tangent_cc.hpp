#pragma once

#include <algorithm>
#include <cmath>
#include <complex>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./circle.hpp"
#include "./line.hpp"

namespace geometry {
  lines tangent_cc(circle c1, circle c2) {
    lines ls;
    if (c1.r > c2.r) swap(c1, c2);

    real_number g = norm(c1.p - c2.p);
    if (sign(g) == 0) return ls;

    point u = (c1.p - c2.p) / sqrt(g);
    point v(-u.imag(), u.real());

    for (int s = 1; s >= -1; s -= 2) {
      real_number h = (c1.r * s + c2.r) / sqrt(g);
      if (sign(1 - norm(h)) == 0) {
        ls.emplace_back(c2.p + u * c2.r, c2.p + (u + v) * c2.r);
      } else if (sign(1 - norm(h)) > 0) {
        point uu = u * h;
        point vv = v * sqrt(1 - norm(h));
        ls.emplace_back(c2.p + (uu + vv) * c2.r, c1.p - (uu + vv) * c1.r * s);
        ls.emplace_back(c2.p + (uu - vv) * c2.r, c1.p - (uu - vv) * c1.r * s);
      }
    }

    return ls;
  }
}
