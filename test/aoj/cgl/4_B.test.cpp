// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B
// verification-helper: ERROR 0.000001

#include <iostream>

#include "src/real-geometry/convex/convex-diameter.hpp"
#include "src/real-geometry/utility/io-set.hpp"

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::polygon<R> poly(n);
  for (auto &p: poly) std::cin >> p;

  std::cout << geometry::convex_diameter(poly) << std::endl;
}
