// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_H
// verification-helper: ERROR 0.000001

#include <iostream>

#include "../../../src/point.hpp"
#include "../../../src/circle.hpp"
#include "../../../src/polygon.hpp"
#include "../../../src/common_area_cp.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  circle c(point(0, 0), 0);
  int n;
  
  std::cin >> n >> c.r;

  polygon poly(n);
  for (auto &p : poly) std::cin >> p;

  std::cout << common_area_cp(c, poly) << std::endl;
}
