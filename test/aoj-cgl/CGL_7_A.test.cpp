// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/7/CGL_7_A

#include <bits/stdc++.h>
using namespace std;

#include "../../src/intersect_cc.hpp"

using namespace geometry;
int main() {
  circle c1, c2;
  cin >> c1.p >> c1.r;
  cin >> c2.p >> c2.r;

  cout << intersect_cc(c1, c2) << endl;
}
