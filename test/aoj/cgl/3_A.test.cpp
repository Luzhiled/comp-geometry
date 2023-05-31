// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A

#include "src/real-geometry/area/polygon-area.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::polygon<R> poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  geometry::IoSetup(1);
  std::cout << geometry::polygon_area(poly) << std::endl;
}
