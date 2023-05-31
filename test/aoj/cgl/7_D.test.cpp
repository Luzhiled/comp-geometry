// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_D
// verification-helper: ERROR 0.000001

#include "src/real-geometry/cross-point/cross-point-cl.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <algorithm>

int main() {
  using R = long double;

  geometry::circle<R> c;
  std::cin >> c.o >> c.r;

  int q;
  std::cin >> q;

  while (q--) {
    geometry::line<R> l;
    std::cin >> l.a >> l.b;

    geometry::points<R> pts = geometry::cross_point_cl(c, l);
    if (pts.size() == 1) {
      pts.emplace_back(pts[0]);
    }

    if (not compare_x(pts[0], pts[1])) std::swap(pts[0], pts[1]);

    std::cout << pts[0].x() << " " << pts[0].y() << " " << pts[1].x() << " " << pts[1].y() << std::endl;
  }
}
