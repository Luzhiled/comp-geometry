// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C
// verification-helper: ERROR 0.000001 

#include <bits/stdc++.h>
using namespace std;

#include "../../src/circumscribed_circle.hpp"

using namespace geometry;
int main() {
  point a, b, c;
  cin >> a >> b >> c;

  circle cir = circumscribed_circle(a, b, c);
  
  cout << fixed << setprecision(15);
  cout << cir.p << " " << cir.r << endl;
}
