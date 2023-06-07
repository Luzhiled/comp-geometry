// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/3034
// verification-helper: ERROR 1e-3

#include "src/real-geometry/class/point.hpp"
#include "src/real-geometry/point-cloud/minimum-covering-circle.hpp"
#include "src/real-geometry/utility/io-set.hpp"

#include <iostream>

using namespace geometry;

int main() {
  using R = long double;
  IoSetup(20);

  int n, m;
  std::cin >> n >> m;

  points<R> pts(n);
  for (auto &p : pts) std::cin >> p;

  std::vector< R > min_cov(1 << n, 1e10);
  for (int bit = 0; bit < (1 << n); bit++) {
    points<R> npts;
    for (int i = 0; i < n; i++) {
      if (not ((1 << i) & bit)) continue;
      npts.emplace_back(pts[i]);
    }

    min_cov[bit] = minimum_covering_circle(npts, 133333333).r;
  }


  auto dp = std::vector(m + 1, std::vector(1 << n, R(1e10)));
  dp[0][0] = 0;

  for (int s = 0; s < m; s++) {
    for (int bit = 0; bit < (1 << n); bit++) {
      int msk = ((1 << n) - 1) - bit;
      for (int sub = msk; ; sub = (sub - 1) & msk) {
        dp[s + 1][bit | sub] = std::min(dp[s + 1][bit | sub], std::max(dp[s][bit], min_cov[sub]));
        if (sub == 0) break;
      }
    }
  }

  std::cout << dp[m][(1 << n) - 1] << std::endl;
}
