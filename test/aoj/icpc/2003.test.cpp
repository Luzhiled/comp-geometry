// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2003

#include <iostream>
#include <vector>
#include <algorithm>

#include "../../../src/is_intersect.hpp"
#include "../../../src/compare.hpp"
#include "../../../src/distance_sp.hpp"
#include "../../../src/cross_point_ll.hpp"

using namespace geometry;

void solve() {
  set_eps(1e-9);

  segment s;
  std::cin >> s.a >> s.b;

  int n;
  std::cin >> n;

  segments rs(n);
  std::vector< int > os(n), ls(n);
  for (int i = 0; i < n; i++) {
    std::cin >> rs[i].a >> rs[i].b >> os[i] >> ls[i];
  }

  using T = std::pair< point, bool >;
  std::vector< T > pts;
  for (int i = 0; i < n; i++) {
    if (!is_intersect(s, rs[i])) continue;

    point p = cross_point_ll(s, rs[i]);

    if (sign(distance_sp(s, p)) != 0) continue;
    if (sign(distance_sp(rs[i], p)) != 0) continue;

    pts.emplace_back(p, os[i] xor ls[i]);
  }

  auto comp = [](const T &a, const T &b) { return compare_x(a.first, b.first); };
  std::sort(pts.begin(), pts.end(), comp);

  int ans = 0;
  for (int i = 1; i < (int)pts.size(); i++) {
    if (pts[i].second != pts[i - 1].second) ans += 1;
  }

  std::cout << ans << std::endl;
}

int main() {
  int T;
  std::cin >> T;

  while (T--) {
    solve();
  }
}

