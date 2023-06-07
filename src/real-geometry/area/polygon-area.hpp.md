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
    path: src/real-geometry/common/size-alias.hpp
    title: src/real-geometry/common/size-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/next-idx.hpp
    title: src/real-geometry/utility/next-idx.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_A.test.cpp
    title: test/aoj/cgl/3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/area/polygon-area.hpp\"\n\n#line 2 \"\
    src/real-geometry/common/size-alias.hpp\"\n\n#include <cstddef>\n\nnamespace geometry\
    \ {\n\n  using isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n}\n#line\
    \ 2 \"src/real-geometry/class/polygon.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ point< R > >;\n\n}\n#line 4 \"src/real-geometry/class/polygon.hpp\"\n\n#line\
    \ 6 \"src/real-geometry/class/polygon.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  using polygon = std::vector< point<R> >;\n\n  template< typename\
    \ R >\n  using polygons = std::vector< polygon<R> >;\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 2 \"src/real-geometry/utility/next-idx.hpp\"\
    \n\n#line 4 \"src/real-geometry/utility/next-idx.hpp\"\n\nnamespace geometry {\n\
    \n  inline usize next_idx(usize idx, usize size) {\n    return idx + 1 == size\
    \ ? 0 : idx + 1;\n  }\n\n}\n#line 7 \"src/real-geometry/area/polygon-area.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R polygon_area(const polygon<R>\
    \ &poly) {\n    usize n = poly.size();\n\n    R res = 0;\n    for (usize i = 0;\
    \ i < n; ++i) {\n      res += cross_product(poly[i], poly[next_idx(i, n)]);\n\
    \    }\n    return res / 2;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/size-alias.hpp\"\n#include\
    \ \"src/real-geometry/class/polygon.hpp\"\n#include \"src/real-geometry/operation/cross-product.hpp\"\
    \n#include \"src/real-geometry/utility/next-idx.hpp\"\n\nnamespace geometry {\n\
    \n  template< typename R >\n  R polygon_area(const polygon<R> &poly) {\n    usize\
    \ n = poly.size();\n\n    R res = 0;\n    for (usize i = 0; i < n; ++i) {\n  \
    \    res += cross_product(poly[i], poly[next_idx(i, n)]);\n    }\n    return res\
    \ / 2;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/size-alias.hpp
  - src/real-geometry/class/polygon.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/utility/next-idx.hpp
  isVerificationFile: false
  path: src/real-geometry/area/polygon-area.hpp
  requiredBy: []
  timestamp: '2023-05-30 15:21:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/4_C.test.cpp
documentation_of: src/real-geometry/area/polygon-area.hpp
layout: document
redirect_from:
- /library/src/real-geometry/area/polygon-area.hpp
- /library/src/real-geometry/area/polygon-area.hpp.html
title: src/real-geometry/area/polygon-area.hpp
---
