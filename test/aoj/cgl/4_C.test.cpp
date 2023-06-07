// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_C
// verification-helper: ERROR 0.00001

#include "src/real-geometry/area/polygon-area.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/convex/convex-cut.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::polygon<R> poly(n);
  for (auto &p: poly) {
    std::cin >> p;
  }

  int q;
  std::cin >> q;

  while (q--) {
    geometry::line<R> l;
    std::cin >> l.a >> l.b;

    auto c = geometry::convex_cut(poly, l);
    std::cout << geometry::polygon_area(c) << std::endl;
  }
}
