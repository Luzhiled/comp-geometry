// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_3_C

#include <iostream>

#include "../../../src/polygon.hpp"
#include "../../../src/contains.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  int q;
  std::cin >> q;

  while (q--) {
    point p;
    std::cin >> p;

    std::cout << contains(poly, p) << std::endl;
  }
}
