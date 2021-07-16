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
    path: test/atcoder/abc181_f.test.cpp
    title: test/atcoder/abc181_f.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/base.hpp\"\n\n#include <cmath>\n\n// base\nnamespace\
    \ geometry {\n  using namespace std;\n  using real_number = long double;\n\n \
    \ const real_number PI = acosl(-1);\n\n  inline static real_number &eps() {\n\
    \    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number\
    \ EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/line.hpp\"\n\n#include <vector>\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#include <complex>\n#line 6 \"src/point.hpp\"\n#include\
    \ <istream>\n#include <ostream>\n\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace\
    \ geometry {\n  using point = complex< real_number >;\n  using points = vector<\
    \ point >;\n\n  istream &operator>>(istream &is, point &p) {\n    real_number\
    \ x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream\
    \ &operator<<(ostream &os, const point &p) {\n    return os << p.real() << \"\
    \ \" << p.imag();\n  }\n\n  point operator*(const point &p, const real_number\
    \ &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point rotate(const\
    \ real_number &theta, const point &p) {\n    return point(cos(theta) * p.real()\
    \ + sin(-theta) * p.imag(),\n                 sin(theta) * p.real() + cos(-theta)\
    \ * p.imag());\n  }\n\n  bool equals(const point &a, const point &b) {\n    return\
    \ equals(a.real(), b.real()) and equals(a.imag(), b.imag());\n  }\n}\n#line 6\
    \ \"src/line.hpp\"\n\n// line \nnamespace geometry {\n  struct line {\n    point\
    \ a, b;\n\n    line() = default;\n    line(point a, point b) : a(a), b(b) {}\n\
    \  };\n\n  using lines = vector< line >;\n}\n#line 2 \"src/projection.hpp\"\n\n\
    #line 4 \"src/projection.hpp\"\n\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \n\n// product\nnamespace geometry {\n  real_number cross(const point &a, const\
    \ point &b) {\n    return a.real() * b.imag() - a.imag() * b.real();\n  }\n\n\
    \  real_number dot(const point &a, const point &b) {\n    return a.real() * b.real()\
    \ + a.imag() * b.imag();\n  }\n}\n#line 9 \"src/projection.hpp\"\n\n// projection\n\
    namespace geometry {\n  point projection(const line &l, const point &p) {\n  \
    \  real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n    return l.a\
    \ + (l.a - l.b) * t;\n  }\n}\n#line 5 \"src/distance_lp.hpp\"\n\nnamespace geometry\
    \ {\n  real_number distance_lp(const line &l, const point &p) {\n    point pr\
    \ = projection(l, p);\n    return abs(pr - p);\n  }\n}\n"
  code: "#include \"./base.hpp\"\n#include \"./line.hpp\"\n#include \"./point.hpp\"\
    \n#include \"./projection.hpp\"\n\nnamespace geometry {\n  real_number distance_lp(const\
    \ line &l, const point &p) {\n    point pr = projection(l, p);\n    return abs(pr\
    \ - p);\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/line.hpp
  - src/point.hpp
  - src/projection.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/distance_lp.hpp
  requiredBy: []
  timestamp: '2021-04-13 11:19:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/atcoder/abc181_f.test.cpp
documentation_of: src/distance_lp.hpp
layout: document
redirect_from:
- /library/src/distance_lp.hpp
- /library/src/distance_lp.hpp.html
title: src/distance_lp.hpp
---
