// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_A

#include <iostream>
using namespace std;

#include "../../../src/area.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int n;
  cin >> n;

  polygon poly(n);
  for (auto &p: poly) {
    cin >> p;
  }

  IoSetup(1);
  cout << area(poly) << endl;
}
