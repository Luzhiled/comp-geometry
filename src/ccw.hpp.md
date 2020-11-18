---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance_sp.hpp
    title: src/distance_sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance_ss.hpp
    title: src/distance_ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/inscribed_circle.hpp
    title: src/inscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_intersect.hpp
    title: src/is_intersect.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_C.test.cpp
    title: test/aoj/cgl/1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_B.test.cpp
    title: test/aoj/cgl/2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2003.test.cpp
    title: test/aoj/icpc/2003.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/ccw.hpp\"\n\nusing namespace std;\n\n#line 2 \"src/product.hpp\"\
    \n\nusing namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#include <cmath>\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n  using real_number = long\
    \ double;\n\n  const real_number PI = acos(-1);\n\n  inline static real_number\
    \ &eps() {\n    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static\
    \ void set_eps(real_number EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number\
    \ r) {\n    set_eps(1e-10);\n    if (r < -eps()) return -1;\n    if (r > +eps())\
    \ return +1;\n    return 0;\n  }\n\n  inline bool is_equal(real_number r1, real_number\
    \ r2) {\n    return sign(r1 - r2) == 0;\n  }\n}\n#line 6 \"src/product.hpp\"\n\
    \n// product\nnamespace geometry {\n    real_number cross(const point &a, const\
    \ point &b) {\n        return a.real() * b.imag() - a.imag() * b.real();\n   \
    \ }\n\n    real_number dot(const point &a, const point &b) {\n        return a.real()\
    \ * b.real() + a.imag() * b.imag();\n    }\n}\n#line 6 \"src/ccw.hpp\"\n\n// ccw\n\
    namespace geometry {\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr int\
    \ CLOCKWISE         = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n\
    \  constexpr int ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT\
    \        =  0; // a-c-b\n  int ccw(const point &a, point b, point c) {\n    b\
    \ = b - a, c = c - a;\n    if (sign(cross(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross(b, c)) == -1) return CLOCKWISE;\n    if (sign(dot(b, c)) ==\
    \ -1) return ONLINE_BACK;\n    if (norm(b) < norm(c)) return ONLINE_FRONT;\n \
    \   return ON_SEGMENT;\n  }\n}\n"
  code: "#pragma once\n\nusing namespace std;\n\n#include \"./product.hpp\"\n\n//\
    \ ccw\nnamespace geometry {\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr\
    \ int CLOCKWISE         = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n\
    \  constexpr int ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT\
    \        =  0; // a-c-b\n  int ccw(const point &a, point b, point c) {\n    b\
    \ = b - a, c = c - a;\n    if (sign(cross(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross(b, c)) == -1) return CLOCKWISE;\n    if (sign(dot(b, c)) ==\
    \ -1) return ONLINE_BACK;\n    if (norm(b) < norm(c)) return ONLINE_FRONT;\n \
    \   return ON_SEGMENT;\n  }\n}\n"
  dependsOn:
  - src/product.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/ccw.hpp
  requiredBy:
  - src/distance_ss.hpp
  - src/common_area_cp.hpp
  - src/is_convex.hpp
  - src/distance_sp.hpp
  - src/inscribed_circle.hpp
  - src/is_intersect.hpp
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/1_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/icpc/2003.test.cpp
documentation_of: src/ccw.hpp
layout: document
redirect_from:
- /library/src/ccw.hpp
- /library/src/ccw.hpp.html
title: src/ccw.hpp
---
