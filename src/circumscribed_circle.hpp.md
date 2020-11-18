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
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_C.test.cpp
    title: test/aoj/cgl/7_C.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/circumscribed_circle.hpp\"\n\nusing namespace std;\n\
    \n#line 2 \"src/base.hpp\"\n\n#include <cmath>\nusing namespace std;\n\n// base\n\
    namespace geometry {\n  using real_number = long double;\n\n  const real_number\
    \ PI = acos(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool is_equal(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/circle.hpp\"\n\n#include <vector>\nusing\
    \ namespace std;\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#line 6 \"\
    src/point.hpp\"\n#include <istream>\n#include <ostream>\nusing namespace std;\n\
    \n#line 11 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point\
    \ = complex< real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n             \
    \    sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line\
    \ \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n\
    \    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line\
    \ >;\n}\n#line 2 \"src/cross_point_ll.hpp\"\n\nusing namespace std;\n\n#line 2\
    \ \"src/product.hpp\"\n\nusing namespace std;\n\n#line 6 \"src/product.hpp\"\n\
    \n// product\nnamespace geometry {\n    real_number cross(const point &a, const\
    \ point &b) {\n        return a.real() * b.imag() - a.imag() * b.real();\n   \
    \ }\n\n    real_number dot(const point &a, const point &b) {\n        return a.real()\
    \ * b.real() + a.imag() * b.imag();\n    }\n}\n#line 8 \"src/cross_point_ll.hpp\"\
    \n\n// cross point\nnamespace geometry {\n  point cross_point_ll(const line &l1,\
    \ const line &l2) {\n    real_number a = cross(l1.b - l1.a, l2.b - l2.a);\n  \
    \  real_number b = cross(l1.b - l1.a, l1.b - l2.a);\n    if (is_equal(a, 0) &&\
    \ is_equal(b, 0)) return l2.a;\n    return l2.a + (l2.b - l2.a) * b / a;\n  }\n\
    }\n#line 10 \"src/circumscribed_circle.hpp\"\n\nnamespace geometry {\n  circle\
    \ circumscribed_circle(const point &a, const point &b, const point &c) {\n   \
    \ point m1((a + b) / real_number(2)), m2((b + c) / real_number(2));\n    point\
    \ v((b - a).imag(), (a - b).real()), w((b - c).imag(), (c - b).real());\n    line\
    \ s(m1, point(m1 + v)), t(m2, point(m2 + w));\n\n    point p = cross_point_ll(s,\
    \ t);\n    return circle(p, abs(a - p));\n  }\n}\n"
  code: "#pragma once\n\nusing namespace std;\n\n#include \"./base.hpp\"\n#include\
    \ \"./circle.hpp\"\n#include \"./point.hpp\"\n#include \"./line.hpp\"\n#include\
    \ \"./cross_point_ll.hpp\"\n\nnamespace geometry {\n  circle circumscribed_circle(const\
    \ point &a, const point &b, const point &c) {\n    point m1((a + b) / real_number(2)),\
    \ m2((b + c) / real_number(2));\n    point v((b - a).imag(), (a - b).real()),\
    \ w((b - c).imag(), (c - b).real());\n    line s(m1, point(m1 + v)), t(m2, point(m2\
    \ + w));\n\n    point p = cross_point_ll(s, t);\n    return circle(p, abs(a -\
    \ p));\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  - src/line.hpp
  - src/cross_point_ll.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/circumscribed_circle.hpp
  requiredBy: []
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_C.test.cpp
documentation_of: src/circumscribed_circle.hpp
layout: document
redirect_from:
- /library/src/circumscribed_circle.hpp
- /library/src/circumscribed_circle.hpp.html
title: src/circumscribed_circle.hpp
---