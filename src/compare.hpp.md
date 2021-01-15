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
    path: src/closest_pair.hpp
    title: src/closest_pair.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_diameter.hpp
    title: src/convex_diameter.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_hull.hpp
    title: src/convex_hull.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/5_A.test.cpp
    title: test/aoj/cgl/5_A.test.cpp
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
    path: test/aoj/icpc/2003.test.cpp
    title: test/aoj/icpc/2003.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/compare.hpp\"\n\n#line 2 \"src/base.hpp\"\n\n#include\
    \ <cmath>\n\n// base\nnamespace geometry {\n  using namespace std;\n  using real_number\
    \ = long double;\n\n  const real_number PI = acosl(-1);\n\n  inline static real_number\
    \ &eps() {\n    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static\
    \ void set_eps(real_number EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number\
    \ r) {\n    set_eps(1e-10);\n    if (r < -eps()) return -1;\n    if (r > +eps())\
    \ return +1;\n    return 0;\n  }\n\n  inline bool equals(real_number r1, real_number\
    \ r2) {\n    return sign(r1 - r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n\
    #include <complex>\n#include <vector>\n#line 6 \"src/point.hpp\"\n#include <istream>\n\
    #include <ostream>\n\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line\
    \ 5 \"src/compare.hpp\"\n\nnamespace geometry {\n  bool compare_x(const point\
    \ &a, const point &b) {\n    return !equals(a.real(), b.real()) ? a.real() < b.real()\
    \ : a.imag() < b.imag();\n  }\n\n  bool compare_y(const point &a, const point\
    \ &b) {\n    return !equals(a.imag(), b.imag()) ? a.imag() < b.imag() : a.real()\
    \ < b.real();\n  }\n}\n"
  code: "#pragma once\n\n#include \"./base.hpp\"\n#include \"./point.hpp\"\n\nnamespace\
    \ geometry {\n  bool compare_x(const point &a, const point &b) {\n    return !equals(a.real(),\
    \ b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const\
    \ point &a, const point &b) {\n    return !equals(a.imag(), b.imag()) ? a.imag()\
    \ < b.imag() : a.real() < b.real();\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  isVerificationFile: false
  path: src/compare.hpp
  requiredBy:
  - src/convex_hull.hpp
  - src/convex_diameter.hpp
  - src/closest_pair.hpp
  timestamp: '2020-11-23 23:19:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/5_A.test.cpp
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/icpc/2003.test.cpp
documentation_of: src/compare.hpp
layout: document
redirect_from:
- /library/src/compare.hpp
- /library/src/compare.hpp.html
title: src/compare.hpp
---
