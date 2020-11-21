// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A

#include <iostream>

#include "../../../src/polygon.hpp"
#include "../../../src/convex_hull.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  points pts(n);
  for (auto &p: pts) {
    std::cin >> p;
  }

  polygon poly = convex_hull(pts);

  n = (int)poly.size();
  std::cout << n << std::endl;

  int idx = 0;
  for (int i = 0; i < n; ++i) {
    if (compare_y(poly[i], poly[idx])) {
      idx = i;
    }
  }

  IoSetup(0);
  for (int i = 0; i < n; ++i) {
    std::cout << poly[(i + idx) % n] << std::endl;
  }
}
