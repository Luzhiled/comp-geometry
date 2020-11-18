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
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_cut.hpp
    title: src/convex_cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_cl.hpp
    title: src/cross_point_cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/cross_point_ll.hpp
    title: src/cross_point_ll.hpp
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
  - icon: ':heavy_check_mark:'
    path: src/segment.hpp
    title: src/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cc.hpp
    title: src/tangent_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/tangent_cp.hpp
    title: src/tangent_cp.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_A.test.cpp
    title: test/aoj/cgl/1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_B.test.cpp
    title: test/aoj/cgl/1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_A.test.cpp
    title: test/aoj/cgl/2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_B.test.cpp
    title: test/aoj/cgl/2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_C.test.cpp
    title: test/aoj/cgl/2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
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
    path: test/aoj/cgl/7_F.test.cpp
    title: test/aoj/cgl/7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
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
  bundledCode: "#line 2 \"src/line.hpp\"\n\n#include <vector>\nusing namespace std;\n\
    \n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#line 5 \"src/point.hpp\"\n\
    #include <cmath>\n#include <istream>\n#include <ostream>\nusing namespace std;\n\
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
    \ 7 \"src/line.hpp\"\n\n// line \nnamespace geometry {\n  struct line {\n    point\
    \ a, b;\n\n    line() = default;\n    line(point a, point b) : a(a), b(b) {}\n\
    \  };\n\n  using lines = vector< line >;\n}\n"
  code: "#pragma once\n\n#include <vector>\nusing namespace std;\n\n#include \"./point.hpp\"\
    \n\n// line \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line()\
    \ = default;\n    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines\
    \ = vector< line >;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/line.hpp
  requiredBy:
  - src/tangent_cc.hpp
  - src/convex_cut.hpp
  - src/circumscribed_circle.hpp
  - src/is_parallel.hpp
  - src/cross_point_cl.hpp
  - src/is_orthogonal.hpp
  - src/cross_point_ll.hpp
  - src/segment.hpp
  - src/distance_ss.hpp
  - src/common_area_cp.hpp
  - src/tangent_cp.hpp
  - src/projection.hpp
  - src/distance_sp.hpp
  - src/reflection.hpp
  - src/inscribed_circle.hpp
  - src/is_intersect.hpp
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/1_A.test.cpp
  - test/aoj/cgl/2_C.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/2_A.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/1_B.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/icpc/2003.test.cpp
documentation_of: src/line.hpp
layout: document
redirect_from:
- /library/src/line.hpp
- /library/src/line.hpp.html
title: src/line.hpp
---
