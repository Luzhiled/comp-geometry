// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I
// verification-helper: ERROR 0.000001

#include <iostream>
using namespace std;

#include "../../../src/circle.hpp"
#include "../../../src/common_area_cc.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  circle c1, c2;
  cin >> c1.p >> c1.r;
  cin >> c2.p >> c2.r;

  cout << common_area_cc(c1, c2) << endl;
}
