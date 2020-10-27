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
    path: test/aoj-cgl/CGL_7_I.test.cpp
    title: test/aoj-cgl/CGL_7_I.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/common_area_cc.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n    using real_number = long\
    \ double;\n\n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\
    \n    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n   \
    \     if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
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
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 2 \"src/circle.hpp\"\n\n\
    #line 4 \"src/circle.hpp\"\nusing namespace std;\n\n#line 7 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 9 \"src/common_area_cc.hpp\"\n\
    \nnamespace geometry {\n  real_number common_area_cc(circle a, circle b) {\n \
    \   real_number d = abs(a.p - b.p);\n    if (a.r > b.r) swap(a, b);\n\n    if\
    \ (sign(a.r + b.r - d) <= 0) return 0;\n    if (sign(d - (b.r - a.r)) <= 0) {\n\
    \      return norm(a.r) * pi;\n    }\n\n    real_number res = 0;\n    for (int\
    \ i = 0; i < 2; ++i) {\n      real_number alpha = acos((norm(b.r) + norm(d) -\
    \ norm(a.r)) / (2 * b.r * d));\n      real_number s = alpha * norm(b.r);\n   \
    \   real_number t = norm(b.r) * sin(alpha) * cos(alpha);\n      res += s - t;\n\
    \      std::swap(a, b);\n    }\n\n    return res;\n  }\n\n}\n\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n#include \"./point.hpp\"\n#include \"./circle.hpp\"\n\nnamespace\
    \ geometry {\n  real_number common_area_cc(circle a, circle b) {\n    real_number\
    \ d = abs(a.p - b.p);\n    if (a.r > b.r) swap(a, b);\n\n    if (sign(a.r + b.r\
    \ - d) <= 0) return 0;\n    if (sign(d - (b.r - a.r)) <= 0) {\n      return norm(a.r)\
    \ * pi;\n    }\n\n    real_number res = 0;\n    for (int i = 0; i < 2; ++i) {\n\
    \      real_number alpha = acos((norm(b.r) + norm(d) - norm(a.r)) / (2 * b.r *\
    \ d));\n      real_number s = alpha * norm(b.r);\n      real_number t = norm(b.r)\
    \ * sin(alpha) * cos(alpha);\n      res += s - t;\n      std::swap(a, b);\n  \
    \  }\n\n    return res;\n  }\n\n}\n\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  - src/circle.hpp
  isVerificationFile: false
  path: src/common_area_cc.hpp
  requiredBy: []
  timestamp: '2020-10-27 12:41:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_7_I.test.cpp
documentation_of: src/common_area_cc.hpp
layout: document
redirect_from:
- /library/src/common_area_cc.hpp
- /library/src/common_area_cc.hpp.html
title: src/common_area_cc.hpp
---