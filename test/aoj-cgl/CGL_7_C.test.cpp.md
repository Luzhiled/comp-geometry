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
    path: src/circumscribed_circle.hpp
    title: src/circumscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_ll.hpp
    title: src/cross_point_ll.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.000001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_7_C.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C\n// verification-helper:\
    \ ERROR 0.000001 \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2\
    \ \"src/circumscribed_circle.hpp\"\n\n#line 4 \"src/circumscribed_circle.hpp\"\
    \nusing namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\
    \nusing namespace std;\n\n// base\nnamespace geometry {\n    using real_number\
    \ = long double;\n\n    const real_number eps = 1e-8;\n    const real_number pi\
    \ = acos(-1);\n\n    inline int sign(real_number r) {\n        if (r < -eps) return\
    \ -1;\n        if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline\
    \ bool is_equal(real_number r1, real_number r2) {\n        return sign(r1 - r2)\
    \ == 0;\n    }\n}\n#line 2 \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\n\
    using namespace std;\n\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \      sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line\
    \ \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n\
    \    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line\
    \ >;\n}\n#line 2 \"src/cross_point_ll.hpp\"\n\n#line 4 \"src/cross_point_ll.hpp\"\
    \nusing namespace std;\n\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n    real_number cross(const point &a, const point &b) {\n      \
    \  return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 9 \"src/cross_point_ll.hpp\"\n\n// cross\
    \ point\nnamespace geometry {\n  point cross_point_ll(const line &l1, const line\
    \ &l2) {\n    real_number a = cross(l1.b - l1.a, l2.b - l2.a);\n    real_number\
    \ b = cross(l1.b - l1.a, l1.b - l2.a);\n    if (is_equal(a, 0) && is_equal(b,\
    \ 0)) return l2.a;\n    return l2.a + (l2.b - l2.a) * b / a;\n  }\n}\n#line 11\
    \ \"src/circumscribed_circle.hpp\"\n\nnamespace geometry {\n  circle circumscribed_circle(const\
    \ point &a, const point &b, const point &c) {\n    point m1((a + b) / real_number(2)),\
    \ m2((b + c) / real_number(2));\n    point v((b - a).imag(), (a - b).real()),\
    \ w((b - c).imag(), (c - b).real());\n    line s(m1, point(m1 + v)), t(m2, point(m2\
    \ + w));\n\n    point p = cross_point_ll(s, t);\n    return circle(p, abs(a -\
    \ p));\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_7_C.test.cpp\"\n\nusing namespace geometry;\n\
    int main() {\n  point a, b, c;\n  cin >> a >> b >> c;\n\n  circle cir = circumscribed_circle(a,\
    \ b, c);\n  \n  cout << fixed << setprecision(15);\n  cout << cir.p << \" \" <<\
    \ cir.r << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_C\n\
    // verification-helper: ERROR 0.000001 \n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/circumscribed_circle.hpp\"\n\nusing namespace geometry;\n\
    int main() {\n  point a, b, c;\n  cin >> a >> b >> c;\n\n  circle cir = circumscribed_circle(a,\
    \ b, c);\n  \n  cout << fixed << setprecision(15);\n  cout << cir.p << \" \" <<\
    \ cir.r << endl;\n}\n"
  dependsOn:
  - src/circumscribed_circle.hpp
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  - src/line.hpp
  - src/cross_point_ll.hpp
  - src/product.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_7_C.test.cpp
  requiredBy: []
  timestamp: '2020-10-28 18:31:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_7_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_7_C.test.cpp
- /verify/test/aoj-cgl/CGL_7_C.test.cpp.html
title: test/aoj-cgl/CGL_7_C.test.cpp
---
