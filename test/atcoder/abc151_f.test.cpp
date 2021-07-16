// verification-helper: PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f
// verification-helper: ERROR 1e-6

#include <iostream>
#include <vector>
using namespace std;

#include "src/point.hpp"
#include "src/minimum_covering_circle.hpp"
#include "src/util/io_set.hpp"

using geometry::operator>>;

int main() {
  int n;
  cin >> n;

  geometry::points pts(n);
  for (auto &pt: pts) cin >> pt;

  cout << geometry::minimum_covering_circle(pts, 1333333333).r << endl;
}
