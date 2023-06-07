// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_B
// verification-helper: ERROR 0.00000001

#include <iostream>

#include "src/real-geometry/mapping/reflection.hpp"
#include "src/real-geometry/utility/io-set.hpp"
#include "src/real-geometry/utility/io-set.hpp"

int main() {
  using R = geometry::f80;
  geometry::point< R > p1, p2;
  std::cin >> p1 >> p2;

  geometry::line<R> l(p1, p2);

  int q;
  std::cin >> q;

  while (q--) {
    geometry::point<R> p;
    std::cin >> p;

    auto pt = reflection(l, p);
    std::cout << pt.x() << " " << pt.y() << std::endl;
  }
}
