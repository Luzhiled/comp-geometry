// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A
// verification-helper: ERROR 0.00000001

#include "src/real-geometry/common/float-alias.hpp"
#include "src/real-geometry/mapping/projection.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = geometry::f80;
  geometry::point<R> p1, p2;
  std::cin >> p1 >> p2;

  geometry::line<R> l(p1, p2);

  int q;
  std::cin >> q;

  while (q--) {
    geometry::point<R> p;
    std::cin >> p;

    auto pt = geometry::projection(l, p);
    std::cout << pt.x() << " " << pt.y() << std::endl;
  }
}
