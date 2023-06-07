// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A

#include <iostream>

#include "src/real-geometry/position/intersect-cc.hpp"

int main() {
  using R = long double;

  geometry::circle<R> c1, c2;
  std::cin >> c1.o >> c1.r;
  std::cin >> c2.o >> c2.r;

  std::cout << geometry::intersect_cc(c1, c2) << std::endl;
}
