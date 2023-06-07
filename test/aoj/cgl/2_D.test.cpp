// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_D
// verification-helper: ERROR 0.00000001

#include "src/real-geometry/distance/distance-ss.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  int q;
  std::cin >> q;

  while (q--) {
    geometry::segment<R> s1, s2;
    std::cin >> s1.a >> s1.b >> s2.a >> s2.b;

    std::cout << geometry::distance_ss(s1, s2) << std::endl;
  }
}
