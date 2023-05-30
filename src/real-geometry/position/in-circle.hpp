#pragma once

#include "./circle.hpp"
#include "./point.hpp"

namespace geometry {
  bool in_circle(const circle &c, const point &p) {
    return sign(abs(c.p - p) - c.r) == -1;
  }
}
