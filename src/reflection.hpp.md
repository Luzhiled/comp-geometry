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
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_B.test.cpp
    title: test/aoj-cgl/CGL_1_B.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/reflection.hpp\"\n\nusing namespace std;\n\n#line 2\
    \ \"src/projection.hpp\"\n\n#include <complex>\nusing namespace std;\n\n#line\
    \ 2 \"src/base.hpp\"\n\n#include <cmath>\nusing namespace std;\n\n// base\nnamespace\
    \ geometry {\n    using real_number = long double;\n\n    const real_number eps\
    \ = 1e-9;\n    const real_number pi = acos(-1);\n\n    inline int sign(real_number\
    \ r) {\n        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n \
    \       return 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number\
    \ r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2 \"src/point.hpp\"\
    \n\n#line 4 \"src/point.hpp\"\n#include <vector>\n#line 6 \"src/point.hpp\"\n\
    #include <istream>\n#include <ostream>\nusing namespace std;\n\n#line 11 \"src/point.hpp\"\
    \n\n// point\nnamespace geometry {\n  using point = complex< real_number >;\n\
    \  using points = vector< point >;\n\n  istream &operator>>(istream &is, point\
    \ &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return\
    \ is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p) {\n    return\
    \ os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const point &p,\
    \ const real_number &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\
    \n  point rotate(const real_number &theta, const point &p) {\n    return point(cos(theta)\
    \ * p.real() + sin(-theta) * p.imag(),\n                 sin(theta) * p.real()\
    \ + cos(-theta) * p.imag());\n  }\n}\n#line 2 \"src/line.hpp\"\n\n#line 4 \"src/line.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line \nnamespace geometry\
    \ {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 2 \"src/product.hpp\"\n\nusing namespace std;\n\n#line 6 \"src/product.hpp\"\
    \n\n// product\nnamespace geometry {\n    real_number cross(const point &a, const\
    \ point &b) {\n        return a.real() * b.imag() - a.imag() * b.real();\n   \
    \ }\n\n    real_number dot(const point &a, const point &b) {\n        return a.real()\
    \ * b.real() + a.imag() * b.imag();\n    }\n}\n#line 10 \"src/projection.hpp\"\
    \n\n// projection\nnamespace geometry {\n  point projection(const line &l, const\
    \ point &p) {\n    real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n\
    \    return l.a + (l.a - l.b) * t;\n  }\n}\n#line 8 \"src/reflection.hpp\"\n\n\
    namespace geometry {\n  point reflection(const line &l, const point &p) {\n  \
    \  return p + (projection(l, p) - p) * 2;\n  }\n}\n"
  code: "#pragma once\n\nusing namespace std;\n\n#include \"./projection.hpp\"\n#include\
    \ \"./line.hpp\"\n#include \"./point.hpp\"\n\nnamespace geometry {\n  point reflection(const\
    \ line &l, const point &p) {\n    return p + (projection(l, p) - p) * 2;\n  }\n\
    }\n"
  dependsOn:
  - src/projection.hpp
  - src/base.hpp
  - src/point.hpp
  - src/line.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/reflection.hpp
  requiredBy: []
  timestamp: '2020-11-16 02:22:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_1_B.test.cpp
documentation_of: src/reflection.hpp
layout: document
redirect_from:
- /library/src/reflection.hpp
- /library/src/reflection.hpp.html
title: src/reflection.hpp
---
