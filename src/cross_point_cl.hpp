#pragma once

#include <cmath>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"
#include "./circle.hpp"
#include "./line.hpp"
#include "./projection.hpp"

namespace geometry {
  points cross_point_cl(const circle &c, const line &l) {
    point pr = projection(l, c.p);

    if (equals(abs(pr - c.p), c.r)) {
      return {pr};
    }

    points pts;
    point e = (l.b - l.a) / abs(l.b - l.a);
    real_number k = sqrt(norm(c.r) - norm(pr - c.p));
    pts.emplace_back(pr + e * k);
    pts.emplace_back(pr - e * k);
    return pts;
  }
}
