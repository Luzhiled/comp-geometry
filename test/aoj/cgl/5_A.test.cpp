// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A 
// verification-helper: ERROR 0.000001

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/point-cloud/closest-pair.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <complex>

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::points<R> pts(n);
  for (auto &p: pts) std::cin >> p;

  auto [d, _] = geometry::closest_pair(pts);
  std::cout << d << std::endl;
}
