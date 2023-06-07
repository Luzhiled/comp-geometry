---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/vector.hpp
    title: src/real-geometry/class/vector.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/common-area-circle-polygon.hpp
    title: src/real-geometry/area/common-area-circle-polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/inscribed-circle.hpp
    title: src/real-geometry/circle-lib/inscribed-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/is-convex.hpp
    title: src/real-geometry/convex/is-convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/cross-point/cross-point-cl.hpp
    title: src/real-geometry/cross-point/cross-point-cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-lp.hpp
    title: src/real-geometry/distance/distance-lp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-sp.hpp
    title: src/real-geometry/distance/distance-sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-ss.hpp
    title: src/real-geometry/distance/distance-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/projection.hpp
    title: src/real-geometry/mapping/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/reflection.hpp
    title: src/real-geometry/mapping/reflection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/ccw.hpp
    title: src/real-geometry/operation/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/intersect-ss.hpp
    title: src/real-geometry/position/intersect-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/is-orthogonal.hpp
    title: src/real-geometry/position/is-orthogonal.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/point-polygon-positional-relationships.hpp
    title: src/real-geometry/position/point-polygon-positional-relationships.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_A.test.cpp
    title: test/aoj/cgl/1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_B.test.cpp
    title: test/aoj/cgl/1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_C.test.cpp
    title: test/aoj/cgl/1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_A.test.cpp
    title: test/aoj/cgl/2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_B.test.cpp
    title: test/aoj/cgl/2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_C.test.cpp
    title: test/aoj/cgl/3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2003.test.cpp
    title: test/aoj/icpc/2003.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/atcoder/abc181_f.test.cpp
    title: test/atcoder/abc181_f.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/operation/inner-product.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/class/vector.hpp\"\n\n#include <complex>\n#include <iostream>\n\
    \nnamespace geometry {\n\n  template< typename R >\n  class vec2d : public std::complex<\
    \ R > {\n    using complex = std::complex< R >;\n\n   public:\n    using complex::complex;\n\
    \n    vec2d(const complex &c): complex::complex(c) {}\n\n    const R x() const\
    \ { return this->real(); }\n    const R y() const { return this->imag(); }\n\n\
    \    friend vec2d operator*(const vec2d &v, const R &k) {\n      return vec2d(v.x()\
    \ * k, v.y() * k);\n    }\n\n    friend vec2d operator*(const R &k, const vec2d\
    \ &v) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n    friend std::istream\
    \ &operator>>(std::istream &is, vec2d &v) {\n      R x, y;\n      is >> x >> y;\n\
    \      v = vec2d(x, y);\n      return is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/operation/inner-product.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R inner_product(const\
    \ vec2d<R> &a, const vec2d<R> &b) {\n    return a.x() * b.x() + a.y() * b.y();\n\
    \  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/vector.hpp\"\n\nnamespace\
    \ geometry {\n\n  template< typename R >\n  R inner_product(const vec2d<R> &a,\
    \ const vec2d<R> &b) {\n    return a.x() * b.x() + a.y() * b.y();\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/vector.hpp
  isVerificationFile: false
  path: src/real-geometry/operation/inner-product.hpp
  requiredBy:
  - src/real-geometry/mapping/reflection.hpp
  - src/real-geometry/mapping/projection.hpp
  - src/real-geometry/circle-lib/inscribed-circle.hpp
  - src/real-geometry/cross-point/cross-point-cl.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/intersect-ss.hpp
  - src/real-geometry/position/point-polygon-positional-relationships.hpp
  - src/real-geometry/position/is-orthogonal.hpp
  - src/real-geometry/distance/distance-ss.hpp
  - src/real-geometry/distance/distance-sp.hpp
  - src/real-geometry/distance/distance-lp.hpp
  - src/real-geometry/convex/is-convex.hpp
  - src/real-geometry/operation/ccw.hpp
  timestamp: '2023-05-30 15:21:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/1_A.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/2_A.test.cpp
  - test/aoj/cgl/1_B.test.cpp
  - test/aoj/cgl/3_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/1_C.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/atcoder/abc181_f.test.cpp
documentation_of: src/real-geometry/operation/inner-product.hpp
layout: document
redirect_from:
- /library/src/real-geometry/operation/inner-product.hpp
- /library/src/real-geometry/operation/inner-product.hpp.html
title: src/real-geometry/operation/inner-product.hpp
---
