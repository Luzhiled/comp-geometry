#include <bits/stdc++.h>
using namespace std;

#pragma once

#include "./base.cpp"
#include "./line.cpp"
#include "./angle.cpp"

// parallel and orthogonal
namespace geometry {
  bool is_parallel(const line &l1, const line &l2) {
    return is_equal(cross(l1.b - l1.a, l2.b - l2.a), 0);
  }

  bool is_orthogonal(const line &l1, const line &l2) {
    return is_equal(dot(l1.a - l1.b, l2.a - l2.b), 0);
  }
}
