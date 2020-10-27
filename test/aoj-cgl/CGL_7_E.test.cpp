// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_E
// verification-helper: ERROR 0.000001

#include <bits/stdc++.h>
using namespace std;

#include "../../src/cross_point_cc.hpp"
#include "../../src/compare.hpp"

using namespace geometry;
int main() {
  circle c1, c2;
  cin >> c1.p >> c1.r;
  cin >> c2.p >> c2.r;

  points pts = cross_point_cc(c1, c2);
  cerr << "size : " << pts.size() << endl;
  if (pts.size() == 1) pts.emplace_back(pts[0]);

  if (!compare_x(pts[0], pts[1])) swap(pts[0], pts[1]);

  cout << fixed << setprecision(15);
  cout << pts[0] << " " << pts[1] << endl;
}
