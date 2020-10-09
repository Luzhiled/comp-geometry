#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./point.hpp"

// line 
namespace geometry {
  struct line {
    point a, b;

    line() = default;
    line(point a, point b) : a(a), b(b) {}
  };

  using lines = vector< line >;
}
