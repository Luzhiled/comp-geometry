// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2442
// verification-helper: ERROR 0.0001

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/position/is-parallel.hpp"

#include <iostream>
#include <cstdlib>

using namespace geometry;

void drop() {
  std::cout << "NA" << endl;
  exit(0);
}

int main() {
  using R = long double;

  int n;
  std::cin >> n;

  if (n & 1) drop();

  points<R> ps(n);
  for (auto &p : ps) {
    std::cin >> p;
  }

  segments<R> ss;
  for (int i = 0; i < n; i++) {
    ss.emplace_back(ps[i], ps[(i + 1) % n]);
  }

  for (int i = 0; i < n; i++) {
    int j = (i + n / 2) % n;
    if (is_parallel(ss[i], ss[j]) == false) {
      drop();
    }

    if (equals(std::abs(ss[i].a - ss[i].b), std::abs(ss[j].a - ss[j].b)) == false) {
      drop();
    }
  }

  std::cout << (ps[0] + ps[n / 2]) * 0.5 << std::endl;
}
