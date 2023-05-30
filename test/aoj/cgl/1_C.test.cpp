// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_C

#include "src/real-geometry/common/float-alias.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/operation/ccw.hpp"

#include <iostream>

using namespace geometry::number::ccw;

int main() {
  using R = geometry::f80;
  using point = geometry::point< R >;

  point p0, p1;
  std::cin >> p0 >> p1;

  int q;
  std::cin >> q;

  while (q--) {
    point p2;
    std::cin >> p2;

    switch (geometry::ccw(p0, p1, p2)) {
      case COUNTER_CLOCKWISE:
        std::cout << "COUNTER_CLOCKWISE" << std::endl;
        break;
      
      case CLOCKWISE:
        std::cout << "CLOCKWISE" << std::endl;
        break;

      case ONLINE_BACK:
        std::cout << "ONLINE_BACK" << std::endl;
        break;

      case ONLINE_FRONT:
        std::cout << "ONLINE_FRONT" << std::endl;
        break;

      case ON_SEGMENT:
        std::cout << "ON_SEGMENT" << std::endl;
        break;
    }
  }
}

