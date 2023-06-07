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
    path: src/real-geometry/common/size-alias.hpp
    title: src/real-geometry/common/size-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/compare/compare-x.hpp
    title: src/real-geometry/compare/compare-x.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/compare/compare-y.hpp
    title: src/real-geometry/compare/compare-y.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/real-number.hpp
    title: src/real-geometry/utility/equals/real-number.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/5_A.test.cpp
    title: test/aoj/cgl/5_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/point-cloud/closest-pair.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/class/point.hpp\"\n\n#line 2 \"src/real-geometry/class/vector.hpp\"\
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
    \ point< R > >;\n\n}\n#line 2 \"src/real-geometry/compare/compare-x.hpp\"\n\n\
    #line 2 \"src/real-geometry/utility/equals/real-number.hpp\"\n\n#line 2 \"src/real-geometry/utility/sign.hpp\"\
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
    \    if (r > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 4 \"src/real-geometry/utility/equals/real-number.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool equals(R a, R b)\
    \ {\n    return sign(a - b) == 0;\n  }\n\n}\n#line 5 \"src/real-geometry/compare/compare-x.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool compare_x(const point<R>\
    \ &a, const point<R> &b) {\n    return not equals(a.x(), b.x()) ? a.x() < b.x()\
    \ : a.y() < b.y();\n  }\n\n}\n#line 2 \"src/real-geometry/compare/compare-y.hpp\"\
    \n\n#line 5 \"src/real-geometry/compare/compare-y.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  bool compare_y(const point<R> &a, const point<R>\
    \ &b) {\n    return not equals(a.y(), b.y()) ? a.y() < b.y() : a.x() < b.x();\n\
    \  }\n\n}\n#line 2 \"src/real-geometry/common/size-alias.hpp\"\n\n#include <cstddef>\n\
    \nnamespace geometry {\n\n  using isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\
    \n}\n#line 8 \"src/real-geometry/point-cloud/closest-pair.hpp\"\n\n#include <algorithm>\n\
    #include <cmath>\n#line 12 \"src/real-geometry/point-cloud/closest-pair.hpp\"\n\
    #include <iterator>\n#include <limits>\n#include <utility>\n\nnamespace geometry::internal\
    \ {\n\n  template< typename R >\n  using closest_pair_result_t = std::pair< R,\
    \ std::pair<point<R>, point<R> > >;\n\n  // WARNING: pts are sorted by y after\
    \ calling this function\n  template< typename R >\n  closest_pair_result_t<R>\
    \ impl_closest_pair(points<R> &pts, usize l, usize r) {\n    constexpr R inf =\
    \ std::numeric_limits< R >::infinity();\n    using result_t = closest_pair_result_t<R>;\n\
    \n    auto comp = [](const result_t &lhs, const result_t &rhs) {\n      return\
    \ lhs.first < rhs.first;\n    };\n\n    if (r - l <= 1) {\n      return {inf,\
    \ {}};\n    }\n\n    usize m = (l + r) / 2;\n    R x = pts[m].x();\n    result_t\
    \ result = std::min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r),\
    \ comp);\n\n    auto f = pts.begin();\n    std::inplace_merge(f + l, f + m, f\
    \ + r, compare_y<R>);\n\n    points<R> ps;\n    for (usize i = l; i < r; i++)\
    \ {\n      if (sign(std::abs(pts[i].x() - x) - result.first) >= 0) continue;\n\
    \n      for (usize j = 0; j < ps.size(); j++) {\n        R dy = pts[i].y() - (*std::next(ps.rbegin(),\
    \ j)).y();\n        if (sign(dy - result.first) >= 0) break;\n\n        auto &u\
    \ = pts[i];\n        auto &v = *std::next(ps.rbegin(), j);\n        result = std::min(result,\
    \ {std::abs(u - v), std::make_pair(u, v)}, comp);\n      }\n\n      ps.emplace_back(pts[i]);\n\
    \    }\n\n    return result;\n  }\n\n}\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  internal::closest_pair_result_t<R> closest_pair(points<R> pts)\
    \ {\n    constexpr R inf = std::numeric_limits< R >::infinity();\n    if (pts.size()\
    \ <= 1) {\n      return {inf, {}};\n    }\n\n    std::sort(pts.begin(), pts.end(),\
    \ compare_x<R>);\n\n    return internal::impl_closest_pair(pts, 0, pts.size());\n\
    \  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n#include\
    \ \"src/real-geometry/compare/compare-x.hpp\"\n#include \"src/real-geometry/compare/compare-y.hpp\"\
    \n#include \"src/real-geometry/common/size-alias.hpp\"\n#include \"src/real-geometry/utility/sign.hpp\"\
    \n\n#include <algorithm>\n#include <cmath>\n#include <complex>\n#include <iterator>\n\
    #include <limits>\n#include <utility>\n\nnamespace geometry::internal {\n\n  template<\
    \ typename R >\n  using closest_pair_result_t = std::pair< R, std::pair<point<R>,\
    \ point<R> > >;\n\n  // WARNING: pts are sorted by y after calling this function\n\
    \  template< typename R >\n  closest_pair_result_t<R> impl_closest_pair(points<R>\
    \ &pts, usize l, usize r) {\n    constexpr R inf = std::numeric_limits< R >::infinity();\n\
    \    using result_t = closest_pair_result_t<R>;\n\n    auto comp = [](const result_t\
    \ &lhs, const result_t &rhs) {\n      return lhs.first < rhs.first;\n    };\n\n\
    \    if (r - l <= 1) {\n      return {inf, {}};\n    }\n\n    usize m = (l + r)\
    \ / 2;\n    R x = pts[m].x();\n    result_t result = std::min(impl_closest_pair(pts,\
    \ l, m), impl_closest_pair(pts, m, r), comp);\n\n    auto f = pts.begin();\n \
    \   std::inplace_merge(f + l, f + m, f + r, compare_y<R>);\n\n    points<R> ps;\n\
    \    for (usize i = l; i < r; i++) {\n      if (sign(std::abs(pts[i].x() - x)\
    \ - result.first) >= 0) continue;\n\n      for (usize j = 0; j < ps.size(); j++)\
    \ {\n        R dy = pts[i].y() - (*std::next(ps.rbegin(), j)).y();\n        if\
    \ (sign(dy - result.first) >= 0) break;\n\n        auto &u = pts[i];\n       \
    \ auto &v = *std::next(ps.rbegin(), j);\n        result = std::min(result, {std::abs(u\
    \ - v), std::make_pair(u, v)}, comp);\n      }\n\n      ps.emplace_back(pts[i]);\n\
    \    }\n\n    return result;\n  }\n\n}\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  internal::closest_pair_result_t<R> closest_pair(points<R> pts)\
    \ {\n    constexpr R inf = std::numeric_limits< R >::infinity();\n    if (pts.size()\
    \ <= 1) {\n      return {inf, {}};\n    }\n\n    std::sort(pts.begin(), pts.end(),\
    \ compare_x<R>);\n\n    return internal::impl_closest_pair(pts, 0, pts.size());\n\
    \  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/compare/compare-x.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/compare/compare-y.hpp
  - src/real-geometry/common/size-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/point-cloud/closest-pair.hpp
  requiredBy: []
  timestamp: '2023-05-31 20:02:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/5_A.test.cpp
documentation_of: src/real-geometry/point-cloud/closest-pair.hpp
layout: document
redirect_from:
- /library/src/real-geometry/point-cloud/closest-pair.hpp
- /library/src/real-geometry/point-cloud/closest-pair.hpp.html
title: src/real-geometry/point-cloud/closest-pair.hpp
---
