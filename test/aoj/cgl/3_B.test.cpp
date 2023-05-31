// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B

#include "src/real-geometry/convex/is-convex.hpp"

#include <iostream>

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::polygon<R> poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  std::cout << geometry::is_convex(poly) << std::endl;
}
