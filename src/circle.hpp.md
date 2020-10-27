---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/circumscribed_circle.hpp
    title: src/circumscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_cc.hpp
    title: src/cross_point_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_cl.hpp
    title: src/cross_point_cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/inscribed_circle.hpp
    title: src/inscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/intersect_cc.hpp
    title: src/intersect_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cc.hpp
    title: src/tangent_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cp.hpp
    title: src/tangent_cp.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_A.test.cpp
    title: test/aoj-cgl/CGL_7_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_B.test.cpp
    title: test/aoj-cgl/CGL_7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_C.test.cpp
    title: test/aoj-cgl/CGL_7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_D.test.cpp
    title: test/aoj-cgl/CGL_7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_E.test.cpp
    title: test/aoj-cgl/CGL_7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_F.test.cpp
    title: test/aoj-cgl/CGL_7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_G.test.cpp
    title: test/aoj-cgl/CGL_7_G.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/circle.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace\
    \ std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 7\
    \ \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
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
    \n  using circles = vector< circle >;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./point.hpp\"\n\n// circle\nnamespace geometry {\n  struct circle {\n    point\
    \ p;\n    real_number r;\n    circle() {}\n    circle(point p, real_number r)\
    \ : p(p), r(r) {}\n  };\n\n  using circles = vector< circle >;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/circle.hpp
  requiredBy:
  - src/tangent_cc.hpp
  - src/circumscribed_circle.hpp
  - src/cross_point_cl.hpp
  - src/tangent_cp.hpp
  - src/inscribed_circle.hpp
  - src/cross_point_cc.hpp
  - src/intersect_cc.hpp
  timestamp: '2020-10-27 06:59:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_7_B.test.cpp
  - test/aoj-cgl/CGL_7_A.test.cpp
  - test/aoj-cgl/CGL_7_C.test.cpp
  - test/aoj-cgl/CGL_7_G.test.cpp
  - test/aoj-cgl/CGL_7_F.test.cpp
  - test/aoj-cgl/CGL_7_E.test.cpp
  - test/aoj-cgl/CGL_7_D.test.cpp
documentation_of: src/circle.hpp
layout: document
redirect_from:
- /library/src/circle.hpp
- /library/src/circle.hpp.html
title: src/circle.hpp
---
