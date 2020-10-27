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
    path: src/cross_point_cc.hpp
    title: src/cross_point_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_F.test.cpp
    title: test/aoj-cgl/CGL_7_F.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/tangent_cp.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n    using real_number = long\
    \ double;\n\n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\
    \n    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n   \
    \     if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
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
    \ }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n#include \"./circle.hpp\"\n#include \"./line.hpp\"\n#include\
    \ \"./point.hpp\"\n#include \"./cross_point_cc.hpp\"\n\nnamespace geometry {\n\
    \  points tangent_cp(const circle &c, const point &p) {\n    circle t(p, sqrt(norm(c.p\
    \ - p) - norm(c.r)));\n    return cross_point_cc(c, t);\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  - src/line.hpp
  - src/cross_point_cc.hpp
  isVerificationFile: false
  path: src/tangent_cp.hpp
  requiredBy: []
  timestamp: '2020-10-27 11:40:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_7_F.test.cpp
documentation_of: src/tangent_cp.hpp
layout: document
redirect_from:
- /library/src/tangent_cp.hpp
- /library/src/tangent_cp.hpp.html
title: src/tangent_cp.hpp
---