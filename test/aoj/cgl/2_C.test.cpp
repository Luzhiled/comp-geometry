// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_C
// verification-helper: ERROR 0.00000001

#include <iostream>

#include "../../../src/segment.hpp"
#include "../../../src/cross_point_ll.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int q;
  std::cin >> q;

  while (q--) {
    segment s1, s2;
    std::cin >> s1.a >> s1.b >> s2.a >> s2.b;

    std::cout << cross_point_ll(s1, s2) << std::endl;
  }
}
