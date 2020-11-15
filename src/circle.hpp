#pragma once

#include <vector>
using namespace std;

#include "./point.hpp"

// circle
namespace geometry {
  struct circle {
    point p;
    real_number r;
    circle() {}
    circle(point p, real_number r) : p(p), r(r) {}
  };

  using circles = vector< circle >;
}
