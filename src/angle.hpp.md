---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/angle.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace\
    \ std;\n\n// base\nnamespace geometry {\n    using real_number = long double;\n\
    \n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\n\
    \    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n    \
    \    if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 7\
    \ \"src/angle.hpp\"\n\n// angle\nnamespace geometry {\n    real_number radian_to_degree(real_number\
    \ theta) {\n        return theta * 180.0 / pi;\n    }\n\n    real_number degree_to_radian(const\
    \ real_number deg) {\n        return deg * pi / 180.0;\n    }\n\n    real_number\
    \ get_smaller_angle(const point &a, const point &b, const point &c) {\n      \
    \  const point v(b - a), w(c - b);\n        real_number alpha = atan2(v.imag(),\
    \ v.real());\n        real_number beta = atan2(w.imag(), w.real());\n        if\
    \ (alpha > beta) swap(alpha, beta);\n        real_number theta = beta - alpha;\n\
    \        return min(theta, 2 * pi - theta);\n    }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./base.hpp\"\n\n// angle\nnamespace geometry {\n    real_number radian_to_degree(real_number\
    \ theta) {\n        return theta * 180.0 / pi;\n    }\n\n    real_number degree_to_radian(const\
    \ real_number deg) {\n        return deg * pi / 180.0;\n    }\n\n    real_number\
    \ get_smaller_angle(const point &a, const point &b, const point &c) {\n      \
    \  const point v(b - a), w(c - b);\n        real_number alpha = atan2(v.imag(),\
    \ v.real());\n        real_number beta = atan2(w.imag(), w.real());\n        if\
    \ (alpha > beta) swap(alpha, beta);\n        real_number theta = beta - alpha;\n\
    \        return min(theta, 2 * pi - theta);\n    }\n}\n"
  dependsOn:
  - src/base.hpp
  isVerificationFile: false
  path: src/angle.hpp
  requiredBy: []
  timestamp: '2020-10-15 00:41:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/angle.hpp
layout: document
redirect_from:
- /library/src/angle.hpp
- /library/src/angle.hpp.html
title: src/angle.hpp
---
