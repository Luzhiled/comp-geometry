#pragma once

using namespace std;

#include "./base.hpp"
#include "./line.hpp"
#include "./product.hpp"

// cross point
namespace geometry {
  point cross_point_ll(const line &l1, const line &l2) {
    real_number a = cross(l1.b - l1.a, l2.b - l2.a);
    real_number b = cross(l1.b - l1.a, l1.b - l2.a);
    if (equals(a, 0) && equals(b, 0)) return l2.a;
    return l2.a + (l2.b - l2.a) * b / a;
  }
}
