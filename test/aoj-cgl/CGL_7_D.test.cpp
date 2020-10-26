// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_D
// verification-helper: ERROR 0.000001

#include <bits/stdc++.h>
using namespace std;

#include "../../src/cross_point_cl.hpp"
#include "../../src/compare.hpp"

using namespace geometry;
int main() {
  circle c;
  cin >> c.p >> c.r;

  int q;
  cin >> q;

  cout << fixed << setprecision(15);
  while (q--) {
    line l;
    cin >> l.a >> l.b;

    points pts = cross_point_cl(c, l);
    if (pts.size() == 1) {
      pts.emplace_back(pts[0]);
    }

    if (!compare_x(pts[0], pts[1])) swap(pts[0], pts[1]);

    cout << pts[0] << " " << pts[1] << endl;
  }
}
