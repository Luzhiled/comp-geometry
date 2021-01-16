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
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/tangent_cp.hpp
    title: src/tangent_cp.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_E.test.cpp
    title: test/aoj/cgl/7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_F.test.cpp
    title: test/aoj/cgl/7_F.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/cross_point_cc.hpp\"\n\n#include <complex>\n\n#line\
    \ 2 \"src/base.hpp\"\n\n#include <cmath>\n\n// base\nnamespace geometry {\n  using\
    \ namespace std;\n  using real_number = long double;\n\n  const real_number PI\
    \ = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\n\
    #include <vector>\n#line 6 \"src/point.hpp\"\n#include <istream>\n#include <ostream>\n\
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
    \ b.imag());\n  }\n}\n#line 2 \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\
    \n\n#line 6 \"src/circle.hpp\"\n\n// circle\nnamespace geometry {\n  struct circle\
    \ {\n    point p;\n    real_number r;\n    circle() {}\n    circle(point p, real_number\
    \ r) : p(p), r(r) {}\n  };\n\n  using circles = vector< circle >;\n}\n#line 8\
    \ \"src/cross_point_cc.hpp\"\n\nnamespace geometry {\n  points cross_point_cc(const\
    \ circle &c1, const circle &c2) {\n    real_number d = abs(c1.p - c2.p), r = c1.r\
    \ + c2.r;\n    if (sign(d - r) > 0 or sign(d + c1.r - c2.r) < 0) return {};\n\
    \    \n    real_number a = acos((norm(c1.r) - norm(c2.r) + norm(d)) / (2 * c1.r\
    \ * d));\n    real_number t = arg(c2.p - c1.p);\n    point p = c1.p + polar(c1.r,\
    \ t + a);\n    point q = c1.p + polar(c1.r, t - a);\n    if (equals(p.real(),\
    \ q.real()) and equals(p.imag(), q.imag())) return {p};\n    return {p, q};\n\
    \  }\n}\n\n\n"
  code: "#pragma once\n\n#include <complex>\n\n#include \"./base.hpp\"\n#include \"\
    ./point.hpp\"\n#include \"./circle.hpp\"\n\nnamespace geometry {\n  points cross_point_cc(const\
    \ circle &c1, const circle &c2) {\n    real_number d = abs(c1.p - c2.p), r = c1.r\
    \ + c2.r;\n    if (sign(d - r) > 0 or sign(d + c1.r - c2.r) < 0) return {};\n\
    \    \n    real_number a = acos((norm(c1.r) - norm(c2.r) + norm(d)) / (2 * c1.r\
    \ * d));\n    real_number t = arg(c2.p - c1.p);\n    point p = c1.p + polar(c1.r,\
    \ t + a);\n    point q = c1.p + polar(c1.r, t - a);\n    if (equals(p.real(),\
    \ q.real()) and equals(p.imag(), q.imag())) return {p};\n    return {p, q};\n\
    \  }\n}\n\n\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  - src/circle.hpp
  isVerificationFile: false
  path: src/cross_point_cc.hpp
  requiredBy:
  - src/tangent_cp.hpp
  timestamp: '2021-01-16 13:51:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/7_F.test.cpp
documentation_of: src/cross_point_cc.hpp
layout: document
redirect_from:
- /library/src/cross_point_cc.hpp
- /library/src/cross_point_cc.hpp.html
title: src/cross_point_cc.hpp
---
