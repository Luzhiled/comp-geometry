// verification-helper: PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f
// verification-helper: ERROR 1e-6

#include <iostream>
#include <vector>

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/point-cloud/minimum-covering-circle.hpp"
#include "src/real-geometry/utility/io-set.hpp"

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  geometry::points<R> pts(n);
  for (auto &pt: pts) std::cin >> pt;

  std::cout << geometry::minimum_covering_circle(pts, 1333333333).r << std::endl;
}
