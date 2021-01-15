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
    path: src/common_area_cc.hpp
    title: src/common_area_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_cc.hpp
    title: src/cross_point_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_cl.hpp
    title: src/cross_point_cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/in_circle.hpp
    title: src/in_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/inscribed_circle.hpp
    title: src/inscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/intersect_cc.hpp
    title: src/intersect_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/minimum_covering_circle.hpp
    title: src/minimum_covering_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cc.hpp
    title: src/tangent_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cp.hpp
    title: src/tangent_cp.hpp
  - icon: ':warning:'
    path: test/atcoder/abc151-f.cpp
    title: test/atcoder/abc151-f.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_A.test.cpp
    title: test/aoj/cgl/7_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_C.test.cpp
    title: test/aoj/cgl/7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_E.test.cpp
    title: test/aoj/cgl/7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_F.test.cpp
    title: test/aoj/cgl/7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_I.test.cpp
    title: test/aoj/cgl/7_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/1175.test.cpp
    title: test/aoj/icpc/1175.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/3034.test.cpp
    title: test/aoj/icpc/3034.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/circle.hpp\"\n\n#include <vector>\n\n#line 2 \"src/point.hpp\"\
    \n\n#include <complex>\n#line 5 \"src/point.hpp\"\n#include <cmath>\n#include\
    \ <istream>\n#include <ostream>\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\
    \n\n// base\nnamespace geometry {\n  using namespace std;\n  using real_number\
    \ = long double;\n\n  const real_number PI = acosl(-1);\n\n  inline static real_number\
    \ &eps() {\n    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static\
    \ void set_eps(real_number EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number\
    \ r) {\n    set_eps(1e-10);\n    if (r < -eps()) return -1;\n    if (r > +eps())\
    \ return +1;\n    return 0;\n  }\n\n  inline bool equals(real_number r1, real_number\
    \ r2) {\n    return sign(r1 - r2) == 0;\n  }\n}\n#line 10 \"src/point.hpp\"\n\n\
    // point\nnamespace geometry {\n  using point = complex< real_number >;\n  using\
    \ points = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n\
    \    real_number x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n\
    \  }\n\n  ostream &operator<<(ostream &os, const point &p) {\n    return os <<\
    \ p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const point &p, const\
    \ real_number &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point\
    \ rotate(const real_number &theta, const point &p) {\n    return point(cos(theta)\
    \ * p.real() + sin(-theta) * p.imag(),\n                 sin(theta) * p.real()\
    \ + cos(-theta) * p.imag());\n  }\n}\n#line 6 \"src/circle.hpp\"\n\n// circle\n\
    namespace geometry {\n  struct circle {\n    point p;\n    real_number r;\n  \
    \  circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\n \
    \ using circles = vector< circle >;\n}\n"
  code: "#pragma once\n\n#include <vector>\n\n#include \"./point.hpp\"\n\n// circle\n\
    namespace geometry {\n  struct circle {\n    point p;\n    real_number r;\n  \
    \  circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\n \
    \ using circles = vector< circle >;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/circle.hpp
  requiredBy:
  - src/intersect_cc.hpp
  - src/cross_point_cc.hpp
  - src/in_circle.hpp
  - src/minimum_covering_circle.hpp
  - src/tangent_cc.hpp
  - src/inscribed_circle.hpp
  - src/common_area_cp.hpp
  - src/cross_point_cl.hpp
  - src/common_area_cc.hpp
  - src/circumscribed_circle.hpp
  - src/tangent_cp.hpp
  - test/atcoder/abc151-f.cpp
  timestamp: '2020-11-23 23:19:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/7_A.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/7_I.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/icpc/3034.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/1175.test.cpp
documentation_of: src/circle.hpp
layout: document
redirect_from:
- /library/src/circle.hpp
- /library/src/circle.hpp.html
title: src/circle.hpp
---
