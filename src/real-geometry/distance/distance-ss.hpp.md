---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/line.hpp
    title: src/real-geometry/class/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/point.hpp
    title: src/real-geometry/class/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/segment.hpp
    title: src/real-geometry/class/segment.hpp
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
    path: src/real-geometry/distance/distance-sp.hpp
    title: src/real-geometry/distance/distance-sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/projection.hpp
    title: src/real-geometry/mapping/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/ccw.hpp
    title: src/real-geometry/numbers/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/ccw.hpp
    title: src/real-geometry/operation/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/cross-product.hpp
    title: src/real-geometry/operation/cross-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/inner-product.hpp
    title: src/real-geometry/operation/inner-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/intersect-ss.hpp
    title: src/real-geometry/position/intersect-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/real-number.hpp
    title: src/real-geometry/utility/equals/real-number.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/vector.hpp
    title: src/real-geometry/utility/equals/vector.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/distance/distance-ss.hpp\"\n\n#line 2\
    \ \"src/real-geometry/class/segment.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ point< R > >;\n\n}\n#line 2 \"src/real-geometry/utility/equals/vector.hpp\"\n\
    \n#line 2 \"src/real-geometry/utility/equals/real-number.hpp\"\n\n#line 2 \"src/real-geometry/utility/sign.hpp\"\
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
    \ {\n    return sign(a - b) == 0;\n  }\n\n}\n#line 5 \"src/real-geometry/utility/equals/vector.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool equals(const vec2d<R>\
    \ &a, const vec2d<R> &b) {\n    return equals(a.x(), b.x()) and equals(a.y(),\
    \ b.y());\n  }\n\n}\n#line 5 \"src/real-geometry/class/segment.hpp\"\n\n#include\
    \ <cassert>\n#line 8 \"src/real-geometry/class/segment.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  class segment {\n   public:\n    point<R> a,\
    \ b;\n\n    segment() = default;\n    segment(point<R> a, point<R> b) : a(a),\
    \ b(b) {\n      assert(not equals(a, b));\n    }\n\n  };\n\n  template< typename\
    \ R >\n  using segments = std::vector< segment<R> >;\n\n}\n#line 2 \"src/real-geometry/distance/distance-sp.hpp\"\
    \n\n#line 2 \"src/real-geometry/mapping/projection.hpp\"\n\n#line 2 \"src/real-geometry/class/line.hpp\"\
    \n\n#line 5 \"src/real-geometry/class/line.hpp\"\n\n#line 8 \"src/real-geometry/class/line.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  class line {\n    using\
    \ P = point<R>;\n\n   public:\n    P a, b;\n\n    line() = default;\n    line(P\
    \ a, P b) : a(a), b(b) {\n      assert(not equals(a, b));\n    }\n\n  };\n\n \
    \ template< typename R >\n  using lines = std::vector< line<R> >;\n\n}\n#line\
    \ 2 \"src/real-geometry/operation/inner-product.hpp\"\n\n#line 4 \"src/real-geometry/operation/inner-product.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R inner_product(const\
    \ vec2d<R> &a, const vec2d<R> &b) {\n    return a.x() * b.x() + a.y() * b.y();\n\
    \  }\n\n}\n#line 6 \"src/real-geometry/mapping/projection.hpp\"\n\n#line 8 \"\
    src/real-geometry/mapping/projection.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  point<R> projection(const line<R> &l, const point<R> &p) {\n\
    \    R t = inner_product<R>(p - l.a, l.a - l.b) / std::norm(l.a - l.b);\n    return\
    \ l.a + (l.a - l.b) * t;\n  }\n\n}\n#line 2 \"src/real-geometry/operation/ccw.hpp\"\
    \n\n#line 2 \"src/real-geometry/numbers/ccw.hpp\"\n\nnamespace geometry::number::ccw\
    \ {\n\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr int CLOCKWISE    \
    \     = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n  constexpr int\
    \ ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT        =  0; //\
    \ a-c-b\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\n\n#line\
    \ 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry {\n\
    \n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 8 \"src/real-geometry/operation/ccw.hpp\"\
    \n\nnamespace geometry {\n\n  using namespace geometry::number::ccw;\n\n  template<\
    \ typename R >\n  int ccw(const point<R> &a, point<R> b, point<R> c) {\n    b\
    \ = b - a, c = c - a;\n    if (sign(cross_product(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross_product(b, c)) == -1) return CLOCKWISE;\n    if (sign(inner_product(b,\
    \ c)) == -1) return ONLINE_BACK;\n    if (std::norm(b) < std::norm(c)) return\
    \ ONLINE_FRONT;\n    return ON_SEGMENT;\n  }\n}\n#line 7 \"src/real-geometry/distance/distance-sp.hpp\"\
    \n\n#line 9 \"src/real-geometry/distance/distance-sp.hpp\"\n#include <algorithm>\n\
    \nnamespace geometry {\n\n  template< typename R >\n  R distance_sp(const segment<R>\
    \ &s, const point<R> &p) {\n    point<R> pr = projection({s.a, s.b}, p);\n   \
    \ if (ccw(s.a, s.b, pr) == 0) return std::abs(pr - p);\n    return std::min(std::abs(s.a\
    \ - p), std::abs(s.b - p));\n  }\n\n}\n#line 2 \"src/real-geometry/position/intersect-ss.hpp\"\
    \n\n#line 5 \"src/real-geometry/position/intersect-ss.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  bool intersect_ss(const segment<R> &s1, const\
    \ segment<R> &s2) {\n    return ccw(s1.a, s1.b, s2.a) * ccw(s1.a, s1.b, s2.b)\
    \ <= 0 and\n           ccw(s2.a, s2.b, s1.a) * ccw(s2.a, s2.b, s1.b) <= 0;\n \
    \ }\n\n}\n#line 6 \"src/real-geometry/distance/distance-ss.hpp\"\n\n#line 8 \"\
    src/real-geometry/distance/distance-ss.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  R distance_ss(const segment<R> &s1, const segment<R> &s2) {\n\
    \    if (intersect_ss(s1, s2)) return 0;\n    R r1 = distance_sp(s1, s2.a);\n\
    \    R r2 = distance_sp(s1, s2.b);\n    R r3 = distance_sp(s2, s1.a);\n    R r4\
    \ = distance_sp(s2, s1.b);\n    return std::min({r1, r2, r3, r4});\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/segment.hpp\"\n#include\
    \ \"src/real-geometry/distance/distance-sp.hpp\"\n#include \"src/real-geometry/position/intersect-ss.hpp\"\
    \n\n#include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n\
    \  R distance_ss(const segment<R> &s1, const segment<R> &s2) {\n    if (intersect_ss(s1,\
    \ s2)) return 0;\n    R r1 = distance_sp(s1, s2.a);\n    R r2 = distance_sp(s1,\
    \ s2.b);\n    R r3 = distance_sp(s2, s1.a);\n    R r4 = distance_sp(s2, s1.b);\n\
    \    return std::min({r1, r2, r3, r4});\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/segment.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/utility/equals/vector.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/distance/distance-sp.hpp
  - src/real-geometry/mapping/projection.hpp
  - src/real-geometry/class/line.hpp
  - src/real-geometry/operation/inner-product.hpp
  - src/real-geometry/operation/ccw.hpp
  - src/real-geometry/numbers/ccw.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/position/intersect-ss.hpp
  isVerificationFile: false
  path: src/real-geometry/distance/distance-ss.hpp
  requiredBy: []
  timestamp: '2023-05-31 10:25:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/2_D.test.cpp
documentation_of: src/real-geometry/distance/distance-ss.hpp
layout: document
redirect_from:
- /library/src/real-geometry/distance/distance-ss.hpp
- /library/src/real-geometry/distance/distance-ss.hpp.html
title: src/real-geometry/distance/distance-ss.hpp
---
