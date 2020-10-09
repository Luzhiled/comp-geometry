#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./line.hpp"
#include "./angle.hpp"

// parallel
namespace geometry {
  bool is_parallel(const line &l1, const line &l2) {
    return is_equal(cross(l1.b - l1.a, l2.b - l2.a), 0);
  }
}
