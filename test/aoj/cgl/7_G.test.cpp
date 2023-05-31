// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G
// verification-helper: ERROR 0.00001

#include "src/real-geometry/circle-lib/tangent-cc.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/mapping/projection.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <algorithm>

using namespace geometry;
int main() {
  using R = long double;

  geometry::circle<R> c1, c2;
  std::cin >> c1.o >> c1.r;
  std::cin >> c2.o >> c2.r;

  geometry::lines<R> ls = geometry::tangent_cc(c1, c2);

  geometry::points<R> ps;
  for (auto &l : ls) ps.emplace_back(geometry::projection(l, c1.o));
  std::sort(ps.begin(), ps.end(), geometry::compare_x<R>);

  for (auto &p : ps) std::cout << p.x() << " " << p.y() << std::endl;
}
