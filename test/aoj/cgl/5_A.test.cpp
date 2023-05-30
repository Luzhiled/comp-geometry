// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A 
// verification-helper: ERROR 0.000001

#include <iostream>

#include "../../../src/closest_pair.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  std::cin >> n;

  points pts(n);
  for (auto &p: pts) std::cin >> p;

  std::cout << closest_pair(pts) << std::endl;
}
