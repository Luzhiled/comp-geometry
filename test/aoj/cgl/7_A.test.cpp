// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A

#include <iostream>

#include "../../../src/intersect_cc.hpp"

using namespace geometry;
int main() {
  circle c1, c2;
  std::cin >> c1.p >> c1.r;
  std::cin >> c2.p >> c2.r;

  std::cout << intersect_cc(c1, c2) << std::endl;
}
