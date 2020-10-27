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
    path: test/aoj-cgl/CGL_4_A.test.cpp
    title: test/aoj-cgl/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_B.test.cpp
    title: test/aoj-cgl/CGL_4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_5_A.test.cpp
    title: test/aoj-cgl/CGL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_D.test.cpp
    title: test/aoj-cgl/CGL_7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_E.test.cpp
    title: test/aoj-cgl/CGL_7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_F.test.cpp
    title: test/aoj-cgl/CGL_7_F.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/compare.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
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
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 8 \"src/compare.hpp\"\n\
    \nnamespace geometry {\n  bool compare_x(const point &a, const point &b) {\n \
    \   return !is_equal(a.real(), b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n\
    \  }\n\n  bool compare_y(const point &a, const point &b) {\n    return !is_equal(a.imag(),\
    \ b.imag()) ? a.imag() < b.imag() : a.real() < b.real();\n  }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n#include \"./point.hpp\"\n\nnamespace geometry {\n  bool compare_x(const\
    \ point &a, const point &b) {\n    return !is_equal(a.real(), b.real()) ? a.real()\
    \ < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const point &a, const\
    \ point &b) {\n    return !is_equal(a.imag(), b.imag()) ? a.imag() < b.imag()\
    \ : a.real() < b.real();\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  isVerificationFile: false
  path: src/compare.hpp
  requiredBy:
  - src/closest_pair.hpp
  - src/convex_diameter.hpp
  - src/convex_hull.hpp
  timestamp: '2020-10-27 12:17:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_4_A.test.cpp
  - test/aoj-cgl/CGL_5_A.test.cpp
  - test/aoj-cgl/CGL_4_B.test.cpp
  - test/aoj-cgl/CGL_7_F.test.cpp
  - test/aoj-cgl/CGL_7_E.test.cpp
  - test/aoj-cgl/CGL_7_D.test.cpp
documentation_of: src/compare.hpp
layout: document
redirect_from:
- /library/src/compare.hpp
- /library/src/compare.hpp.html
title: src/compare.hpp
---
