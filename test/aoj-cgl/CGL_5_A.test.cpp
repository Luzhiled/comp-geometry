// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A 
// verification-helper: ERROR 0.000001

#include <bits/stdc++.h>
using namespace std;

#include "../../src/closest_pair.hpp"

using namespace geometry;
int main() {
  int n;
  cin >> n;

  points pts(n);
  for (auto &p: pts) cin >> p;

  cout << fixed << setprecision(15);
  cout << closest_pair(pts) << endl;
}
