// verification-helper: IGNORE
// verification-helper: PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f
// verification-helper: ERROR 1e-6
#include <iostream>

#include "../../src/point.hpp"
#include "../../src/minimum_covering_circle.hpp"
#include "../../src/util/io_set.hpp"

using namespace geometry;

int main() {
  IoSetup(20);
  int n;
  std::cin >> n;

  points pts(n);
  for (auto &p : pts) std::cin >> p;

  cout << minimum_covering_circle(pts, 1333333333).r << std::endl;
}
