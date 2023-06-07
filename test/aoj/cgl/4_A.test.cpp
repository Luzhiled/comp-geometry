// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A

#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/compare/compare-y.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/point-cloud/convex-hull.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;
  using usize = geometry::usize;

  usize n;
  std::cin >> n;

  geometry::points<R> pts(n);
  for (auto &p: pts) {
    std::cin >> p;
  }

  geometry::polygon<R> poly = geometry::convex_hull(pts);

  std::cout << poly.size() << std::endl;

  usize offset = 0;
  for (usize i = 0; i < poly.size(); i++) {
    if (geometry::compare_y(poly[i], poly[offset])) {
      offset = i;
    }
  }

  geometry::IoSetup(0);
  for (usize i = 0; i < poly.size(); i++) {
    auto p = poly[(offset + i) % poly.size()];
    std::cout << p.x() << " " << p.y() << std::endl;
  }
}
