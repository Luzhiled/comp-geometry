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
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/cross_point_cl.hpp\"\n\n#include <cmath>\n\n#line 2\
    \ \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\n\n// base\nnamespace geometry\
    \ {\n  using namespace std;\n  using real_number = long double;\n\n  const real_number\
    \ PI = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#include\
    \ <vector>\n#line 6 \"src/point.hpp\"\n#include <istream>\n#include <ostream>\n\
    \n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point\
    \ = complex< real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n             \
    \    sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool equals(const\
    \ point &a, const point &b) {\n    return equals(a.real(), b.real()) and equals(a.imag(),\
    \ b.imag());\n  }\n}\n\nusing geometry::operator>>;\nusing geometry::operator<<;\n\
    #line 2 \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\n\n#line 6 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\n\n#line 6 \"src/line.hpp\"\n\n// line \nnamespace geometry\
    \ {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 2 \"src/projection.hpp\"\n\n#line 4 \"src/projection.hpp\"\n\n#line 2 \"src/product.hpp\"\
    \n\n#line 5 \"src/product.hpp\"\n\n// product\nnamespace geometry {\n  real_number\
    \ cross(const point &a, const point &b) {\n    return a.real() * b.imag() - a.imag()\
    \ * b.real();\n  }\n\n  real_number dot(const point &a, const point &b) {\n  \
    \  return a.real() * b.real() + a.imag() * b.imag();\n  }\n}\n#line 9 \"src/projection.hpp\"\
    \n\n// projection\nnamespace geometry {\n  point projection(const line &l, const\
    \ point &p) {\n    real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n\
    \    return l.a + (l.a - l.b) * t;\n  }\n}\n#line 10 \"src/cross_point_cl.hpp\"\
    \n\nnamespace geometry {\n  points cross_point_cl(const circle &c, const line\
    \ &l) {\n    point pr = projection(l, c.p);\n\n    if (equals(abs(pr - c.p), c.r))\
    \ {\n      return {pr};\n    }\n\n    if (sign(norm(c.r) - norm(pr - c.p)) ==\
    \ -1) {\n      return {};\n    }\n\n    points pts;\n    point e = (l.b - l.a)\
    \ / abs(l.b - l.a);\n    real_number k = sqrt(norm(c.r) - norm(pr - c.p));\n \
    \   pts.emplace_back(pr + e * k);\n    pts.emplace_back(pr - e * k);\n    return\
    \ pts;\n  }\n}\n"
  code: "#pragma once\n\n#include <cmath>\n\n#include \"./base.hpp\"\n#include \"\
    ./point.hpp\"\n#include \"./circle.hpp\"\n#include \"./line.hpp\"\n#include \"\
    ./projection.hpp\"\n\nnamespace geometry {\n  points cross_point_cl(const circle\
    \ &c, const line &l) {\n    point pr = projection(l, c.p);\n\n    if (equals(abs(pr\
    \ - c.p), c.r)) {\n      return {pr};\n    }\n\n    if (sign(norm(c.r) - norm(pr\
    \ - c.p)) == -1) {\n      return {};\n    }\n\n    points pts;\n    point e =\
    \ (l.b - l.a) / abs(l.b - l.a);\n    real_number k = sqrt(norm(c.r) - norm(pr\
    \ - c.p));\n    pts.emplace_back(pr + e * k);\n    pts.emplace_back(pr - e * k);\n\
    \    return pts;\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  - src/circle.hpp
  - src/line.hpp
  - src/projection.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/cross_point_cl.hpp
  requiredBy:
  - src/common_area_cp.hpp
  timestamp: '2022-01-29 19:05:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/7_H.test.cpp
documentation_of: src/cross_point_cl.hpp
layout: document
redirect_from:
- /library/src/cross_point_cl.hpp
- /library/src/cross_point_cl.hpp.html
title: src/cross_point_cl.hpp
---
