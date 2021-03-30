// verification-helper: IGNORE
// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/1647
// verification-helper: ERROR 1e-6

#include <iostream>
#include <algorithm>

// #include "../../../src/angle.hpp"
// #include "../../../src/polygon.hpp"
// #include "../../../src/point.hpp"
// #include "../../../src/minimum_covering_circle.hpp"
// #include "../../../src/util/io_set.hpp"

using namespace geometry;

const real_number phi = (1 + sqrt(5)) / 2;
polygon fix_polygon(const polygon &A, int idx) {
  polygon res;
  int n = A.size();
  for (int t = 0; t < n; t++) {
    int i = (t + idx) % n;
    res.emplace_back(A[i] - A[(idx + 1) % n]);
  }

  real_number theta = get_angle(point(1, 0), res[1], res[0]);
  for (auto &p : res) p = rotate(-theta, p);

  return res;
}

real_number check(const polygon &A, const polygon &B, const point &q, real_number theta) {
  points pts = A;
  for (auto &p : B) pts.emplace_back(rotate(theta, p) + q);
  return minimum_covering_circle(pts, 133333333).r;
}

real_number bs_rad(const polygon &A, const polygon &B, const point &p, real_number r) {
  real_number l = 0, ml, mr;
  int pre = -1;
  const int L = 0, R = 1;
  real_number vl = -1e8, vr = 1e8;
  while (not equals(l, r)) {
    ml = (l * phi + r) / (1 + phi);
    mr = (l + r * phi) / (1 + phi);
    if (pre != L) {
      vl = check(A, B, p, ml);
    }
    if (pre != R) {
      vr = check(A, B, p, mr);
    }

    if (sign(vl - vr) > 0) {
      l = ml;
      vl = vr;
      pre = L;
    } else {
      r = mr;
      vr = vl;
      pre = R;
    }
  }

  return check(A, B, p, l);
}

real_number bs_pt(const polygon &A, const polygon &B, int idx) {
  int m = B.size();
  polygon P;
  for (int t = 0; t < m; t++) {
    int i = (t + idx) % m;
    P.emplace_back(B[i] - B[(idx + 1) % m]);
  }

  real_number theta = get_angle(point(1, 0), P[1], P[2]);
  for (auto &p : P) p = rotate(-theta, p);

  real_number max_theta = get_angle(P[0], P[1], point(-1, 0));

  point l = A[1], r = A[0], ml, mr;
  int pre = -1;
  const int L = 0, R = 1;
  real_number vl = -1e8, vr = 1e8;
  while (not equals(l, r)) {
    ml = (l * phi + r) / (1 + phi);
    mr = (l + r * phi) / (1 + phi);
    if (pre != L) {
      vl = bs_rad(A, P, ml, max_theta);
    }
    if (pre != R) {
      vr = bs_rad(A, P, mr, max_theta);
    }

    if (sign(vl - vr) > 0) {
      l = ml;
      vl = vr;
      pre = L;
    } else {
      r = mr;
      vr = vl;
      pre = R;
    }
  }

  return bs_rad(A, P, l, max_theta);
}

real_number bfa(polygon A, polygon B) {
  int n = A.size(), m = B.size();

  real_number res = 1e8;
  for (int i = 0; i < n; i++) {
    polygon P = fix_polygon(A, i);
    for (int j = 0; j < m; j++) {
      res = std::min(res, bs_pt(P, B, j));
    }
  }

  return res;
}

void solve(int n) {
  polygon A(n);
  for (auto &p : A) std::cin >> p;

  int m; std::cin >> m;
  polygon B(m);
  for (auto &p : B) std::cin >> p;

  std::cout << std::min(bfa(A, B), bfa(B, A)) * 2 << std::endl;
}

int main() {
  int n;

  while (cin >> n, n) {
    solve(n);
  }
}
