---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/area.hpp
    title: src/area.hpp
  - icon: ':heavy_check_mark:'
    path: src/ccw.hpp
    title: src/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/contains.hpp
    title: src/contains.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_cut.hpp
    title: src/convex_cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_hull.hpp
    title: src/convex_hull.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point.hpp
    title: src/cross_point.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance.hpp
    title: src/distance.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_intersect.hpp
    title: src/is_intersect.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_orthogonal.hpp
    title: src/is_orthogonal.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_parallel.hpp
    title: src/is_parallel.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/reflection.hpp
    title: src/reflection.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_A.test.cpp
    title: test/aoj-cgl/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_B.test.cpp
    title: test/aoj-cgl/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_C.test.cpp
    title: test/aoj-cgl/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_A.test.cpp
    title: test/aoj-cgl/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_B.test.cpp
    title: test/aoj-cgl/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_C.test.cpp
    title: test/aoj-cgl/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_D.test.cpp
    title: test/aoj-cgl/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_A.test.cpp
    title: test/aoj-cgl/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_B.test.cpp
    title: test/aoj-cgl/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_C.test.cpp
    title: test/aoj-cgl/CGL_3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_A.test.cpp
    title: test/aoj-cgl/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_C.test.cpp
    title: test/aoj-cgl/CGL_4_C.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/angle.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 7\
    \ \"src/angle.hpp\"\n\n// angle\nnamespace geometry {\n    real_number cross(const\
    \ point &a, const point &b) {\n        return a.real() * b.imag() - a.imag() *\
    \ b.real();\n    }\n\n    real_number dot(const point &a, const point &b) {\n\
    \        return a.real() * b.real() + a.imag() * b.imag();\n    }\n\n    real_number\
    \ radian_to_degree(real_number theta) {\n        return theta * 180.0 / pi;\n\
    \    }\n\n    real_number degree_to_radian(const real_number deg) {\n        return\
    \ deg * pi / 180.0;\n    }\n\n    real_number get_smaller_angle(const point &a,\
    \ const point &b, const point &c) {\n        const point v(b - a), w(c - b);\n\
    \        real_number alpha = atan2(v.imag(), v.real());\n        real_number beta\
    \ = atan2(w.imag(), w.real());\n        if (alpha > beta) swap(alpha, beta);\n\
    \        real_number theta = beta - alpha;\n        return min(theta, 2 * pi -\
    \ theta);\n    }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n\n// angle\nnamespace geometry {\n    real_number cross(const\
    \ point &a, const point &b) {\n        return a.real() * b.imag() - a.imag() *\
    \ b.real();\n    }\n\n    real_number dot(const point &a, const point &b) {\n\
    \        return a.real() * b.real() + a.imag() * b.imag();\n    }\n\n    real_number\
    \ radian_to_degree(real_number theta) {\n        return theta * 180.0 / pi;\n\
    \    }\n\n    real_number degree_to_radian(const real_number deg) {\n        return\
    \ deg * pi / 180.0;\n    }\n\n    real_number get_smaller_angle(const point &a,\
    \ const point &b, const point &c) {\n        const point v(b - a), w(c - b);\n\
    \        real_number alpha = atan2(v.imag(), v.real());\n        real_number beta\
    \ = atan2(w.imag(), w.real());\n        if (alpha > beta) swap(alpha, beta);\n\
    \        real_number theta = beta - alpha;\n        return min(theta, 2 * pi -\
    \ theta);\n    }\n}\n"
  dependsOn:
  - src/base.hpp
  isVerificationFile: false
  path: src/angle.hpp
  requiredBy:
  - src/distance.hpp
  - src/convex_hull.hpp
  - src/ccw.hpp
  - src/contains.hpp
  - src/convex_cut.hpp
  - src/is_orthogonal.hpp
  - src/cross_point.hpp
  - src/is_intersect.hpp
  - src/is_parallel.hpp
  - src/is_convex.hpp
  - src/reflection.hpp
  - src/projection.hpp
  - src/area.hpp
  timestamp: '2020-10-14 18:34:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_1_B.test.cpp
  - test/aoj-cgl/CGL_3_C.test.cpp
  - test/aoj-cgl/CGL_2_C.test.cpp
  - test/aoj-cgl/CGL_1_A.test.cpp
  - test/aoj-cgl/CGL_2_B.test.cpp
  - test/aoj-cgl/CGL_2_D.test.cpp
  - test/aoj-cgl/CGL_4_C.test.cpp
  - test/aoj-cgl/CGL_4_A.test.cpp
  - test/aoj-cgl/CGL_1_C.test.cpp
  - test/aoj-cgl/CGL_3_B.test.cpp
  - test/aoj-cgl/CGL_2_A.test.cpp
  - test/aoj-cgl/CGL_3_A.test.cpp
documentation_of: src/angle.hpp
layout: document
redirect_from:
- /library/src/angle.hpp
- /library/src/angle.hpp.html
title: src/angle.hpp
---
