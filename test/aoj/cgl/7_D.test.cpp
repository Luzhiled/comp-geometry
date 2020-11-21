// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_D
// verification-helper: ERROR 0.000001

#include <iostream>
#include <algorithm>

#include "../../../src/cross_point_cl.hpp"
#include "../../../src/compare.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  circle c;
  std::cin >> c.p >> c.r;

  int q;
  std::cin >> q;

  while (q--) {
    line l;
    std::cin >> l.a >> l.b;

    points pts = cross_point_cl(c, l);
    if (pts.size() == 1) {
      pts.emplace_back(pts[0]);
    }

    if (!compare_x(pts[0], pts[1])) swap(pts[0], pts[1]);

    std::cout << pts[0] << " " << pts[1] << std::endl;
  }
}
