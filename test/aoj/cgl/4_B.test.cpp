// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B
// verification-helper: ERROR 0.000001

#include <iostream>

#include "../../../src/convex_diameter.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  polygon poly(n);
  for (auto &p: poly) std::cin >> p;

  std::cout << convex_diameter(poly) << std::endl;
}
