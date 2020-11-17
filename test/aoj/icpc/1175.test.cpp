// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/1175

#include <iostream>
#include <vector>
using namespace std;

#include "../../../src/circle.hpp"
#include "../../../src/intersect_cc.hpp"

using namespace geometry;

using CI = pair< circle, int >;
vector< int > dp;

bool can_remove(int idx, int bit, const vector< CI > &cs) {
  for (int i = 0; i < idx; i++) {
    if (bit & (1 << i)) continue;
    if (intersect_cc(cs[i].first, cs[idx].first) >= 3) continue;

    return false;
  }

  return true;
}

int calc(int bit, int cnt, const vector< CI > &cs) {
  if (dp[bit] != -1) return dp[bit];

  int n = cs.size();
  int &res = dp[bit];
  res = cnt;

  for (int i = 0; i < n; i++) {
    if (bit & (1 << i)) continue;
    if (can_remove(i, bit, cs) == false) continue;


    for (int j = i + 1; j < n; j++) {
      if (bit & (1 << j)) continue;
      if (cs[i].second != cs[j].second) continue;
      if (can_remove(j, bit, cs) == false) continue;

      res = max(res, calc(bit | (1 << i) | (1 << j), cnt + 2, cs));
    }
  }

  return res;
}

void solve(int n) {
  vector< CI > cs; 

  for (int i = 0; i < n; i++) {
    circle cir;
    int c;
    cin >> cir.p >> cir.r >> c;

    cs.emplace_back(cir, c);
  }

  cout << calc(0, 0, cs) << endl;
}

int main() {
  int n;

  while (cin >> n, n) {
    dp = vector< int >(1 << n, -1);
    solve(n);
  }
}
