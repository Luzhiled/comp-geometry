---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/point.hpp
    title: src/real-geometry/class/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/polygon.hpp
    title: src/real-geometry/class/polygon.hpp
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
    path: src/real-geometry/common/size-alias.hpp
    title: src/real-geometry/common/size-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/posision-of-point-polygon.hpp
    title: src/real-geometry/numbers/posision-of-point-polygon.hpp
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
    path: src/real-geometry/utility/next-idx.hpp
    title: src/real-geometry/utility/next-idx.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_C.test.cpp
    title: test/aoj/cgl/3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/position/point-polygon-positional-relationships.hpp\"\
    \n\n#line 2 \"src/real-geometry/class/point.hpp\"\n\n#line 2 \"src/real-geometry/class/vector.hpp\"\
    \n\n#include <complex>\n#include <iostream>\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  class vec2d : public std::complex< R > {\n    using complex\
    \ = std::complex< R >;\n\n   public:\n    using complex::complex;\n\n    vec2d(const\
    \ complex &c): complex::complex(c) {}\n\n    const R x() const { return this->real();\
    \ }\n    const R y() const { return this->imag(); }\n\n    friend vec2d operator*(const\
    \ vec2d &v, const R &k) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n\
    \    friend vec2d operator*(const R &k, const vec2d &v) {\n      return vec2d(v.x()\
    \ * k, v.y() * k);\n    }\n\n    friend std::istream &operator>>(std::istream\
    \ &is, vec2d &v) {\n      R x, y;\n      is >> x >> y;\n      v = vec2d(x, y);\n\
    \      return is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/class/point.hpp\"\
    \n\n#include <vector>\n\nnamespace geometry {\n\n  template< typename R >\n  using\
    \ point = vec2d<R>;\n\n  template< typename R >\n  using points = std::vector<\
    \ point< R > >;\n\n}\n#line 2 \"src/real-geometry/class/polygon.hpp\"\n\n#line\
    \ 4 \"src/real-geometry/class/polygon.hpp\"\n\n#line 6 \"src/real-geometry/class/polygon.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  using polygon = std::vector<\
    \ point<R> >;\n\n  template< typename R >\n  using polygons = std::vector< polygon<R>\
    \ >;\n\n}\n#line 2 \"src/real-geometry/numbers/posision-of-point-polygon.hpp\"\
    \n\nnamespace geometry::number::point_polygon_positional_relationships {\n\n \
    \ constexpr int OUT     = 0;\n  constexpr int ON_EDGE = 1;\n  constexpr int IN\
    \      = 2;\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\n\n\
    #line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 2 \"src/real-geometry/operation/inner-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/inner-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R inner_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.x() + a.y() * b.y();\n  }\n\n}\n#line 2 \"src/real-geometry/common/size-alias.hpp\"\
    \n\n#include <cstddef>\n\nnamespace geometry {\n\n  using isize = std::ptrdiff_t;\n\
    \  using usize = std::size_t;\n\n}\n#line 2 \"src/real-geometry/utility/next-idx.hpp\"\
    \n\n#line 4 \"src/real-geometry/utility/next-idx.hpp\"\n\nnamespace geometry {\n\
    \n  inline usize next_idx(usize idx, usize size) {\n    return idx + 1 == size\
    \ ? 0 : idx + 1;\n  }\n\n}\n#line 2 \"src/real-geometry/utility/sign.hpp\"\n\n\
    #line 2 \"src/real-geometry/common/const/eps.hpp\"\n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\
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
    \    if (r > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 11 \"src/real-geometry/position/point-polygon-positional-relationships.hpp\"\
    \n\n#include <algorithm>\n\nnamespace geometry {\n\n  // O(N)\n  template< typename\
    \ R >\n  int point_polygon_positional_relationships(const point<R> &p, const polygon<R>\
    \ &poly) {\n    using namespace number::point_polygon_positional_relationships;\n\
    \    usize n = poly.size();\n\n    bool in = false;\n    for (usize i = 0; i <\
    \ n; i++) {\n      usize j = next_idx(i, n);\n      point<R> a = poly[i] - p,\
    \ b = poly[j] - p;\n\n      if (a.y() > b.y()) std::swap(a, b);\n\n      if (a.y()\
    \ <= 0 and 0 < b.y() and cross_product(a, b) < 0) {\n        in = not in;\n  \
    \    }\n\n      if (sign(cross_product(a, b)) == 0 and sign(inner_product(a, b))\
    \ <= 0) {\n        return ON_EDGE;\n      }\n    }\n\n    return in ? IN : OUT;\n\
    \  }\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n#include\
    \ \"src/real-geometry/class/polygon.hpp\"\n#include \"src/real-geometry/numbers/posision-of-point-polygon.hpp\"\
    \n#include \"src/real-geometry/operation/cross-product.hpp\"\n#include \"src/real-geometry/operation/inner-product.hpp\"\
    \n#include \"src/real-geometry/common/size-alias.hpp\"\n#include \"src/real-geometry/utility/next-idx.hpp\"\
    \n#include \"src/real-geometry/utility/sign.hpp\"\n\n#include <algorithm>\n\n\
    namespace geometry {\n\n  // O(N)\n  template< typename R >\n  int point_polygon_positional_relationships(const\
    \ point<R> &p, const polygon<R> &poly) {\n    using namespace number::point_polygon_positional_relationships;\n\
    \    usize n = poly.size();\n\n    bool in = false;\n    for (usize i = 0; i <\
    \ n; i++) {\n      usize j = next_idx(i, n);\n      point<R> a = poly[i] - p,\
    \ b = poly[j] - p;\n\n      if (a.y() > b.y()) std::swap(a, b);\n\n      if (a.y()\
    \ <= 0 and 0 < b.y() and cross_product(a, b) < 0) {\n        in = not in;\n  \
    \    }\n\n      if (sign(cross_product(a, b)) == 0 and sign(inner_product(a, b))\
    \ <= 0) {\n        return ON_EDGE;\n      }\n    }\n\n    return in ? IN : OUT;\n\
    \  }\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/class/polygon.hpp
  - src/real-geometry/numbers/posision-of-point-polygon.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/operation/inner-product.hpp
  - src/real-geometry/common/size-alias.hpp
  - src/real-geometry/utility/next-idx.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/position/point-polygon-positional-relationships.hpp
  requiredBy: []
  timestamp: '2023-05-31 11:05:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/cgl/3_C.test.cpp
documentation_of: src/real-geometry/position/point-polygon-positional-relationships.hpp
layout: document
redirect_from:
- /library/src/real-geometry/position/point-polygon-positional-relationships.hpp
- /library/src/real-geometry/position/point-polygon-positional-relationships.hpp.html
title: src/real-geometry/position/point-polygon-positional-relationships.hpp
---
