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
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/convex_hull.hpp\"\n\n#include <tuple>\n#include <utility>\n\
    #include <vector>\n#include <numeric>\n#include <algorithm>\n\n#line 2 \"src/point.hpp\"\
    \n\n#include <complex>\n#line 5 \"src/point.hpp\"\n#include <cmath>\n#include\
    \ <istream>\n#include <ostream>\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\
    \n\n// base\nnamespace geometry {\n  using namespace std;\n  using real_number\
    \ = long double;\n\n  const real_number PI = acosl(-1);\n\n  inline static real_number\
    \ &eps() {\n    static real_number EPS = 1e-10;\n    return EPS;\n  }\n\n  static\
    \ void set_eps(real_number EPS) {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number\
    \ r) {\n    set_eps(1e-10);\n    if (r < -eps()) return -1;\n    if (r > +eps())\
    \ return +1;\n    return 0;\n  }\n\n  inline bool equals(real_number r1, real_number\
    \ r2) {\n    return sign(r1 - r2) == 0;\n  }\n}\n#line 10 \"src/point.hpp\"\n\n\
    // point\nnamespace geometry {\n  using point = complex< real_number >;\n  using\
    \ points = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n\
    \    real_number x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n\
    \  }\n\n  ostream &operator<<(ostream &os, const point &p) {\n    return os <<\
    \ p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const point &p, const\
    \ real_number &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point\
    \ rotate(const real_number &theta, const point &p) {\n    return point(cos(theta)\
    \ * p.real() + sin(-theta) * p.imag(),\n                 sin(theta) * p.real()\
    \ + cos(-theta) * p.imag());\n  }\n\n  bool equals(const point &a, const point\
    \ &b) {\n    return equals(a.real(), b.real()) and equals(a.imag(), b.imag());\n\
    \  }\n}\n#line 2 \"src/polygon.hpp\"\n\n#line 4 \"src/polygon.hpp\"\n\n#line 6\
    \ \"src/polygon.hpp\"\n\n// polygon\nnamespace geometry {\n  using polygon = vector<\
    \ point >;\n  using polygons = vector< polygon >;\n}\n#line 2 \"src/compare.hpp\"\
    \n\n#line 5 \"src/compare.hpp\"\n\nnamespace geometry {\n  bool compare_x(const\
    \ point &a, const point &b) {\n    return !equals(a.real(), b.real()) ? a.real()\
    \ < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const point &a, const\
    \ point &b) {\n    return !equals(a.imag(), b.imag()) ? a.imag() < b.imag() :\
    \ a.real() < b.real();\n  }\n}\n#line 2 \"src/product.hpp\"\n\n#line 5 \"src/product.hpp\"\
    \n\n// product\nnamespace geometry {\n  real_number cross(const point &a, const\
    \ point &b) {\n    return a.real() * b.imag() - a.imag() * b.real();\n  }\n\n\
    \  real_number dot(const point &a, const point &b) {\n    return a.real() * b.real()\
    \ + a.imag() * b.imag();\n  }\n}\n#line 13 \"src/convex_hull.hpp\"\n\n// convex_hull\n\
    namespace geometry {\n  pair< polygon, vector< int > > convex_hull_with_index(const\
    \ points &pts) {\n    int n = pts.size();\n    if (n <= 2) {\n      vector< int\
    \ > idxs(n);\n      iota(idxs.begin(), idxs.end(), 0);\n      return {pts, idxs};\n\
    \    }\n\n    vector< pair< point, int > > ps;\n    ps.reserve(n);\n    for (int\
    \ i = 0; i < n; i++) {\n      ps.emplace_back(pts[i], i);\n    }\n\n    auto extension_compare_x\
    \ = [](const pair<point, int> &a, const pair<point, int> &b) {\n      return compare_x(a.first,\
    \ b.first);\n    };\n    sort(ps.begin(), ps.end(), extension_compare_x);\n\n\
    \    vector< int > idxs(2 * n);\n    polygon poly(2 * n);\n    int k = 0, i =\
    \ 0;\n\n    auto check = [&](int i) {\n      return sign(cross(poly[k - 1] - poly[k\
    \ - 2], ps[i].first - poly[k - 1])) == -1;\n    };\n\n    while (i < n) {\n  \
    \    while (k >= 2 and check(i)) k--;\n\n      tie(poly[k], idxs[k]) = ps[i];\n\
    \      k++; i++;\n    }\n\n    i = n - 2;\n    int t = k + 1;\n    while (i >=\
    \ 0) {\n      while (k >= t and check(i)) k--;\n\n      tie(poly[k], idxs[k])\
    \ = ps[i];\n      k++; i--;\n    }\n\n    poly.resize(k - 1);\n    idxs.resize(k\
    \ - 1);\n    return {poly, idxs};\n  }\n\n  polygon convex_hull(points pts) {\n\
    \    int n = pts.size(), k = 0;\n    if (n <= 2) return pts;\n\n    sort(pts.begin(),\
    \ pts.end(), compare_x);\n    polygon res(2 * n);\n\n    auto check = [&](int\
    \ i) {\n      return sign(cross(res[k - 1] - res[k - 2], pts[i] - res[k - 1]))\
    \ == -1;\n    };\n\n    for (int i = 0; i < n; res[k++] = pts[i++]) {\n      while\
    \ (k >= 2 and check(i)) --k;\n    }\n\n    for (int i = n - 2, t = k + 1; i >=\
    \ 0; res[k++] = pts[i--]) {\n      while (k >= t and check(i)) --k;\n    }\n\n\
    \    res.resize(k - 1);\n    return res;\n  }\n}\n"
  code: "#pragma once\n\n#include <tuple>\n#include <utility>\n#include <vector>\n\
    #include <numeric>\n#include <algorithm>\n\n#include \"./point.hpp\"\n#include\
    \ \"./polygon.hpp\"\n#include \"./compare.hpp\"\n#include \"./product.hpp\"\n\n\
    // convex_hull\nnamespace geometry {\n  pair< polygon, vector< int > > convex_hull_with_index(const\
    \ points &pts) {\n    int n = pts.size();\n    if (n <= 2) {\n      vector< int\
    \ > idxs(n);\n      iota(idxs.begin(), idxs.end(), 0);\n      return {pts, idxs};\n\
    \    }\n\n    vector< pair< point, int > > ps;\n    ps.reserve(n);\n    for (int\
    \ i = 0; i < n; i++) {\n      ps.emplace_back(pts[i], i);\n    }\n\n    auto extension_compare_x\
    \ = [](const pair<point, int> &a, const pair<point, int> &b) {\n      return compare_x(a.first,\
    \ b.first);\n    };\n    sort(ps.begin(), ps.end(), extension_compare_x);\n\n\
    \    vector< int > idxs(2 * n);\n    polygon poly(2 * n);\n    int k = 0, i =\
    \ 0;\n\n    auto check = [&](int i) {\n      return sign(cross(poly[k - 1] - poly[k\
    \ - 2], ps[i].first - poly[k - 1])) == -1;\n    };\n\n    while (i < n) {\n  \
    \    while (k >= 2 and check(i)) k--;\n\n      tie(poly[k], idxs[k]) = ps[i];\n\
    \      k++; i++;\n    }\n\n    i = n - 2;\n    int t = k + 1;\n    while (i >=\
    \ 0) {\n      while (k >= t and check(i)) k--;\n\n      tie(poly[k], idxs[k])\
    \ = ps[i];\n      k++; i--;\n    }\n\n    poly.resize(k - 1);\n    idxs.resize(k\
    \ - 1);\n    return {poly, idxs};\n  }\n\n  polygon convex_hull(points pts) {\n\
    \    int n = pts.size(), k = 0;\n    if (n <= 2) return pts;\n\n    sort(pts.begin(),\
    \ pts.end(), compare_x);\n    polygon res(2 * n);\n\n    auto check = [&](int\
    \ i) {\n      return sign(cross(res[k - 1] - res[k - 2], pts[i] - res[k - 1]))\
    \ == -1;\n    };\n\n    for (int i = 0; i < n; res[k++] = pts[i++]) {\n      while\
    \ (k >= 2 and check(i)) --k;\n    }\n\n    for (int i = n - 2, t = k + 1; i >=\
    \ 0; res[k++] = pts[i--]) {\n      while (k >= t and check(i)) --k;\n    }\n\n\
    \    res.resize(k - 1);\n    return res;\n  }\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  - src/polygon.hpp
  - src/compare.hpp
  - src/product.hpp
  isVerificationFile: false
  path: src/convex_hull.hpp
  requiredBy: []
  timestamp: '2021-10-26 13:24:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/icpc/2950.test.cpp
documentation_of: src/convex_hull.hpp
layout: document
redirect_from:
- /library/src/convex_hull.hpp
- /library/src/convex_hull.hpp.html
title: src/convex_hull.hpp
---
