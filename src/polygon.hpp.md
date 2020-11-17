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
    path: src/area.hpp
    title: src/area.hpp
  - icon: ':heavy_check_mark:'
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/contains.hpp
    title: src/contains.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_cut.hpp
    title: src/convex_cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_diameter.hpp
    title: src/convex_diameter.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_hull.hpp
    title: src/convex_hull.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_A.test.cpp
    title: test/aoj/cgl/3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_C.test.cpp
    title: test/aoj/cgl/3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/polygon.hpp\"\n\n#include <vector>\nusing namespace\
    \ std;\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#line 5 \"src/point.hpp\"\
    \n#include <cmath>\n#include <istream>\n#include <ostream>\nusing namespace std;\n\
    \n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\
    \n// base\nnamespace geometry {\n  using real_number = long double;\n\n  const\
    \ real_number PI = acos(-1);\n\n  inline static real_number &eps() {\n    static\
    \ real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number\
    \ EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool is_equal(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 11 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line\
    \ 7 \"src/polygon.hpp\"\n\n// polygon\nnamespace geometry {\n  using polygon =\
    \ vector< point >;\n  using polygons = vector< polygon >;\n}\n"
  code: "#pragma once\n\n#include <vector>\nusing namespace std;\n\n#include \"./point.hpp\"\
    \n\n// polygon\nnamespace geometry {\n  using polygon = vector< point >;\n  using\
    \ polygons = vector< polygon >;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/polygon.hpp
  requiredBy:
  - src/convex_cut.hpp
  - src/area.hpp
  - src/common_area_cp.hpp
  - src/convex_diameter.hpp
  - src/is_convex.hpp
  - src/convex_hull.hpp
  - src/contains.hpp
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/3_C.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/7_H.test.cpp
documentation_of: src/polygon.hpp
layout: document
redirect_from:
- /library/src/polygon.hpp
- /library/src/polygon.hpp.html
title: src/polygon.hpp
---
