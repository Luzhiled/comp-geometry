// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_B
// verification-helper: ERROR 0.00000001

#include <iostream>
using namespace std;

#include "../../src/reflection.hpp"
#include "../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  point p1, p2;
  cin >> p1 >> p2;

  line l(p1, p2);

  int q;
  cin >> q;

  while (q--) {
    point p;
    cin >> p;

    cout << reflection(l, p) << endl;
  }
}
