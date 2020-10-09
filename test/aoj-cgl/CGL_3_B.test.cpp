// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B

#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../src/is_convex.hpp"
#undef call_from_test

using namespace geometry;
int main() {
  int n;
  cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    cin >> p;
  }

  cout << is_convex(poly) << endl;
}
