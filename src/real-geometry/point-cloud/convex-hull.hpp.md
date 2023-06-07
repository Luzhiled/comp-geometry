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
    path: src/real-geometry/compare/compare-x.hpp
    title: src/real-geometry/compare/compare-x.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/real-number.hpp
    title: src/real-geometry/utility/equals/real-number.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/point-cloud/convex-hull.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/common/size-alias.hpp\"\n\n#include <cstddef>\n\nnamespace\
    \ geometry {\n\n  using isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\
    \n}\n#line 2 \"src/real-geometry/class/point.hpp\"\n\n#line 2 \"src/real-geometry/class/vector.hpp\"\
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
    \ >;\n\n}\n#line 2 \"src/real-geometry/compare/compare-x.hpp\"\n\n#line 2 \"src/real-geometry/utility/equals/real-number.hpp\"\
    \n\n#line 2 \"src/real-geometry/utility/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\
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
    \ > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 4 \"src/real-geometry/utility/equals/real-number.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool equals(R a, R b)\
    \ {\n    return sign(a - b) == 0;\n  }\n\n}\n#line 5 \"src/real-geometry/compare/compare-x.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool compare_x(const point<R>\
    \ &a, const point<R> &b) {\n    return not equals(a.x(), b.x()) ? a.x() < b.x()\
    \ : a.y() < b.y();\n  }\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 8 \"src/real-geometry/point-cloud/convex-hull.hpp\"\
    \n\n#include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n\
    \  polygon<R> convex_hull(points<R> pts) {\n    usize n = pts.size(), k = 0;\n\
    \    if (n <= 2) return pts;\n\n    std::sort(pts.begin(), pts.end(), compare_x<R>);\n\
    \    polygon<R> res(2 * n);\n\n    auto check = [&](usize i) {\n      return sign(cross_product<R>(res[k\
    \ - 1] - res[k - 2], pts[i] - res[k - 1])) == -1;\n    };\n\n    for (usize i\
    \ = 0; i < n; res[k++] = pts[i++]) {\n      while (k >= 2 and check(i)) --k;\n\
    \    }\n\n    usize t = k + 1;\n    for (isize i = n - 2; i >= 0; res[k++] = pts[i--])\
    \ {\n      while (k >= t and check(i)) --k;\n    }\n\n    res.resize(k - 1);\n\
    \    return res;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/size-alias.hpp\"\n#include\
    \ \"src/real-geometry/class/point.hpp\"\n#include \"src/real-geometry/class/polygon.hpp\"\
    \n#include \"src/real-geometry/compare/compare-x.hpp\"\n#include \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n\
    \  polygon<R> convex_hull(points<R> pts) {\n    usize n = pts.size(), k = 0;\n\
    \    if (n <= 2) return pts;\n\n    std::sort(pts.begin(), pts.end(), compare_x<R>);\n\
    \    polygon<R> res(2 * n);\n\n    auto check = [&](usize i) {\n      return sign(cross_product<R>(res[k\
    \ - 1] - res[k - 2], pts[i] - res[k - 1])) == -1;\n    };\n\n    for (usize i\
    \ = 0; i < n; res[k++] = pts[i++]) {\n      while (k >= 2 and check(i)) --k;\n\
    \    }\n\n    usize t = k + 1;\n    for (isize i = n - 2; i >= 0; res[k++] = pts[i--])\
    \ {\n      while (k >= t and check(i)) --k;\n    }\n\n    res.resize(k - 1);\n\
    \    return res;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/size-alias.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/class/polygon.hpp
  - src/real-geometry/compare/compare-x.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/operation/cross-product.hpp
  isVerificationFile: false
  path: src/real-geometry/point-cloud/convex-hull.hpp
  requiredBy: []
  timestamp: '2023-05-31 11:43:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_A.test.cpp
documentation_of: src/real-geometry/point-cloud/convex-hull.hpp
layout: document
redirect_from:
- /library/src/real-geometry/point-cloud/convex-hull.hpp
- /library/src/real-geometry/point-cloud/convex-hull.hpp.html
title: src/real-geometry/point-cloud/convex-hull.hpp
---
