// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G
// verification-helper: ERROR 0.00001

#include <iostream>
#include <algorithm>
using namespace std;

#include "../../../src/tangent_cc.hpp"
#include "../../../src/projection.hpp"
#include "../../../src/compare.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  circle c1, c2;
  cin >> c1.p >> c1.r;
  cin >> c2.p >> c2.r;

  lines ls = tangent_cc(c1, c2);
  points ps;
  for (auto &l : ls) ps.emplace_back(projection(l, c1.p));
  sort(ps.begin(), ps.end(), compare_x);

  for (auto &p : ps) cout << p << endl;
}
