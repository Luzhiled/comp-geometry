// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B

#include <iostream>
using namespace std;

#include "../../src/segment.hpp"
#include "../../src/is_intersect.hpp"

using namespace geometry;
int main() {
  int q;
  cin >> q;

  while (q--) {
    segment s1, s2;
    cin >> s1.a >> s1.b >> s2.a >> s2.b;

    cout << is_intersect(s1, s2) << endl;
  }
}
