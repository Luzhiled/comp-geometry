// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_E
// verification-helper: ERROR 0.000001

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/cross-point/cross-point-cc.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <algorithm>

using namespace geometry;
int main() {
  using R = long double;

  geometry::circle<R> c1, c2;
  std::cin >> c1.o >> c1.r;
  std::cin >> c2.o >> c2.r;

  geometry::points<R> pts = geometry::cross_point_cc(c1, c2);
  if (pts.size() == 1) pts.emplace_back(pts[0]);

  if (not compare_x(pts[0], pts[1])) std::swap(pts[0], pts[1]);

  std::cout << pts[0].x() << " " << pts[0].y() << " ";
  std::cout << pts[1].x() << " " << pts[1].y() << std::endl;
}
