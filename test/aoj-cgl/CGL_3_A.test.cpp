// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A

#include <bits/stdc++.h>
using namespace std;

#include "../../src/area.hpp"

using namespace geometry;
int main() {
  int n;
  cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    cin >> p;
  }

  cout << fixed << setprecision(1);
  cout << area(poly) << endl;
}
