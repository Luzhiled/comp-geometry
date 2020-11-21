// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2442
// verification-helper: ERROR 0.0001

#include <iostream>
#include <cstdlib>

#include "../../../src/point.hpp"
#include "../../../src/segment.hpp"
#include "../../../src/is_parallel.hpp"

using namespace geometry;

void drop() {
  std::cout << "NA" << endl;
  exit(0);
}

int main() {
  int n;
  std::cin >> n;

  if (n & 1) drop();

  points ps(n);
  for (auto &p : ps) {
    std::cin >> p;
  }

  segments ss;
  for (int i = 0; i < n; i++) {
    ss.emplace_back(ps[i], ps[(i + 1) % n]);
  }

  for (int i = 0; i < n; i++) {
    int j = (i + n / 2) % n;
    if (is_parallel(ss[i], ss[j]) == false) {
      drop();
    }

    if (equals(abs(ss[i].a - ss[i].b), abs(ss[j].a - ss[j].b)) == false) {
      drop();
    }
  }

  std::cout << (ps[0] + ps[(n / 2) % n]) * (1.0 / 2.0) << std::endl;
}
