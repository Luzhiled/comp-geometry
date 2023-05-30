// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A

#include "src/real-geometry/position/is-orthogonal.hpp"
#include "src/real-geometry/position/is-parallel.hpp"

#include <iostream>

int main() {
  using R = long double;

  int q;
  std::cin >> q;

  while (q--) {
    geometry::line<R> l1, l2;
    std::cin >> l1.a >> l1.b >> l2.a >> l2.b;

    if (is_parallel(l1, l2)) {
      std::cout << 2 << std::endl;
    } else if (is_orthogonal(l1, l2)) {
      std::cout << 1 << std::endl;
    } else {
      std::cout << 0 << std::endl;
    }
  }
}
