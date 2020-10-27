#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./circle.hpp"
#include "./line.hpp"
#include "./point.hpp"
#include "./cross_point_cc.hpp"

namespace geometry {
  points tangent_cp(const circle &c, const point &p) {
    circle t(p, sqrt(norm(c.p - p) - norm(c.r)));
    return cross_point_cc(c, t);
  }
}
