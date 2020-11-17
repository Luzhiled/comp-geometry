// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B
// verification-helper: ERROR 0.000001

#include <iostream>
using namespace std;

#include "../../../src/convex_diameter.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  cin >> n;

  polygon poly(n);
  for (auto &p: poly) cin >> p;

  cout << convex_diameter(poly) << endl;
}
