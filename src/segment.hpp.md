---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
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
    path: src/is_intersect.hpp
    title: src/is_intersect.hpp
  _extendedVerifiedWith:
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
    path: test/aoj/icpc/2442.test.cpp
    title: test/aoj/icpc/2442.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/segment.hpp\"\n\n#include <vector>\n\n#line 2 \"src/line.hpp\"\
    \n\n#line 4 \"src/line.hpp\"\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n\
    #line 5 \"src/point.hpp\"\n#include <cmath>\n#include <istream>\n#include <ostream>\n\
    \n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\n\n// base\nnamespace geometry\
    \ {\n  using namespace std;\n  using real_number = long double;\n\n  const real_number\
    \ PI = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool\
    \ equals(const point &a, const point &b) {\n    return equals(a.real(), b.real())\
    \ and equals(a.imag(), b.imag());\n  }\n}\n#line 6 \"src/line.hpp\"\n\n// line\
    \ \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line() = default;\n\
    \    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line\
    \ >;\n}\n#line 6 \"src/segment.hpp\"\n\n// segment\nnamespace geometry {\n  struct\
    \ segment : line {\n    segment() = default;\n    using line::line;\n  };\n\n\
    \  using segments = vector< segment >;\n}\n"
  code: "#pragma once\n\n#include <vector>\n\n#include \"./line.hpp\"\n\n// segment\n\
    namespace geometry {\n  struct segment : line {\n    segment() = default;\n  \
    \  using line::line;\n  };\n\n  using segments = vector< segment >;\n}\n"
  dependsOn:
  - src/line.hpp
  - src/point.hpp
  - src/base.hpp
  isVerificationFile: false
  path: src/segment.hpp
  requiredBy:
  - src/is_intersect.hpp
  - src/common_area_cp.hpp
  - src/distance_sp.hpp
  - src/distance_ss.hpp
  - src/inscribed_circle.hpp
  timestamp: '2021-01-16 13:51:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2442.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/2_C.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/2_D.test.cpp
documentation_of: src/segment.hpp
layout: document
redirect_from:
- /library/src/segment.hpp
- /library/src/segment.hpp.html
title: src/segment.hpp
---
