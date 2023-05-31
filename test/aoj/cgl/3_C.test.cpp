// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_3_C

#include <iostream>

#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/position/point-polygon-positional-relationships.hpp"

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::polygon<R> poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  int q;
  std::cin >> q;

  while (q--) {
    geometry::point<R> p;
    std::cin >> p;

    std::cout << geometry::point_polygon_positional_relationships(p, poly) << std::endl;
  }
}
