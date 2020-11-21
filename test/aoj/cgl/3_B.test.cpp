// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B

#include <iostream>

#include "../../../src/is_convex.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  std::cout << is_convex(poly) << std::endl;
}
