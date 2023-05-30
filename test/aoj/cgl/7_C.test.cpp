// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C
// verification-helper: ERROR 0.000001 

#include <iostream>

#include "../../../src/circumscribed_circle.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  point a, b, c;
  std::cin >> a >> b >> c;

  circle cir = circumscribed_circle(a, b, c);
  
  std::cout << cir.p << " " << cir.r << std::endl;
}
