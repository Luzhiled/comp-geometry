#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./circle.hpp"
#include "./segment.hpp"
#include "./polygon.hpp"
#include "./product.hpp"
#include "./distance.hpp"
#include "./cross_point_cl.hpp"

namespace geometry {
  real_number ca_cp_impl(const circle &c, const point &a, const point &b) {
    point va = c.p - a, vb = c.p - b;
    real_number f = cross(va, vb), res = 0;

    if (sign(f) == 0) return res;
    if (sign(max(abs(va), abs(vb)) - c.r) <= 0) return f;

    point d(dot(va, vb), cross(va, vb));
    if (sign(distance(segment(a, b), c.p) - c.r) >= 0) 
      return norm(c.r) * atan2(d.imag(), d.real());

    points ps = cross_point_cl(c, segment(a, b));
    if (ps.empty()) return res;
    if (ps.size() == 2 and sign(dot(ps[1] - ps[0], a - ps[0])) >= 0)
      swap(ps[0], ps[1]);

    ps.emplace(ps.begin(), a);
    ps.emplace_back(b);
    for (int i = 1; i < (int)ps.size(); i++) 
      res += ca_cp_impl(c, ps[i - 1], ps[i]);

    return res;
  }

  real_number common_area_cp(const circle &c, const polygon &p) {
    int n = p.size();
    if (n < 3) return 0;

    real_number res = 0;
    for (int i = 0; i < n; ++i) {
      res += ca_cp_impl(c, p[i], p[(i + 1) % n]);
    }
    
    return res / 2;
  };
}
