// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_D
// verification-helper: ERROR 0.00000001

#include <iostream>
using namespace std;

#include "../../../src/distance_ss.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;
int main() {
  int q;
  cin >> q;

  while (q--) {
    segment s1, s2;
    cin >> s1.a >> s1.b >> s2.a >> s2.b;

    cout << distance_ss(s1, s2) << endl;
  }
}
