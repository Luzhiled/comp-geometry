---
data:
  _extendedDependsOn:
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
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/point-cloud/minimum-covering-circle.hpp
    title: src/real-geometry/point-cloud/minimum-covering-circle.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_C.test.cpp
    title: test/aoj/cgl/7_C.test.cpp
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
  bundledCode: "#line 2 \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\n\
    \n#line 2 \"src/real-geometry/class/circle.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ - a));\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/circle.hpp\"\n#include\
    \ \"src/real-geometry/class/point.hpp\"\n#include \"src/real-geometry/operation/cross-product.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  circle<R> circumscribed_circle(const\
    \ point<R> &a, const point<R> &b, const point<R> &c) {\n    R A = std::norm(b\
    \ - c), B = std::norm(c - a), C = std::norm(a - b);\n\n    R S = std::norm(cross_product<R>(b\
    \ - a, c - a));\n    R T = A + B + C;\n\n    point<R> o{(A*(T - 2*A) * a + B*(T\
    \ - 2*B) * b + C*(T - 2*C) * c) / (4 * S)};\n\n    return circle(o, std::abs(o\
    \ - a));\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/circle.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/operation/cross-product.hpp
  isVerificationFile: false
  path: src/real-geometry/circle-lib/circumscribed-circle.hpp
  requiredBy:
  - src/real-geometry/point-cloud/minimum-covering-circle.hpp
  timestamp: '2023-06-01 01:57:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/3034.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/atcoder/abc151_f.test.cpp
documentation_of: src/real-geometry/circle-lib/circumscribed-circle.hpp
layout: document
redirect_from:
- /library/src/real-geometry/circle-lib/circumscribed-circle.hpp
- /library/src/real-geometry/circle-lib/circumscribed-circle.hpp.html
title: src/real-geometry/circle-lib/circumscribed-circle.hpp
---
