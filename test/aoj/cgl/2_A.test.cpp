// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A

#include <iostream>

#include "../../../src/is_parallel.hpp"
#include "../../../src/is_orthogonal.hpp"

using namespace geometry;
int main() {
  int q;
  std::cin >> q;

  while (q--) {
    line l1, l2;
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
