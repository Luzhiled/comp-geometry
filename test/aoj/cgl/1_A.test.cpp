// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A
// verification-helper: ERROR 0.00000001

#include <iostream>

#include "../../../src/projection.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  point p1, p2;
  std::cin >> p1 >> p2;

  line l(p1, p2);

  int q;
  std::cin >> q;

  while (q--) {
    point p;
    std::cin >> p;

    std::cout << projection(l, p) << std::endl;
  }
}
