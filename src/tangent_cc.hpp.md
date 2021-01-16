---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':question:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':question:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':question:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/tangent_cc.hpp\"\n\n#include <algorithm>\n#include <cmath>\n\
    #include <complex>\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\n\n\
    // base\nnamespace geometry {\n  using namespace std;\n  using real_number = long\
    \ double;\n\n  const real_number PI = acosl(-1);\n\n  inline static real_number\
    \ &eps() {\n    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static\
    \ void set_eps(real_number EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number\
    \ r) {\n    set_eps(1e-10);\n    if (r < -eps()) return -1;\n    if (r > +eps())\
    \ return +1;\n    return 0;\n  }\n\n  inline bool equals(real_number r1, real_number\
    \ r2) {\n    return sign(r1 - r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n\
    #line 4 \"src/point.hpp\"\n#include <vector>\n#line 6 \"src/point.hpp\"\n#include\
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
    \ equals(a.real(), b.real()) and equals(a.imag(), b.imag());\n  }\n}\n#line 2\
    \ \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\n\n#line 6 \"src/circle.hpp\"\
    \n\n// circle\nnamespace geometry {\n  struct circle {\n    point p;\n    real_number\
    \ r;\n    circle() {}\n    circle(point p, real_number r) : p(p), r(r) {}\n  };\n\
    \n  using circles = vector< circle >;\n}\n#line 2 \"src/line.hpp\"\n\n#line 4\
    \ \"src/line.hpp\"\n\n#line 6 \"src/line.hpp\"\n\n// line \nnamespace geometry\
    \ {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 11 \"src/tangent_cc.hpp\"\n\nnamespace geometry {\n  lines tangent_cc(circle\
    \ c1, circle c2) {\n    lines ls;\n    if (c1.r > c2.r) swap(c1, c2);\n\n    real_number\
    \ g = norm(c1.p - c2.p);\n    if (sign(g) == 0) return ls;\n\n    point u = (c1.p\
    \ - c2.p) / sqrt(g);\n    point v(-u.imag(), u.real());\n\n    for (int s = 1;\
    \ s >= -1; s -= 2) {\n      real_number h = (c1.r * s + c2.r) / sqrt(g);\n   \
    \   if (sign(1 - norm(h)) == 0) {\n        ls.emplace_back(c2.p + u * c2.r, c2.p\
    \ + (u + v) * c2.r);\n      } else if (sign(1 - norm(h)) > 0) {\n        point\
    \ uu = u * h;\n        point vv = v * sqrt(1 - norm(h));\n        ls.emplace_back(c2.p\
    \ + (uu + vv) * c2.r, c1.p - (uu + vv) * c1.r * s);\n        ls.emplace_back(c2.p\
    \ + (uu - vv) * c2.r, c1.p - (uu - vv) * c1.r * s);\n      }\n    }\n\n    return\
    \ ls;\n  }\n}\n"
  code: "#pragma once\n\n#include <algorithm>\n#include <cmath>\n#include <complex>\n\
    \n#include \"./base.hpp\"\n#include \"./point.hpp\"\n#include \"./circle.hpp\"\
    \n#include \"./line.hpp\"\n\nnamespace geometry {\n  lines tangent_cc(circle c1,\
    \ circle c2) {\n    lines ls;\n    if (c1.r > c2.r) swap(c1, c2);\n\n    real_number\
    \ g = norm(c1.p - c2.p);\n    if (sign(g) == 0) return ls;\n\n    point u = (c1.p\
    \ - c2.p) / sqrt(g);\n    point v(-u.imag(), u.real());\n\n    for (int s = 1;\
    \ s >= -1; s -= 2) {\n      real_number h = (c1.r * s + c2.r) / sqrt(g);\n   \
    \   if (sign(1 - norm(h)) == 0) {\n        ls.emplace_back(c2.p + u * c2.r, c2.p\
    \ + (u + v) * c2.r);\n      } else if (sign(1 - norm(h)) > 0) {\n        point\
    \ uu = u * h;\n        point vv = v * sqrt(1 - norm(h));\n        ls.emplace_back(c2.p\
    \ + (uu + vv) * c2.r, c1.p - (uu + vv) * c1.r * s);\n        ls.emplace_back(c2.p\
    \ + (uu - vv) * c2.r, c1.p - (uu - vv) * c1.r * s);\n      }\n    }\n\n    return\
    \ ls;\n  }\n}\n"
  dependsOn:
  - src/base.hpp
  - src/point.hpp
  - src/circle.hpp
  - src/line.hpp
  isVerificationFile: false
  path: src/tangent_cc.hpp
  requiredBy: []
  timestamp: '2021-01-16 13:51:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_G.test.cpp
documentation_of: src/tangent_cc.hpp
layout: document
redirect_from:
- /library/src/tangent_cc.hpp
- /library/src/tangent_cc.hpp.html
title: src/tangent_cc.hpp
---
