// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I
// verification-helper: ERROR 0.000001

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/area/common-area-cc.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  geometry::circle<R> c1, c2;
  std::cin >> c1.o >> c1.r;
  std::cin >> c2.o >> c2.r;

  std::cout << geometry::common_area_cc(c1, c2) << std::endl;
}
