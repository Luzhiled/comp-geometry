// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B

#include <iostream>

#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/position/intersect-ss.hpp"

int main() {
  using R = long double;

  int q;
  std::cin >> q;

  while (q--) {
    geometry::segment<R> s1, s2;
    std::cin >> s1.a >> s1.b >> s2.a >> s2.b;

    std::cout << intersect_ss(s1, s2) << std::endl;
  }
}
