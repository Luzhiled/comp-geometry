---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/ccw.hpp
    title: src/ccw.hpp
  - icon: ':question:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':question:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':question:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/segment.hpp
    title: src/segment.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/common_area_cp.hpp
    title: src/common_area_cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance_ss.hpp
    title: src/distance_ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/inscribed_circle.hpp
    title: src/inscribed_circle.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
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
  bundledCode: "#line 2 \"src/distance_sp.hpp\"\n\n#include <complex>\n#include <algorithm>\n\
    \n#line 2 \"src/base.hpp\"\n\n#include <cmath>\n\n// base\nnamespace geometry\
    \ {\n  using namespace std;\n  using real_number = long double;\n\n  const real_number\
    \ PI = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/projection.hpp\"\n\n#line 4 \"src/projection.hpp\"\
    \n\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\n#include <vector>\n\
    #line 6 \"src/point.hpp\"\n#include <istream>\n#include <ostream>\n\n#line 10\
    \ \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n             \
    \    sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 2 \"src/line.hpp\"\
    \n\n#line 4 \"src/line.hpp\"\n\n#line 6 \"src/line.hpp\"\n\n// line \nnamespace\
    \ geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n  real_number cross(const point &a, const point &b) {\n    return\
    \ a.real() * b.imag() - a.imag() * b.real();\n  }\n\n  real_number dot(const point\
    \ &a, const point &b) {\n    return a.real() * b.real() + a.imag() * b.imag();\n\
    \  }\n}\n#line 9 \"src/projection.hpp\"\n\n// projection\nnamespace geometry {\n\
    \  point projection(const line &l, const point &p) {\n    real_number t = dot(p\
    \ - l.a, l.a - l.b) / norm(l.a - l.b);\n    return l.a + (l.a - l.b) * t;\n  }\n\
    }\n#line 2 \"src/segment.hpp\"\n\n#line 4 \"src/segment.hpp\"\n\n#line 6 \"src/segment.hpp\"\
    \n\n// segment\nnamespace geometry {\n  struct segment : line {\n    segment()\
    \ = default;\n    using line::line;\n  };\n\n  using segments = vector< segment\
    \ >;\n}\n#line 2 \"src/ccw.hpp\"\n\n#line 4 \"src/ccw.hpp\"\n\n// ccw\nnamespace\
    \ geometry {\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr int CLOCKWISE\
    \         = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n  constexpr\
    \ int ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT        =  0;\
    \ // a-c-b\n  int ccw(const point &a, point b, point c) {\n    b = b - a, c =\
    \ c - a;\n    if (sign(cross(b, c)) == +1) return COUNTER_CLOCKWISE;\n    if (sign(cross(b,\
    \ c)) == -1) return CLOCKWISE;\n    if (sign(dot(b, c)) == -1) return ONLINE_BACK;\n\
    \    if (norm(b) < norm(c)) return ONLINE_FRONT;\n    return ON_SEGMENT;\n  }\n\
    }\n#line 11 \"src/distance_sp.hpp\"\n\nnamespace geometry {\n  real_number distance_sp(const\
    \ segment &s, const point &p) {\n    point pr = projection(s, p);\n    if (ccw(s.a,\
    \ s.b, pr) == 0) return abs(pr - p);\n    return min(abs(s.a - p), abs(s.b - p));\n\
    \  }\n}\n"
  code: "#pragma once\n\n#include <complex>\n#include <algorithm>\n\n#include \"./base.hpp\"\
    \n#include \"./projection.hpp\"\n#include \"./segment.hpp\"\n#include \"./point.hpp\"\
    \n#include \"./ccw.hpp\"\n\nnamespace geometry {\n  real_number distance_sp(const\
    \ segment &s, const point &p) {\n    point pr = projection(s, p);\n    if (ccw(s.a,\
    \ s.b, pr) == 0) return abs(pr - p);\n    return min(abs(s.a - p), abs(s.b - p));\n\
    \  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/projection.hpp
  - src/point.hpp
  - src/line.hpp
  - src/product.hpp
  - src/segment.hpp
  - src/ccw.hpp
  isVerificationFile: false
  path: src/distance_sp.hpp
  requiredBy:
  - src/inscribed_circle.hpp
  - src/common_area_cp.hpp
  - src/distance_ss.hpp
  timestamp: '2020-11-23 23:19:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2402.test.cpp
documentation_of: src/distance_sp.hpp
layout: document
redirect_from:
- /library/src/distance_sp.hpp
- /library/src/distance_sp.hpp.html
title: src/distance_sp.hpp
---
