---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cc.hpp
    title: src/tangent_cc.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.00001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_7_G.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G\n// verification-helper:\
    \ ERROR 0.00001\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"\
    src/tangent_cc.hpp\"\n\n#line 4 \"src/tangent_cc.hpp\"\nusing namespace std;\n\
    \n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\
    \n// base\nnamespace geometry {\n    using real_number = long double;\n\n    const\
    \ real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n    inline\
    \ int sign(real_number r) {\n        if (r < -eps) return -1;\n        if (r >\
    \ +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2\
    \ \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 7 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 2 \"src/circle.hpp\"\n\n\
    #line 4 \"src/circle.hpp\"\nusing namespace std;\n\n#line 7 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line\
    \ \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n\
    \    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line\
    \ >;\n}\n#line 10 \"src/tangent_cc.hpp\"\n\nnamespace geometry {\n  lines tangent_cc(circle\
    \ c1, circle c2) {\n    lines ls;\n    if (c1.r > c2.r) swap(c1, c2);\n\n    real_number\
    \ g = norm(c1.p - c2.p);\n    if (sign(g) == 0) return ls;\n\n    point u = (c1.p\
    \ - c2.p) / sqrt(g);\n    point v(-u.imag(), u.real());\n\n    for (int s = 1;\
    \ s >= -1; s -= 2) {\n      real_number h = (c1.r * s + c2.r) / sqrt(g);\n   \
    \   if (sign(1 - norm(h)) == 0) {\n        ls.emplace_back(c2.p + u * c2.r, c2.p\
    \ + (u + v) * c2.r);\n      } else if (sign(1 - norm(h)) > 0) {\n        point\
    \ uu = u * h;\n        point vv = v * sqrt(1 - norm(h));\n        ls.emplace_back(c2.p\
    \ + (uu + vv) * c2.r, c1.p - (uu + vv) * c1.r * s);\n        ls.emplace_back(c2.p\
    \ + (uu - vv) * c2.r, c1.p - (uu - vv) * c1.r * s);\n      }\n    }\n\n    return\
    \ ls;\n  }\n}\n#line 2 \"src/projection.hpp\"\n\n#line 4 \"src/projection.hpp\"\
    \nusing namespace std;\n\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n    real_number cross(const point &a, const point &b) {\n      \
    \  return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 10 \"src/projection.hpp\"\n\n// projection\n\
    namespace geometry {\n  point projection(const line &l, const point &p) {\n  \
    \  real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n    return l.a\
    \ + (l.a - l.b) * t;\n  }\n}\n#line 2 \"src/compare.hpp\"\n\n#line 4 \"src/compare.hpp\"\
    \nusing namespace std;\n\n#line 8 \"src/compare.hpp\"\n\nnamespace geometry {\n\
    \  bool compare_x(const point &a, const point &b) {\n    return !is_equal(a.real(),\
    \ b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const\
    \ point &a, const point &b) {\n    return !is_equal(a.imag(), b.imag()) ? a.imag()\
    \ < b.imag() : a.real() < b.real();\n  }\n}\n#line 10 \"test/aoj-cgl/CGL_7_G.test.cpp\"\
    \n\nusing namespace geometry;\nint main() {\n  circle c1, c2;\n  cin >> c1.p >>\
    \ c1.r;\n  cin >> c2.p >> c2.r;\n\n  lines ls = tangent_cc(c1, c2);\n  points\
    \ ps;\n  for (auto &l : ls) ps.emplace_back(projection(l, c1.p));\n  sort(ps.begin(),\
    \ ps.end(), compare_x);\n\n  cout << fixed << setprecision(20);\n  for (auto &p\
    \ : ps) cout << p << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_G\n\
    // verification-helper: ERROR 0.00001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/tangent_cc.hpp\"\n#include \"../../src/projection.hpp\"\
    \n#include \"../../src/compare.hpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  circle c1, c2;\n  cin >> c1.p >> c1.r;\n  cin >> c2.p >> c2.r;\n\n  lines\
    \ ls = tangent_cc(c1, c2);\n  points ps;\n  for (auto &l : ls) ps.emplace_back(projection(l,\
    \ c1.p));\n  sort(ps.begin(), ps.end(), compare_x);\n\n  cout << fixed << setprecision(20);\n\
    \  for (auto &p : ps) cout << p << endl;\n}\n"
  dependsOn:
  - src/tangent_cc.hpp
  - src/base.hpp
  - src/point.hpp
  - src/circle.hpp
  - src/line.hpp
  - src/projection.hpp
  - src/product.hpp
  - src/compare.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_7_G.test.cpp
  requiredBy: []
  timestamp: '2020-10-27 12:22:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_7_G.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_7_G.test.cpp
- /verify/test/aoj-cgl/CGL_7_G.test.cpp.html
title: test/aoj-cgl/CGL_7_G.test.cpp
---
