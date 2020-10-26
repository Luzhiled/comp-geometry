---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_A.test.cpp
    title: test/aoj-cgl/CGL_7_A.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/intersect_cc.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n    using real_number = long\
    \ double;\n\n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\
    \n    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n   \
    \     if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2\
    \ \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 7 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\n\n\
    // circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 8 \"src/intersect_cc.hpp\"\n\n\
    namespace geometry {\n  constexpr int SEPERATE     = 4;\n  constexpr int CIRCUMSCRIBE\
    \ = 3;\n  constexpr int INTERSECT    = 2;\n  constexpr int INSCRIBE     = 1;\n\
    \  constexpr int CONTAIN      = 0;\n  int intersect_cc(circle c1, circle c2) {\n\
    \    if (c1.r > c2.r) swap(c1, c2);\n\n    real_number d = abs(c1.p - c2.p);\n\
    \    real_number r = c1.r + c2.r;\n\n    if (sign(d - r) > 0) return SEPERATE;\n\
    \    if (is_equal(d, r)) return CIRCUMSCRIBE;\n    if (is_equal(d + c1.r, c2.r))\
    \ return INSCRIBE;\n    if (d + c1.r < c2.r) return CONTAIN;\n    return INTERSECT;\n\
    \  }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n#include \"./circle.hpp\"\n\nnamespace geometry {\n  constexpr\
    \ int SEPERATE     = 4;\n  constexpr int CIRCUMSCRIBE = 3;\n  constexpr int INTERSECT\
    \    = 2;\n  constexpr int INSCRIBE     = 1;\n  constexpr int CONTAIN      = 0;\n\
    \  int intersect_cc(circle c1, circle c2) {\n    if (c1.r > c2.r) swap(c1, c2);\n\
    \n    real_number d = abs(c1.p - c2.p);\n    real_number r = c1.r + c2.r;\n\n\
    \    if (sign(d - r) > 0) return SEPERATE;\n    if (is_equal(d, r)) return CIRCUMSCRIBE;\n\
    \    if (is_equal(d + c1.r, c2.r)) return INSCRIBE;\n    if (d + c1.r < c2.r)\
    \ return CONTAIN;\n    return INTERSECT;\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  isVerificationFile: false
  path: src/intersect_cc.hpp
  requiredBy: []
  timestamp: '2020-10-27 07:00:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_7_A.test.cpp
documentation_of: src/intersect_cc.hpp
layout: document
redirect_from:
- /library/src/intersect_cc.hpp
- /library/src/intersect_cc.hpp.html
title: src/intersect_cc.hpp
---
