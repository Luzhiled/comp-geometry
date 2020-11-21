// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A

#include <iostream>

#include "../../../src/area.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  IoSetup(1);
  std::cout << area(poly) << std::endl;
}
