---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/angle.hpp\"\n\n#include <cmath>\n#include <algorithm>\n\
    \n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\n\n// base\nnamespace geometry\
    \ {\n  using namespace std;\n  using real_number = long double;\n\n  const real_number\
    \ PI = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 7 \"src/angle.hpp\"\n\n// angle\nnamespace geometry\
    \ {\n  real_number radian_to_degree(real_number theta) {\n    return theta * 180.0\
    \ / PI;\n  }\n\n  real_number degree_to_radian(const real_number deg) {\n    return\
    \ deg * PI / 180.0;\n  }\n\n  real_number get_smaller_angle(const point &a, const\
    \ point &b, const point &c) {\n    const point v(b - a), w(c - b);\n    real_number\
    \ alpha = atan2(v.imag(), v.real());\n    real_number beta = atan2(w.imag(), w.real());\n\
    \    if (alpha > beta) swap(alpha, beta);\n    real_number theta = beta - alpha;\n\
    \    return min(theta, 2 * PI - theta);\n  }\n}\n"
  code: "#pragma once\n\n#include <cmath>\n#include <algorithm>\n\n#include \"./base.hpp\"\
    \n\n// angle\nnamespace geometry {\n  real_number radian_to_degree(real_number\
    \ theta) {\n    return theta * 180.0 / PI;\n  }\n\n  real_number degree_to_radian(const\
    \ real_number deg) {\n    return deg * PI / 180.0;\n  }\n\n  real_number get_smaller_angle(const\
    \ point &a, const point &b, const point &c) {\n    const point v(b - a), w(c -\
    \ b);\n    real_number alpha = atan2(v.imag(), v.real());\n    real_number beta\
    \ = atan2(w.imag(), w.real());\n    if (alpha > beta) swap(alpha, beta);\n   \
    \ real_number theta = beta - alpha;\n    return min(theta, 2 * PI - theta);\n\
    \  }\n}\n"
  dependsOn:
  - src/base.hpp
  isVerificationFile: false
  path: src/angle.hpp
  requiredBy: []
  timestamp: '2020-11-23 23:19:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
documentation_of: src/angle.hpp
layout: document
redirect_from:
- /library/src/angle.hpp
- /library/src/angle.hpp.html
title: src/angle.hpp
---
