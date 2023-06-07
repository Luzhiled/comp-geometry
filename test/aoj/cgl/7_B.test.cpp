// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_B
// verification-helper: ERROR 0.000001

#include "src/real-geometry/circle-lib/inscribed-circle.hpp"
#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  geometry::point<R> a, b, c;
  std::cin >> a >> b >> c;

  geometry::circle<R> cir = geometry::inscribed_circle(a, b, c);
  
  std::cout << cir.o.x() << " " << cir.o.y() << " " << cir.r << std::endl;
}
