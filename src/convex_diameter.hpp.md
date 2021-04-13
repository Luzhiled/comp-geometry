---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/polygon.hpp
    title: src/polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/convex_diameter.hpp\"\n\n#include <complex>\n#include\
    \ <algorithm>\n\n#line 2 \"src/base.hpp\"\n\n#include <cmath>\n\n// base\nnamespace\
    \ geometry {\n  using namespace std;\n  using real_number = long double;\n\n \
    \ const real_number PI = acosl(-1);\n\n  inline static real_number &eps() {\n\
    \    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number\
    \ EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/polygon.hpp\"\n\n#include <vector>\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#line 6 \"src/point.hpp\"\n#include <istream>\n#include\
    \ <ostream>\n\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n\
    \  using point = complex< real_number >;\n  using points = vector< point >;\n\n\
    \  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool\
    \ equals(const point &a, const point &b) {\n    return equals(a.real(), b.real())\
    \ and equals(a.imag(), b.imag());\n  }\n}\n#line 6 \"src/polygon.hpp\"\n\n// polygon\n\
    namespace geometry {\n  using polygon = vector< point >;\n  using polygons = vector<\
    \ polygon >;\n}\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\n\n\
    // product\nnamespace geometry {\n  real_number cross(const point &a, const point\
    \ &b) {\n    return a.real() * b.imag() - a.imag() * b.real();\n  }\n\n  real_number\
    \ dot(const point &a, const point &b) {\n    return a.real() * b.real() + a.imag()\
    \ * b.imag();\n  }\n}\n#line 2 \"src/compare.hpp\"\n\n#line 5 \"src/compare.hpp\"\
    \n\nnamespace geometry {\n  bool compare_x(const point &a, const point &b) {\n\
    \    return !equals(a.real(), b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n\
    \  }\n\n  bool compare_y(const point &a, const point &b) {\n    return !equals(a.imag(),\
    \ b.imag()) ? a.imag() < b.imag() : a.real() < b.real();\n  }\n}\n#line 10 \"\
    src/convex_diameter.hpp\"\n\nnamespace geometry {\n  real_number convex_diameter(const\
    \ polygon &p) {\n    int n = p.size();\n    if (n == 2) return abs(p[0] - p[1]);\n\
    \n    int i = 0, j = 0;\n    for (int k = 0; k < n; ++k) {\n      if ( compare_x(p[i],\
    \ p[k])) i = k;\n      if (!compare_x(p[j], p[k])) j = k;\n    }\n\n    real_number\
    \ res = 0;\n    int si = i, sj = j;\n    while (i != sj || j != si) {\n      res\
    \ = max(res, abs(p[i] - p[j]));\n      if (sign(cross(p[(i + 1) % n] - p[i], p[(j\
    \ + 1) % n] - p[j])) == -1) {\n        i = (i + 1) % n;\n      } else {\n    \
    \    j = (j + 1) % n;\n      }\n    }\n\n    return res;\n  }\n}\n"
  code: "#pragma once\n\n#include <complex>\n#include <algorithm>\n\n#include \"./base.hpp\"\
    \n#include \"./polygon.hpp\"\n#include \"./product.hpp\"\n#include \"./compare.hpp\"\
    \n\nnamespace geometry {\n  real_number convex_diameter(const polygon &p) {\n\
    \    int n = p.size();\n    if (n == 2) return abs(p[0] - p[1]);\n\n    int i\
    \ = 0, j = 0;\n    for (int k = 0; k < n; ++k) {\n      if ( compare_x(p[i], p[k]))\
    \ i = k;\n      if (!compare_x(p[j], p[k])) j = k;\n    }\n\n    real_number res\
    \ = 0;\n    int si = i, sj = j;\n    while (i != sj || j != si) {\n      res =\
    \ max(res, abs(p[i] - p[j]));\n      if (sign(cross(p[(i + 1) % n] - p[i], p[(j\
    \ + 1) % n] - p[j])) == -1) {\n        i = (i + 1) % n;\n      } else {\n    \
    \    j = (j + 1) % n;\n      }\n    }\n\n    return res;\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/polygon.hpp
  - src/point.hpp
  - src/product.hpp
  - src/compare.hpp
  isVerificationFile: false
  path: src/convex_diameter.hpp
  requiredBy: []
  timestamp: '2021-01-16 13:51:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_B.test.cpp
documentation_of: src/convex_diameter.hpp
layout: document
redirect_from:
- /library/src/convex_diameter.hpp
- /library/src/convex_diameter.hpp.html
title: src/convex_diameter.hpp
---