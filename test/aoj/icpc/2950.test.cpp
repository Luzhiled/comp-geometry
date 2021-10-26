// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2950
// verification-helper: ERROR 1e-4

#include <iostream>
#include <complex>
#include <set>
#include <unordered_set>
#include <queue>
#include <utility>
#include <vector>
#include <functional>

#include <random>
#include <chrono>
namespace lib {
using namespace std;
// Rolling Hash {{{
struct RollingHash {
  static const uint64_t mod = (1ull << 61ull) - 1;
  using uint128_t = __uint128_t;
  const uint64_t base;
  vector< uint64_t > power;

  static inline uint64_t add(uint64_t a, uint64_t b) {
    if((a += b) >= mod) a -= mod;
    return a;
  }

  static inline uint64_t mul(uint64_t a, uint64_t b) {
    uint128_t c = (uint128_t) a * b;
    return add(c >> 61, c & mod);
  }

  static inline uint64_t generate_base() {
    mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
    uniform_int_distribution< uint64_t > rand(1, RollingHash::mod - 1);
    return rand(mt);
  }

  inline void expand(size_t sz) {
    if(power.size() < sz + 1) {
      int pre_sz = (int) power.size();
      power.resize(sz + 1);
      for(int i = pre_sz - 1; i < (int)sz; i++) {
        power[i + 1] = mul(power[i], base);
      }
    }
  }

  explicit RollingHash(uint64_t base = generate_base()) : base(base), power{1} {}

  vector< uint64_t > build(const string &s) const {
    int sz = s.size();
    vector< uint64_t > hashed(sz + 1);
    for(int i = 0; i < sz; i++) {
      hashed[i + 1] = add(mul(hashed[i], base), s[i]);
    }
    return hashed;
  }

  template< typename T >
  vector< uint64_t > build(const vector< T > &s) const {
    int sz = s.size();
    vector< uint64_t > hashed(sz + 1);
    for(int i = 0; i < sz; i++) {
      hashed[i + 1] = add(mul(hashed[i], base), s[i]);
    }
    return hashed;
  }

  uint64_t query(const vector< uint64_t > &s, int l, int r) {
    expand(r - l);
    return add(s[r], mod - mul(s[l], power[r - l]));
  }

  uint64_t combine(uint64_t h1, uint64_t h2, size_t h2len) {
    expand(h2len);
    return add(mul(h1, power[h2len]), h2);
  }

  int lcp(const vector< uint64_t > &a, int l1, int r1, const vector< uint64_t > &b, int l2, int r2) {
    int len = min(r1 - l1, r2 - l2);
    int low = 0, high = len + 1;
    while(high - low > 1) {
      int mid = (low + high) / 2;
      if(query(a, l1, l1 + mid) == query(b, l2, l2 + mid)) low = mid;
      else high = mid;
    }
    return low;
  }
};
// }}}
}

#include "src/contains.hpp"
#include "src/convex_hull.hpp"
#include "src/is_intersect.hpp"
#include "src/util/io_set.hpp"
template< typename T >
using vector = std::vector<T>;

void solve(int n, int k) {
  lib::RollingHash roll;
  using u64 = long long;
  using std::pair;

  using geometry::point;
  using geometry::points;
  using geometry::polygon;
  using geometry::segment;
  using geometry::contains;
  using geometry::is_intersect;
  using geometry::operator>>;

  points pts(n);
  for (auto &pt : pts) std::cin >> pt;

  std::unordered_set< u64 > used;
  using T = pair<double, int>;
  std::priority_queue< T, vector<T>, std::greater<T> > pq;

  // TODO: #37
  auto calc_perimeter = [&](const vector< int > &vs) {
    using std::abs;
    double len = abs(pts[vs.front()] - pts[vs.back()]);
    for (int i = 1; i < (int)vs.size(); i++) {
      len += abs(pts[vs[i]] - pts[vs[i - 1]]);
    }
    return len;
  };

  auto calc_hash = [&](const vector< int > &vs) {
    auto rh = roll.build(vs);
    return roll.query(rh, 0, vs.size());
  };

  auto insert_ptsi = [&](vector< int > vs, int i, int j) {
    vs.insert(vs.begin() + j + 1, i);
    return vs;
  };

  vector< vector<int> > vss;

  {
    auto ds = geometry::convex_hull_with_index(pts);
    vector< int > vs;
    for (auto &v : ds.second) vs.emplace_back(v);
    u64 hash = calc_hash(vs);
    double len = calc_perimeter(vs);

    pq.emplace(len, vss.size());
    vss.emplace_back(vs);
    used.emplace(hash);
  }

  for (int qi = 1; qi < k and not pq.empty(); qi++) {
    auto [d, idx] = pq.top();
    pq.pop();

    auto as = vss[idx];
    int m = as.size();

    std::set< int > st(as.begin(), as.end());

    for (int i = 0; i < n; i++) {
      if (st.count(i)) continue;

      for (int j = 0; j < m; j++) {
        auto vs = insert_ptsi(as, i, j);
        u64 hash = calc_hash(vs);
        if (used.count(hash)) {
          continue;
        }
        used.emplace(hash);

        // TODO: #35
        segment s1(pts[i], pts[as[j]]);
        segment s2(pts[i], pts[as[(j + 1) % m]]);
        int cnt = 0;
        for (int k = 0; k < m; k++) {
          segment s(pts[as[k]], pts[as[(k + 1) % m]]);
          if (is_intersect(s, s1)) cnt++;
          if (is_intersect(s, s2)) cnt++;
        }
        if (cnt != 4) continue;

        polygon poly;
        bool f = false;
        for (auto i : vs) poly.emplace_back(pts[i]);
        for (auto &p : pts) if (contains(poly, p) == geometry::OUT) f = true;
        if (f) continue; 

        double len = calc_perimeter(vs);

        pq.emplace(len, vss.size());
        vss.emplace_back(vs);
      }
    }
  }

  if (pq.empty()) {
    std::cout << -1 << std::endl;
    return;
  }

  std::cout << pq.top().first << std::endl;
}

signed main() {
  int n, k;

  while (std::cin >> n >> k, n) {
    solve(n, k);
  }
}

