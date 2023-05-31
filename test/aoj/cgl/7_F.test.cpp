// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F
// verification-helper: ERROR 0.00001

#include "src/real-geometry/circle-lib/tangent-cp.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <algorithm>

int main() {
  using R = long double;

  geometry::point<R> p;
  std::cin >> p;

  geometry::circle<R> c;
  std::cin >> c.o >> c.r;

  geometry::points<R> pts = geometry::tangent_cp(c, p);
  std::sort(pts.begin(), pts.end(), geometry::compare_x<R>);

  for (auto &p : pts) std::cout << p.x() << " " << p.y() << std::endl;
}
