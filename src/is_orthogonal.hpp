#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./line.hpp"
#include "./product.hpp"

// orthogonal
namespace geometry {
  bool is_orthogonal(const line &l1, const line &l2) {
    return is_equal(dot(l1.a - l1.b, l2.a - l2.b), 0);
  }
}
