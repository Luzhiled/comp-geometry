#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./projection.hpp"
#include "./line.hpp"
#include "./point.hpp"

namespace geometry {
  point reflection(const line &l, const point &p) {
    return p + (projection(l, p) - p) * 2;
  }
}
