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
    path: src/circumscribed_circle.hpp
    title: src/circumscribed_circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/in_circle.hpp
    title: src/in_circle.hpp
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
    path: test/aoj/icpc/3034.test.cpp
    title: test/aoj/icpc/3034.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/minimum_covering_circle.hpp\"\n\n#include <random>\n\
    #include <algorithm>\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#include\
    \ <vector>\n#include <cmath>\n#include <istream>\n#include <ostream>\n\n#line\
    \ 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\n\n// base\nnamespace geometry\
    \ {\n  using namespace std;\n  using real_number = long double;\n\n  const real_number\
    \ PI = acosl(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool\
    \ equals(const point &a, const point &b) {\n    return equals(a.real(), b.real())\
    \ and equals(a.imag(), b.imag());\n  }\n}\n#line 2 \"src/circle.hpp\"\n\n#line\
    \ 4 \"src/circle.hpp\"\n\n#line 6 \"src/circle.hpp\"\n\n// circle\nnamespace geometry\
    \ {\n  struct circle {\n    point p;\n    real_number r;\n    circle() {}\n  \
    \  circle(point p, real_number r) : p(p), r(r) {}\n  };\n\n  using circles = vector<\
    \ circle >;\n}\n#line 2 \"src/in_circle.hpp\"\n\n#line 5 \"src/in_circle.hpp\"\
    \n\nnamespace geometry {\n  bool in_circle(const circle &c, const point &p) {\n\
    \    return sign(abs(c.p - p) - c.r) == -1;\n  }\n}\n#line 2 \"src/circumscribed_circle.hpp\"\
    \n\n#line 2 \"src/line.hpp\"\n\n#line 4 \"src/line.hpp\"\n\n#line 6 \"src/line.hpp\"\
    \n\n// line \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line()\
    \ = default;\n    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines\
    \ = vector< line >;\n}\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \n\n// product\nnamespace geometry {\n  real_number cross(const point &a, const\
    \ point &b) {\n    return a.real() * b.imag() - a.imag() * b.real();\n  }\n\n\
    \  real_number dot(const point &a, const point &b) {\n    return a.real() * b.real()\
    \ + a.imag() * b.imag();\n  }\n}\n#line 8 \"src/circumscribed_circle.hpp\"\n\n\
    namespace geometry {\n  circle circumscribed_circle(const point &a, const point\
    \ &b, const point &c) {\n    real_number A = norm(b - c), B = norm(c - a), C =\
    \ norm(a - b);\n    real_number S = norm(cross(b - a, c - a)), T = A + B + C;\n\
    \    point p = (A*(T - 2*A) * a + B*(T - 2*B) * b + C*(T - 2*C) * c) / (4 * S);\n\
    \    return circle(p, abs(p - a));\n  }\n}\n#line 10 \"src/minimum_covering_circle.hpp\"\
    \n\nnamespace geometry {\n  circle minimum_covering_circle(points pts, unsigned\
    \ int seed) {\n    auto make_circle = [](const point &a, const point &b) {\n \
    \     return circle((a + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n\
    \    if (n == 1) return circle(pts[0], 0);\n    mt19937 engine(seed);\n    shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle res(point(), -1);\n\n    for (int i = 0; i <\
    \ n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle(pts[i],\
    \ 0);\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n        for (int k =\
    \ 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n        \
    \  res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n \
    \   }\n    return res;\n  }\n}\n"
  code: "#pragma once\n\n#include <random>\n#include <algorithm>\n\n#include \"./point.hpp\"\
    \n#include \"./circle.hpp\"\n#include \"./in_circle.hpp\"\n#include \"./circumscribed_circle.hpp\"\
    \n\nnamespace geometry {\n  circle minimum_covering_circle(points pts, unsigned\
    \ int seed) {\n    auto make_circle = [](const point &a, const point &b) {\n \
    \     return circle((a + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n\
    \    if (n == 1) return circle(pts[0], 0);\n    mt19937 engine(seed);\n    shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle res(point(), -1);\n\n    for (int i = 0; i <\
    \ n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle(pts[i],\
    \ 0);\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n        for (int k =\
    \ 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n        \
    \  res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n \
    \   }\n    return res;\n  }\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  - src/circle.hpp
  - src/in_circle.hpp
  - src/circumscribed_circle.hpp
  - src/line.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/minimum_covering_circle.hpp
  requiredBy: []
  timestamp: '2021-01-16 18:41:44+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/3034.test.cpp
documentation_of: src/minimum_covering_circle.hpp
layout: document
redirect_from:
- /library/src/minimum_covering_circle.hpp
- /library/src/minimum_covering_circle.hpp.html
title: src/minimum_covering_circle.hpp
---
