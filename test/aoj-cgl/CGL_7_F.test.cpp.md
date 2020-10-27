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
    path: src/cross_point_cc.hpp
    title: src/cross_point_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cp.hpp
    title: src/tangent_cp.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.00001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_7_F.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F\n// verification-helper:\
    \ ERROR 0.00001\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"\
    src/tangent_cp.hpp\"\n\n#line 4 \"src/tangent_cp.hpp\"\nusing namespace std;\n\
    \n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\
    \n// base\nnamespace geometry {\n    using real_number = long double;\n\n    const\
    \ real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n    inline\
    \ int sign(real_number r) {\n        if (r < -eps) return -1;\n        if (r >\
    \ +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2\
    \ \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 7 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\n\n\
    // circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line\
    \ \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n\
    \    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line\
    \ >;\n}\n#line 2 \"src/cross_point_cc.hpp\"\n\n#line 4 \"src/cross_point_cc.hpp\"\
    \nusing namespace std;\n\n#line 9 \"src/cross_point_cc.hpp\"\n\nnamespace geometry\
    \ {\n  points cross_point_cc(const circle &c1, const circle &c2) {\n    real_number\
    \ d = abs(c1.p - c2.p), r = c1.r + c2.r;\n    if (sign(d - r) > 0 or d + c1.r\
    \ < c2.r) return {};\n    \n    real_number a = acos((norm(c1.r) - norm(c2.r)\
    \ + norm(d)) / (2 * c1.r * d));\n    real_number t = arg(c2.p - c1.p);\n    point\
    \ p = c1.p + polar(c1.r, t + a);\n    point q = c1.p + polar(c1.r, t - a);\n \
    \   if (is_equal(p.real(), q.real()) and is_equal(p.imag(), q.imag())) return\
    \ {p};\n    return {p, q};\n  }\n}\n\n\n#line 11 \"src/tangent_cp.hpp\"\n\nnamespace\
    \ geometry {\n  points tangent_cp(const circle &c, const point &p) {\n    circle\
    \ t(p, sqrt(norm(c.p - p) - norm(c.r)));\n    return cross_point_cc(c, t);\n \
    \ }\n}\n#line 2 \"src/compare.hpp\"\n\n#line 4 \"src/compare.hpp\"\nusing namespace\
    \ std;\n\n#line 8 \"src/compare.hpp\"\n\nnamespace geometry {\n  bool compare_x(const\
    \ point &a, const point &b) {\n    return !is_equal(a.real(), b.real()) ? a.real()\
    \ < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const point &a, const\
    \ point &b) {\n    return !is_equal(a.imag(), b.imag()) ? a.imag() < b.imag()\
    \ : a.real() < b.real();\n  }\n}\n#line 10 \"test/aoj-cgl/CGL_7_F.test.cpp\"\n\
    \nusing namespace geometry;\nint main() {\n  point p;\n  cin >> p;\n\n  circle\
    \ c;\n  cin >> c.p >> c.r;\n\n  points pts = tangent_cp(c, p);\n  sort(pts.begin(),\
    \ pts.end(), compare_x);\n\n  cout << fixed << setprecision(15);\n  for (auto\
    \ &p : pts) cout << p << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_F\n\
    // verification-helper: ERROR 0.00001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/tangent_cp.hpp\"\n#include \"../../src/point.hpp\"\
    \n#include \"../../src/compare.hpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  point p;\n  cin >> p;\n\n  circle c;\n  cin >> c.p >> c.r;\n\n  points\
    \ pts = tangent_cp(c, p);\n  sort(pts.begin(), pts.end(), compare_x);\n\n  cout\
    \ << fixed << setprecision(15);\n  for (auto &p : pts) cout << p << endl;\n}\n"
  dependsOn:
  - src/tangent_cp.hpp
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  - src/line.hpp
  - src/cross_point_cc.hpp
  - src/compare.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_7_F.test.cpp
  requiredBy: []
  timestamp: '2020-10-27 12:21:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_7_F.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_7_F.test.cpp
- /verify/test/aoj-cgl/CGL_7_F.test.cpp.html
title: test/aoj-cgl/CGL_7_F.test.cpp
---
