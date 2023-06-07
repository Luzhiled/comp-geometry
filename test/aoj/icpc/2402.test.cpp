// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2402
// verification-helper: ERROR 0.000001

#include "src/real-geometry/angle/degree-to-radian.hpp"
#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/distance/distance-ss.hpp"
#include "src/real-geometry/mapping/rotate.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>
#include <algorithm>

using namespace geometry;

using R = long double;
const R inf = 1e8;

R star_distance(int a, int b, const std::vector< segments< R > > &stars) {
  R res = inf;

  for (auto &seg_a : stars[a]) {
    for (auto &seg_b : stars[b]) {
      res = std::min(res, distance_ss(seg_a, seg_b));
    }
  }

  return res;
}

using Graph = std::vector< std::vector< R > >;

void solve(int n, int m, int l) {
  std::vector< segments< R > > stars(n);
  Graph G(n, std::vector< R >(n));

  for (auto &star : stars) {
    point< R > p;
    R a, r;
    std::cin >> p >> a >> r;

    point< R > v(0, r);
    points< R > ps;
    for (int i = 0; i < 6; i++) {
      ps.emplace_back(v);
      v = rotate<R>(degree_to_radian<R>(144), v);
    }

    for (auto &pt : ps) {
      pt = rotate(degree_to_radian(a), pt);
      pt += p;
    }

    for (int i = 0; i < 5; i++) {
      segment< R > s(ps[i], ps[i + 1]);
      star.emplace_back(s);
    }
  }

  for (int v = 0; v < n; v++) {
    for (int u = 0; u < n; u++) {
      G[v][u] = star_distance(v, u, stars);
    }
  }

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        G[i][j] = std::min(G[i][j], G[i][k] + G[k][j]);
      }
    }
  }

  std::cout << G[m][l] << std::endl;
}

int main() {
  IoSetup(20);
  int n, m, l;

  while (std::cin >> n >> m >> l, n) {
    solve(n, m - 1, l - 1);
  }
}
