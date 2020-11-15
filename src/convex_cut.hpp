#pragma once

using namespace std;

#include "./base.hpp"
#include "./polygon.hpp"
#include "./line.hpp"
#include "./product.hpp"

// convex cut
namespace geometry {
  polygon convex_cut(const polygon &poly, const line &l) {
    polygon res;
    int n = poly.size();
    for (int i = 0; i < n; ++i) {
      int j = (i + 1 == n ? 0 : i + 1);

      real_number cf = cross(l.a - poly[i], l.b - poly[i]);
      real_number cs = cross(l.a - poly[j], l.b - poly[j]);

      if (sign(cf) >= 0) res.emplace_back(poly[i]);
      if (sign(cf) * sign(cs) < 0) {
        real_number s = cross(poly[j] - poly[i], l.a - l.b);
        real_number t = cross(l.a - poly[i], l.a - l.b);
        res.emplace_back(poly[i] + t / s * (poly[j] - poly[i]));
      }
    }

    return res;
  }
}
