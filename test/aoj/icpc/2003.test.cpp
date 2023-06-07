// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2003

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/common/const/eps.hpp"
#include "src/real-geometry/common/float-alias.hpp"
#include "src/real-geometry/compare/compare-x.hpp"
#include "src/real-geometry/cross-point/cross-point-ll.hpp"
#include "src/real-geometry/distance/distance-sp.hpp"
#include "src/real-geometry/position/intersect-ss.hpp"
#include "src/real-geometry/utility/sign.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
  using geometry::f80;
  using point = geometry::point<f80>;
  using segment = geometry::segment<f80>;
  using segments = geometry::segments<f80>;

  geometry::set_eps(1e-9);

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
    if (not intersect_ss(s, rs[i])) continue;

    point p = geometry::cross_point_ll<f80>({s.a, s.b}, {rs[i].a, rs[i].b});

    if (geometry::sign(distance_sp(s, p)) != 0) continue;
    if (geometry::sign(distance_sp(rs[i], p)) != 0) continue;

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

