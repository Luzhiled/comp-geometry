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
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_A.test.cpp
    title: test/aoj-cgl/CGL_2_A.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/is_orthogonal.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n    using real_number = long\
    \ double;\n\n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\
    \n    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n   \
    \     if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2\
    \ \"src/line.hpp\"\n\n#line 4 \"src/line.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 7 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/line.hpp\"\n\n\
    // line \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line()\
    \ = default;\n    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines\
    \ = vector< line >;\n}\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n    real_number cross(const point &a, const point &b) {\n      \
    \  return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 9 \"src/is_orthogonal.hpp\"\n\n// orthogonal\n\
    namespace geometry {\n  bool is_orthogonal(const line &l1, const line &l2) {\n\
    \    return is_equal(dot(l1.a - l1.b, l2.a - l2.b), 0);\n  }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n#include \"./line.hpp\"\n#include \"./product.hpp\"\n\n// orthogonal\n\
    namespace geometry {\n  bool is_orthogonal(const line &l1, const line &l2) {\n\
    \    return is_equal(dot(l1.a - l1.b, l2.a - l2.b), 0);\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/line.hpp
  - src/point.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/is_orthogonal.hpp
  requiredBy: []
  timestamp: '2020-10-15 00:41:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_2_A.test.cpp
documentation_of: src/is_orthogonal.hpp
layout: document
redirect_from:
- /library/src/is_orthogonal.hpp
- /library/src/is_orthogonal.hpp.html
title: src/is_orthogonal.hpp
---
