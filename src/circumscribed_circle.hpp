#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./circle.hpp"
#include "./point.hpp"
#include "./line.hpp"
#include "./cross_point_ll.hpp"

namespace geometry {
  circle circumscribed_circle(const point &a, const point &b, const point &c) {
    point m1((a + b) / real_number(2)), m2((b + c) / real_number(2));
    point v((b - a).imag(), (a - b).real()), w((b - c).imag(), (c - b).real());
    line s(m1, point(m1 + v)), t(m2, point(m2 + w));

    point p = cross_point_ll(s, t);
    return circle(p, abs(a - p));
  }
}
