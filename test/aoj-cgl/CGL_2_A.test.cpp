// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A

#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../src/is_parallel.hpp"
#include "../../src/is_orthogonal.hpp"
#undef call_from_test

using namespace geometry;
int main() {
  int q;
  cin >> q;

  while (q--) {
    line l1, l2;
    cin >> l1.a >> l1.b >> l2.a >> l2.b;

    if (is_parallel(l1, l2)) {
      cout << 2 << endl;
    } else if (is_orthogonal(l1, l2)) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
}
