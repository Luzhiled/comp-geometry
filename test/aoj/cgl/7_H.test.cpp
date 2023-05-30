// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_H
// verification-helper: ERROR 0.000001

#include "src/real-geometry/area/common-area-circle-polygon.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  int n;
  R r;
  std::cin >> n >> r;

  geometry::circle<R> c({0, 0}, r);

  geometry::polygon<R> poly(n);
  for (auto &p : poly) std::cin >> p;

  std::cout << geometry::common_area_circle_polygon(c, poly) << std::endl;
}
