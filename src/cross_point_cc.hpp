#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./circle.hpp"

namespace geometry {
  points cross_point_cc(const circle &c1, const circle &c2) {
    real_number d = abs(c1.p - c2.p), r = c1.r + c2.r;
    if (sign(d - r) > 0 or d + c1.r < c2.r) return {};
    
    real_number a = acos((norm(c1.r) - norm(c2.r) + norm(d)) / (2 * c1.r * d));
    real_number t = arg(c2.p - c1.p);
    point p = c1.p + polar(c1.r, t + a);
    point q = c1.p + polar(c1.r, t - a);
    if (is_equal(p.real(), q.real()) and is_equal(p.imag(), q.imag())) return {p};
    return {p, q};
  }
}

