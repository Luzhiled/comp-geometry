// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_B
// verification-helper: ERROR 0.000001

#include <iostream>

#include "../../../src/inscribed_circle.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  point a, b, c;
  std::cin >> a >> b >> c;

  circle cir = inscribed_circle(a, b, c);
  
  std::cout << cir.p << " " << cir.r << std::endl;
}
