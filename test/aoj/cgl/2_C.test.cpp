// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_C
// verification-helper: ERROR 0.00000001

#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/cross-point/cross-point-ll.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

int main() {
  using R = long double;

  int q;
  std::cin >> q;

  while (q--) {
    geometry::line<R> l1, l2;
    std::cin >> l1.a >> l1.b >> l2.a >> l2.b;

    auto ans = cross_point_ll(l1, l2);
    std::cout << ans.x() << " " << ans.y() << std::endl;
  }
}
