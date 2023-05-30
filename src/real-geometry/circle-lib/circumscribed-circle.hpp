#pragma once

#include "./base.hpp"
#include "./circle.hpp"
#include "./point.hpp"
#include "./line.hpp"
#include "./product.hpp"

namespace geometry {
  circle circumscribed_circle(const point &a, const point &b, const point &c) {
    real_number A = norm(b - c), B = norm(c - a), C = norm(a - b);
    real_number S = norm(cross(b - a, c - a)), T = A + B + C;
    point p = (A*(T - 2*A) * a + B*(T - 2*B) * b + C*(T - 2*C) * c) / (4 * S);
    return circle(p, abs(p - a));
  }
}
