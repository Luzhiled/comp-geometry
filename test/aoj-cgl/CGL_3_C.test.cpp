// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_3_C

#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../src/polygon.hpp"
#include "../../src/contains.hpp"
#undef call_from_test

using namespace geometry;
int main() {
  int n;
  cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    cin >> p;
  }

  int q;
  cin >> q;

  while (q--) {
    point p;
    cin >> p;

    cout << contains(poly, p) << endl;
  }
}
