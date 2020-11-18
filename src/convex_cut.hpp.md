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
    path: src/polygon.hpp
    title: src/polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/convex_cut.hpp\"\n\nusing namespace std;\n\n#line 2\
    \ \"src/base.hpp\"\n\n#include <cmath>\nusing namespace std;\n\n// base\nnamespace\
    \ geometry {\n  using real_number = long double;\n\n  const real_number PI = acos(-1);\n\
    \n  inline static real_number &eps() {\n    static real_number EPS = 1e-10;\n\
    \    return EPS;\n  }\n\n  static void set_eps(real_number EPS) {\n    eps() =\
    \ EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n    if\
    \ (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n  }\n\
    \n  inline bool is_equal(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/polygon.hpp\"\n\n#include <vector>\nusing\
    \ namespace std;\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#line 6 \"\
    src/point.hpp\"\n#include <istream>\n#include <ostream>\nusing namespace std;\n\
    \n#line 11 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point\
    \ = complex< real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n             \
    \    sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/polygon.hpp\"\
    \n\n// polygon\nnamespace geometry {\n  using polygon = vector< point >;\n  using\
    \ polygons = vector< polygon >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4 \"src/line.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n// line \nnamespace geometry\
    \ {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 2 \"src/product.hpp\"\n\nusing namespace std;\n\n#line 6 \"src/product.hpp\"\
    \n\n// product\nnamespace geometry {\n    real_number cross(const point &a, const\
    \ point &b) {\n        return a.real() * b.imag() - a.imag() * b.real();\n   \
    \ }\n\n    real_number dot(const point &a, const point &b) {\n        return a.real()\
    \ * b.real() + a.imag() * b.imag();\n    }\n}\n#line 9 \"src/convex_cut.hpp\"\n\
    \n// convex cut\nnamespace geometry {\n  polygon convex_cut(const polygon &poly,\
    \ const line &l) {\n    polygon res;\n    int n = poly.size();\n    for (int i\
    \ = 0; i < n; ++i) {\n      int j = (i + 1 == n ? 0 : i + 1);\n\n      real_number\
    \ cf = cross(l.a - poly[i], l.b - poly[i]);\n      real_number cs = cross(l.a\
    \ - poly[j], l.b - poly[j]);\n\n      if (sign(cf) >= 0) res.emplace_back(poly[i]);\n\
    \      if (sign(cf) * sign(cs) < 0) {\n        real_number s = cross(poly[j] -\
    \ poly[i], l.a - l.b);\n        real_number t = cross(l.a - poly[i], l.a - l.b);\n\
    \        res.emplace_back(poly[i] + t / s * (poly[j] - poly[i]));\n      }\n \
    \   }\n\n    return res;\n  }\n}\n"
  code: "#pragma once\n\nusing namespace std;\n\n#include \"./base.hpp\"\n#include\
    \ \"./polygon.hpp\"\n#include \"./line.hpp\"\n#include \"./product.hpp\"\n\n//\
    \ convex cut\nnamespace geometry {\n  polygon convex_cut(const polygon &poly,\
    \ const line &l) {\n    polygon res;\n    int n = poly.size();\n    for (int i\
    \ = 0; i < n; ++i) {\n      int j = (i + 1 == n ? 0 : i + 1);\n\n      real_number\
    \ cf = cross(l.a - poly[i], l.b - poly[i]);\n      real_number cs = cross(l.a\
    \ - poly[j], l.b - poly[j]);\n\n      if (sign(cf) >= 0) res.emplace_back(poly[i]);\n\
    \      if (sign(cf) * sign(cs) < 0) {\n        real_number s = cross(poly[j] -\
    \ poly[i], l.a - l.b);\n        real_number t = cross(l.a - poly[i], l.a - l.b);\n\
    \        res.emplace_back(poly[i] + t / s * (poly[j] - poly[i]));\n      }\n \
    \   }\n\n    return res;\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/polygon.hpp
  - src/point.hpp
  - src/line.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/convex_cut.hpp
  requiredBy: []
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_C.test.cpp
documentation_of: src/convex_cut.hpp
layout: document
redirect_from:
- /library/src/convex_cut.hpp
- /library/src/convex_cut.hpp.html
title: src/convex_cut.hpp
---