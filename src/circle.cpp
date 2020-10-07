#include <bits/stdc++.h>
using namespace std;

#include "./point.cpp"

// circle
namespace geometry {
  struct circle {
    point p;
    real_number r;
    circle(point p, real_number r) : p(p), r(r) {}
  };

  using circles = vector< circle >;
}
