// verification-helper: PROBLEM https://atcoder.jp/contests/abc181/tasks/abc181_f
// verification-helper: ERROR 1e-4

#include <iostream>
#include <vector>
using namespace std;

// union find {{{
class union_find {

    using data_type = int_fast32_t;
    std::vector< data_type > data_;

    public:
    union_find(std::size_t size) : data_(size, -1) {}

    std::size_t size() const {
        return data_.size();
    }

    data_type get_root(data_type x) {
        return (data_[x] < 0 ? x : data_[x] = get_root(data_[x]));
    }

    bool is_root(data_type x) {
        return x == get_root(x);
    }

    bool is_same(data_type x, data_type y) {
        return get_root(x) == get_root(y);
    }

    void unite(data_type x, data_type y) {
        x = get_root(x); y = get_root(y);
        if (x == y) return;

        if (data_[x] > data_[y]) std::swap(x, y);
        data_[x] += data_[y];
        data_[y] = x;
    }

    data_type element_count(data_type x) {
        return -data_[get_root(x)];
    }
};
// }}}

#include "src/point.hpp"
#include "src/distance_lp.hpp"
using namespace geometry;

void solve() {
  line t(point(0,  100), point(1,  100));
  line b(point(0, -100), point(1, -100));

  int n;
  cin >> n;

  points pts(n);
  for (auto &p : pts) cin >> p;

  real_number ng = 200, ok = 0;
  for (int lb = 0; lb < 100; lb++) {
    real_number mid = (ok + ng) / 2;

    union_find uf(n + 2);
    int T = n, B = n + 1;
    for (int i = 0; i < n; i++) {
      point p = pts[i];
      if (sign(distance_lp(t, p) - mid) < 0) uf.unite(T, i);
      if (sign(distance_lp(b, p) - mid) < 0) uf.unite(B, i);
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        point p = pts[i], q = pts[j];
        if (sign(abs(p - q) - mid) < 0) uf.unite(i, j);
      }
    }

    if (uf.is_same(T, B)) {
      ng = mid;
    } else {
      ok = mid;
    }
  }

  cout << ok / 2 << endl;
}

signed main() {
  solve();
}
