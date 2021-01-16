---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
  - icon: ':question:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/5_A.test.cpp
    title: test/aoj/cgl/5_A.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/closest_pair.hpp\"\n\n#include <cmath>\n#include <complex>\n\
    #include <algorithm>\n#include <iterator>\n\n#line 2 \"src/base.hpp\"\n\n#line\
    \ 4 \"src/base.hpp\"\n\n// base\nnamespace geometry {\n  using namespace std;\n\
    \  using real_number = long double;\n\n  const real_number PI = acosl(-1);\n\n\
    \  inline static real_number &eps() {\n    static real_number EPS = 1e-10;\n \
    \   return EPS;\n  }\n\n  static void set_eps(real_number EPS) {\n    eps() =\
    \ EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n    if\
    \ (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n  }\n\
    \n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1 -\
    \ r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\n\
    #include <vector>\n#line 6 \"src/point.hpp\"\n#include <istream>\n#include <ostream>\n\
    \n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point\
    \ = complex< real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n             \
    \    sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool equals(const\
    \ point &a, const point &b) {\n    return equals(a.real(), b.real()) and equals(a.imag(),\
    \ b.imag());\n  }\n}\n#line 2 \"src/compare.hpp\"\n\n#line 5 \"src/compare.hpp\"\
    \n\nnamespace geometry {\n  bool compare_x(const point &a, const point &b) {\n\
    \    return !equals(a.real(), b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n\
    \  }\n\n  bool compare_y(const point &a, const point &b) {\n    return !equals(a.imag(),\
    \ b.imag()) ? a.imag() < b.imag() : a.real() < b.real();\n  }\n}\n#line 11 \"\
    src/closest_pair.hpp\"\n\nnamespace geometry {\n  real_number impl_closest_pair(points\
    \ &pts, int l, int r) {\n    if (r - l <= 1) return abs(pts[0] - pts[1]);\n  \
    \  int m = (l + r) / 2;\n    real_number x = pts[m].real();\n    real_number d\
    \ = min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r));\n    inplace_merge(pts.begin()\
    \ + l, pts.begin() + m, pts.begin() + r, compare_y);\n\n    points ps;\n    for\
    \ (int i = l; i < r; ++i) {\n      if (sign(abs(pts[i].real() - x) - d) >= 0)\
    \ continue;\n      for (int j = 0; j < (int)ps.size(); ++j) {\n        real_number\
    \ dy = pts[i].imag() - (*next(ps.rbegin(), j)).imag();\n        if (sign(dy -\
    \ d) >= 0) break;\n        d = min(d, abs(pts[i] - *next(ps.rbegin(), j)));\n\
    \      }\n\n      ps.emplace_back(pts[i]);\n    }\n\n    return d;\n  }\n\n  real_number\
    \ closest_pair(points pts) {\n    const real_number INF = 1e18;\n    if (pts.size()\
    \ <= 1) {\n      return INF;\n    }\n\n    sort(pts.begin(), pts.end(), compare_x);\n\
    \n    return impl_closest_pair(pts, 0, pts.size());\n  }\n}\n"
  code: "#pragma once\n\n#include <cmath>\n#include <complex>\n#include <algorithm>\n\
    #include <iterator>\n\n#include \"./base.hpp\"\n#include \"./point.hpp\"\n#include\
    \ \"./compare.hpp\"\n\nnamespace geometry {\n  real_number impl_closest_pair(points\
    \ &pts, int l, int r) {\n    if (r - l <= 1) return abs(pts[0] - pts[1]);\n  \
    \  int m = (l + r) / 2;\n    real_number x = pts[m].real();\n    real_number d\
    \ = min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r));\n    inplace_merge(pts.begin()\
    \ + l, pts.begin() + m, pts.begin() + r, compare_y);\n\n    points ps;\n    for\
    \ (int i = l; i < r; ++i) {\n      if (sign(abs(pts[i].real() - x) - d) >= 0)\
    \ continue;\n      for (int j = 0; j < (int)ps.size(); ++j) {\n        real_number\
    \ dy = pts[i].imag() - (*next(ps.rbegin(), j)).imag();\n        if (sign(dy -\
    \ d) >= 0) break;\n        d = min(d, abs(pts[i] - *next(ps.rbegin(), j)));\n\
    \      }\n\n      ps.emplace_back(pts[i]);\n    }\n\n    return d;\n  }\n\n  real_number\
    \ closest_pair(points pts) {\n    const real_number INF = 1e18;\n    if (pts.size()\
    \ <= 1) {\n      return INF;\n    }\n\n    sort(pts.begin(), pts.end(), compare_x);\n\
    \n    return impl_closest_pair(pts, 0, pts.size());\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  - src/compare.hpp
  isVerificationFile: false
  path: src/closest_pair.hpp
  requiredBy: []
  timestamp: '2021-01-16 13:51:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/5_A.test.cpp
documentation_of: src/closest_pair.hpp
layout: document
redirect_from:
- /library/src/closest_pair.hpp
- /library/src/closest_pair.hpp.html
title: src/closest_pair.hpp
---
