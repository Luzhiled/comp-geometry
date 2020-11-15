// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_3_C

#include <iostream>
using namespace std;

#include "../../src/polygon.hpp"
#include "../../src/contains.hpp"

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
