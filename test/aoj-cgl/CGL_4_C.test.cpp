// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_C
// verification-helper: ERROR 0.00001

#include <iostream>
using namespace std;

#include "../../src/line.hpp"
#include "../../src/area.hpp"
#include "../../src/convex_cut.hpp"
#include "../../src/util/io_set.hpp"

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
    line l;
    cin >> l.a >> l.b;

    cout << area(convex_cut(poly, l)) << endl;
  }
}
