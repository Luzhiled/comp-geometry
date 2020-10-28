// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_D
// verification-helper: ERROR 0.00000001

#include <bits/stdc++.h>
using namespace std;

#include "../../src/distance_ss.hpp"

using namespace geometry;
int main() {
  int q;
  cin >> q;

  cout << fixed << setprecision(15);
  while (q--) {
    segment s1, s2;
    cin >> s1.a >> s1.b >> s2.a >> s2.b;

    cout << distance(s1, s2) << endl;
  }
}
