// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A

#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../src/polygon.hpp"
#include "../../src/convex_hull.hpp"
#undef call_from_test

using namespace geometry;
int main() {
  int n;
  cin >> n;

  points pts(n);
  for (auto &p: pts) {
    cin >> p;
  }

  polygon poly = convex_hull(pts);

  n = (int)poly.size();
  cout << n << endl;

  int idx = 0;
  for (int i = 0; i < n; ++i) {
    if (compare_y(poly[i], poly[idx])) {
      idx = i;
    }
  }

  cout << fixed << setprecision(0);
  for (int i = 0; i < n; ++i) {
    cout << poly[(i + idx) % n] << endl;
  }
}
