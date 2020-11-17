// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/1175

#include <iostream>
#include <vector>
using namespace std;

#include "../../../src/circle.hpp"
#include "../../../src/intersect_cc.hpp"

using namespace geometry;

using CI = pair< circle, int >;
vector< int > dp;
vector< int > mask;

void precalc(const vector< CI > &cs) {
  int n = cs.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (intersect_cc(cs[i].first, cs[j].first) >= 3) continue;
      mask[i] |= (1 << j);
    }
  }
}

bool can_remove(int idx, int bit) {
  return (mask[idx] & bit) == mask[idx];
}

int calc(int bit, int cnt, const vector< CI > &cs) {
  if (dp[bit] != -1) return dp[bit];

  int n = cs.size();
  int &res = dp[bit];
  res = cnt;

  for (int i = 0; i < n; i++) {
    if (bit & (1 << i)) continue;
    if (can_remove(i, bit) == false) continue;


    for (int j = i + 1; j < n; j++) {
      if (bit & (1 << j)) continue;
      if (cs[i].second != cs[j].second) continue;
      if (can_remove(j, bit) == false) continue;

      res = max(res, calc(bit | (1 << i) | (1 << j), cnt + 2, cs));
    }
  }

  return res;
}

void solve(int n) {
  vector< CI > cs; 

  dp = vector< int >(1 << n, -1);
  mask = vector< int >(n);
  for (int i = 0; i < n; i++) {
    circle cir;
    int c;
    cin >> cir.p >> cir.r >> c;

    cs.emplace_back(cir, c);
  }

  precalc(cs);
  cout << calc(0, 0, cs) << endl;
}

int main() {
  int n;

  while (cin >> n, n) {
    solve(n);
  }
}
