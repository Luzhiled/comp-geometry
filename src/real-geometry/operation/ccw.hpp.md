---
data:
  _extendedDependsOn:
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
    path: src/real-geometry/numbers/ccw.hpp
    title: src/real-geometry/numbers/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/inner-product.hpp
    title: src/real-geometry/operation/inner-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
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
    path: src/real-geometry/distance/distance-sp.hpp
    title: src/real-geometry/distance/distance-sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-ss.hpp
    title: src/real-geometry/distance/distance-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/intersect-ss.hpp
    title: src/real-geometry/position/intersect-ss.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_C.test.cpp
    title: test/aoj/cgl/1_C.test.cpp
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
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
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
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/operation/ccw.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ point< R > >;\n\n}\n#line 2 \"src/real-geometry/numbers/ccw.hpp\"\n\nnamespace\
    \ geometry::number::ccw {\n\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr\
    \ int CLOCKWISE         = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n\
    \  constexpr int ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT\
    \        =  0; // a-c-b\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 2 \"src/real-geometry/operation/inner-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/inner-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R inner_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.x() + a.y() * b.y();\n  }\n\n}\n#line 2 \"src/real-geometry/utility/sign.hpp\"\
    \n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using f80 = long double;\n  using f64 = double;\n\
    \n}\n#line 4 \"src/real-geometry/common/const/eps.hpp\"\n\nnamespace geometry\
    \ {\n\n  inline static f80 &eps() {\n    static f80 EPS = 1e-10;\n    return EPS;\n\
    \  }\n\n  void set_eps(f80 EPS) {\n    eps() = EPS;\n  }\n\n}\n#line 2 \"src/real-geometry/numbers/sign.hpp\"\
    \n\n#line 2 \"src/real-geometry/common/int-alias.hpp\"\n\nnamespace geometry {\n\
    \n  using i32 = int;\n  using i64 = long long;\n\n}\n#line 4 \"src/real-geometry/numbers/sign.hpp\"\
    \n\nnamespace geometry::number::sign {\n\n  constexpr i32 PLUS  = +1;\n  constexpr\
    \ i32 ZERO  =  0;\n  constexpr i32 MINUS = -1;\n\n}\n#line 5 \"src/real-geometry/utility/sign.hpp\"\
    \n\nnamespace geometry {\n\n  using namespace geometry::number::sign;\n\n  template<\
    \ typename R >\n  inline int sign(R r) {\n    if (r < -eps()) return MINUS;\n\
    \    if (r > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 8 \"src/real-geometry/operation/ccw.hpp\"\
    \n\nnamespace geometry {\n\n  using namespace geometry::number::ccw;\n\n  template<\
    \ typename R >\n  int ccw(const point<R> &a, point<R> b, point<R> c) {\n    b\
    \ = b - a, c = c - a;\n    if (sign(cross_product(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross_product(b, c)) == -1) return CLOCKWISE;\n    if (sign(inner_product(b,\
    \ c)) == -1) return ONLINE_BACK;\n    if (std::norm(b) < std::norm(c)) return\
    \ ONLINE_FRONT;\n    return ON_SEGMENT;\n  }\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n#include\
    \ \"src/real-geometry/numbers/ccw.hpp\"\n#include \"src/real-geometry/operation/cross-product.hpp\"\
    \n#include \"src/real-geometry/operation/inner-product.hpp\"\n#include \"src/real-geometry/utility/sign.hpp\"\
    \n\nnamespace geometry {\n\n  using namespace geometry::number::ccw;\n\n  template<\
    \ typename R >\n  int ccw(const point<R> &a, point<R> b, point<R> c) {\n    b\
    \ = b - a, c = c - a;\n    if (sign(cross_product(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross_product(b, c)) == -1) return CLOCKWISE;\n    if (sign(inner_product(b,\
    \ c)) == -1) return ONLINE_BACK;\n    if (std::norm(b) < std::norm(c)) return\
    \ ONLINE_FRONT;\n    return ON_SEGMENT;\n  }\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/numbers/ccw.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/operation/inner-product.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/operation/ccw.hpp
  requiredBy:
  - src/real-geometry/circle-lib/inscribed-circle.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/intersect-ss.hpp
  - src/real-geometry/distance/distance-ss.hpp
  - src/real-geometry/distance/distance-sp.hpp
  - src/real-geometry/convex/is-convex.hpp
  timestamp: '2023-05-30 15:46:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/1_C.test.cpp
  - test/aoj/cgl/7_B.test.cpp
documentation_of: src/real-geometry/operation/ccw.hpp
layout: document
redirect_from:
- /library/src/real-geometry/operation/ccw.hpp
- /library/src/real-geometry/operation/ccw.hpp.html
title: src/real-geometry/operation/ccw.hpp
---