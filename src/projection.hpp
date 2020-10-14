#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./line.hpp"
#include "./product.hpp"

// projection
namespace geometry {
  point projection(const line &l, const point &p) {
    real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);
    return l.a + (l.a - l.b) * t;
  }
}
