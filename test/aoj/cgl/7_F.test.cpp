// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F
// verification-helper: ERROR 0.00001

#include <iostream>
#include <algorithm>
using namespace std;

#include "../../../src/tangent_cp.hpp"
#include "../../../src/point.hpp"
#include "../../../src/compare.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  point p;
  cin >> p;

  circle c;
  cin >> c.p >> c.r;

  points pts = tangent_cp(c, p);
  sort(pts.begin(), pts.end(), compare_x);

  for (auto &p : pts) cout << p << endl;
}
