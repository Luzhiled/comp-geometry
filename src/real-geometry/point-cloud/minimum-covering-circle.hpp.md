---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/circumscribed-circle.hpp
    title: src/real-geometry/circle-lib/circumscribed-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/circle.hpp
    title: src/real-geometry/class/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/point.hpp
    title: src/real-geometry/class/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/vector.hpp
    title: src/real-geometry/class/vector.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/const/eps.hpp
    title: src/real-geometry/common/const/eps.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/float-alias.hpp
    title: src/real-geometry/common/float-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/int-alias.hpp
    title: src/real-geometry/common/int-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/in-circle.hpp
    title: src/real-geometry/position/in-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/3034.test.cpp
    title: test/aoj/icpc/3034.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/atcoder/abc151_f.test.cpp
    title: test/atcoder/abc151_f.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/point-cloud/minimum-covering-circle.hpp\"\
    \n\n#line 2 \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/class/circle.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
    \n\n#line 2 \"src/real-geometry/class/vector.hpp\"\n\n#include <complex>\n#include\
    \ <iostream>\n\nnamespace geometry {\n\n  template< typename R >\n  class vec2d\
    \ : public std::complex< R > {\n    using complex = std::complex< R >;\n\n   public:\n\
    \    using complex::complex;\n\n    vec2d(const complex &c): complex::complex(c)\
    \ {}\n\n    const R x() const { return this->real(); }\n    const R y() const\
    \ { return this->imag(); }\n\n    friend vec2d operator*(const vec2d &v, const\
    \ R &k) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n    friend vec2d\
    \ operator*(const R &k, const vec2d &v) {\n      return vec2d(v.x() * k, v.y()\
    \ * k);\n    }\n\n    friend std::istream &operator>>(std::istream &is, vec2d\
    \ &v) {\n      R x, y;\n      is >> x >> y;\n      v = vec2d(x, y);\n      return\
    \ is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/class/point.hpp\"\n\n\
    #include <vector>\n\nnamespace geometry {\n\n  template< typename R >\n  using\
    \ point = vec2d<R>;\n\n  template< typename R >\n  using points = std::vector<\
    \ point< R > >;\n\n}\n#line 4 \"src/real-geometry/class/circle.hpp\"\n\n#line\
    \ 6 \"src/real-geometry/class/circle.hpp\"\n\n// circle\nnamespace geometry {\n\
    \n  template< typename R >\n  class circle {\n   public:\n    point<R> o;\n  \
    \  R r;\n\n    circle() = default;\n    circle(point<R> o, R r) : o(o), r(r) {}\n\
    \n    const point<R> center() const {\n      return o;\n    }\n\n    const R radius()\
    \ const {\n      return r;\n    }\n  };\n\n\n  template< typename R >\n  using\
    \ circles = std::vector< circle<R> >;\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 6 \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  circle<R> circumscribed_circle(const\
    \ point<R> &a, const point<R> &b, const point<R> &c) {\n    R A = std::norm(b\
    \ - c), B = std::norm(c - a), C = std::norm(a - b);\n\n    R S = std::norm(cross_product<R>(b\
    \ - a, c - a));\n    R T = A + B + C;\n\n    point<R> o{(A*(T - 2*A) * a + B*(T\
    \ - 2*B) * b + C*(T - 2*C) * c) / (4 * S)};\n\n    return circle(o, std::abs(o\
    \ - a));\n  }\n\n}\n#line 2 \"src/real-geometry/position/in-circle.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/utility/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\
    \n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\n\nnamespace geometry\
    \ {\n\n  using f80 = long double;\n  using f64 = double;\n\n}\n#line 4 \"src/real-geometry/common/const/eps.hpp\"\
    \n\nnamespace geometry {\n\n  inline static f80 &eps() {\n    static f80 EPS =\
    \ 1e-10;\n    return EPS;\n  }\n\n  void set_eps(f80 EPS) {\n    eps() = EPS;\n\
    \  }\n\n}\n#line 2 \"src/real-geometry/numbers/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/int-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using i32 = int;\n  using i64 = long long;\n\n}\n\
    #line 4 \"src/real-geometry/numbers/sign.hpp\"\n\nnamespace geometry::number::sign\
    \ {\n\n  constexpr i32 PLUS  = +1;\n  constexpr i32 ZERO  =  0;\n  constexpr i32\
    \ MINUS = -1;\n\n}\n#line 5 \"src/real-geometry/utility/sign.hpp\"\n\nnamespace\
    \ geometry {\n\n  using namespace geometry::number::sign;\n\n  template< typename\
    \ R >\n  inline int sign(R r) {\n    if (r < -eps()) return MINUS;\n    if (r\
    \ > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 6 \"src/real-geometry/position/in-circle.hpp\"\
    \n\n#line 8 \"src/real-geometry/position/in-circle.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  bool in_circle(const circle<R> &c, const point<R>\
    \ &p) {\n    return sign(std::abs(c.o - p) - c.r) == -1;\n  }\n\n}\n#line 7 \"\
    src/real-geometry/point-cloud/minimum-covering-circle.hpp\"\n\n#include <random>\n\
    #include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n  circle<R>\
    \ minimum_covering_circle(points<R> pts, unsigned int seed) {\n    auto make_circle\
    \ = [](const point<R> &a, const point<R> &b) {\n      return circle<R>(point<R>(a\
    \ + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n    if (n\
    \ == 1) return circle<R>(pts[0], 0);\n\n    std::mt19937 engine(seed);\n    std::shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle<R> res(point<R>(), -1);\n\n    for (int i =\
    \ 0; i < n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle<R>(pts[i],\
    \ 0);\n\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n\n        for (int k\
    \ = 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n      \
    \    res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n\
    \    }\n\n    return res;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\
    \n#include \"src/real-geometry/class/circle.hpp\"\n#include \"src/real-geometry/class/point.hpp\"\
    \n#include \"src/real-geometry/position/in-circle.hpp\"\n\n#include <random>\n\
    #include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n  circle<R>\
    \ minimum_covering_circle(points<R> pts, unsigned int seed) {\n    auto make_circle\
    \ = [](const point<R> &a, const point<R> &b) {\n      return circle<R>(point<R>(a\
    \ + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n    if (n\
    \ == 1) return circle<R>(pts[0], 0);\n\n    std::mt19937 engine(seed);\n    std::shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle<R> res(point<R>(), -1);\n\n    for (int i =\
    \ 0; i < n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle<R>(pts[i],\
    \ 0);\n\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n\n        for (int k\
    \ = 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n      \
    \    res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n\
    \    }\n\n    return res;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/circle-lib/circumscribed-circle.hpp
  - src/real-geometry/class/circle.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/position/in-circle.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/point-cloud/minimum-covering-circle.hpp
  requiredBy: []
  timestamp: '2023-06-05 11:21:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/3034.test.cpp
  - test/atcoder/abc151_f.test.cpp
documentation_of: src/real-geometry/point-cloud/minimum-covering-circle.hpp
layout: document
redirect_from:
- /library/src/real-geometry/point-cloud/minimum-covering-circle.hpp
- /library/src/real-geometry/point-cloud/minimum-covering-circle.hpp.html
title: src/real-geometry/point-cloud/minimum-covering-circle.hpp
---