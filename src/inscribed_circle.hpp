#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./circle.hpp"
#include "./segment.hpp"
#include "./segment.hpp"
#include "./distance.hpp"

namespace geometry {
  circle inscribed_circle(const point &a, const point &b, const point &c) {
    real_number A = abs(b - c), B = abs(c - a), C = abs(a - b);
    point p((a * A + b * B + c * C) / (A + B + C));
    real_number r = distance(segment(a, b), p);
    return circle(p, r);
  }
}