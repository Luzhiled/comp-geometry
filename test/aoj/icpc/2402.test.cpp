// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2402
// verification-helper: ERROR 0.000001

#include <iostream>
using namespace std;

#include "../../../src/point.hpp"
#include "../../../src/distance_ss.hpp"
#include "../../../src/angle.hpp"
#include "../../../src/util/io_set.hpp"

using namespace geometry;

const real_number inf = 1e8;
real_number star_distance(int a, int b, const vector< segments > &stars) {
  real_number res = inf;

  for (auto &seg_a : stars[a]) {
    for (auto &seg_b : stars[b]) {
      res = min(res, distance_ss(seg_a, seg_b));
    }
  }

  return res;
}

using Graph = vector< vector< real_number > >;

void solve(int n, int m, int l) {
  vector< segments > stars(n);
  Graph G(n, vector< real_number >(n));

  for (auto &star : stars) {
    point p;
    real_number a, r;
    cin >> p >> a >> r;

    point v(0, r);
    points ps;
    for (int i = 0; i < 6; i++) {
      ps.emplace_back(v);
      v = rotate(degree_to_radian(144), v);
    }

    for (auto &pt : ps) {
      pt = rotate(degree_to_radian(a), pt);
      pt += p;
    }

    for (int i = 0; i < 5; i++) {
      segment s(ps[i], ps[i + 1]);
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
        G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
      }
    }
  }

  cout << G[m][l] << endl;
}

int main() {
  IoSetup(20);
  int n, m, l;

  while (cin >> n >> m >> l, n) {
    solve(n, m - 1, l - 1);
  }
}
