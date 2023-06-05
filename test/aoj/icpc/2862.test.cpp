// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2862

#include "src/real-geometry/class/circle.hpp"
#include "src/real-geometry/distance/distance-sp.hpp"

#include <iostream>
#include <bitset>

using namespace geometry;

using R = long double;

std::vector< int > dp;
std::vector< R > rs;
segments<R> ss;

bool can_move(int idx, int bit) {
  int n = rs.size();
  for (int i = 0; i < n; i++) {
    if (i == idx) continue;
    point<R> p;
    if (bit & (1 << i)) p = ss[i].b;
    else p = ss[i].a;

    if (sign(distance_sp(ss[idx], p) - (rs[idx] + rs[i])) < 0) return false;
  }

  return true;
}

int calc(int bit) {
  int &res = dp[bit];

  if (res != -1) return res;
  res = 0;

  int n = rs.size();
  for (int i = 0; i < n; i++) {
    if (bit & (1 << i)) continue;
    if (!can_move(i, bit)) continue;
    res = std::max(res, calc(bit | (1 << i)) + 1);
  }

  return res;
}

int main() {
  int n;
  std::cin >> n;

  dp.assign(1 << n, -1);
  rs.resize(n);
  ss.resize(n);

  for (int i = 0; i < n; i++) {
    std::cin >> rs[i] >> ss[i].a >> ss[i].b;
  }

  std::cout << calc(0) << std::endl;
}
