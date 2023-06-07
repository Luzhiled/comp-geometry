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
    path: test/aoj/cgl/2_C.test.cpp
    title: test/aoj/cgl/2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2003.test.cpp
    title: test/aoj/icpc/2003.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/cross-point/cross-point-ll.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/class/line.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ b.y());\n  }\n\n}\n#line 5 \"src/real-geometry/class/line.hpp\"\n\n#include\
    \ <cassert>\n#line 8 \"src/real-geometry/class/line.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  class line {\n    using P = point<R>;\n\n \
    \  public:\n    P a, b;\n\n    line() = default;\n    line(P a, P b) : a(a), b(b)\
    \ {\n      assert(not equals(a, b));\n    }\n\n  };\n\n  template< typename R\
    \ >\n  using lines = std::vector< line<R> >;\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 6 \"src/real-geometry/cross-point/cross-point-ll.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  point<R> cross_point_ll(const\
    \ line<R> &l1, const line<R> &l2) {\n    R a = cross_product<R>(l1.b - l1.a, l2.b\
    \ - l2.a);\n    R b = cross_product<R>(l1.b - l1.a, l1.b - l2.a);\n    if (equals<R>(a,\
    \ 0) && equals<R>(b, 0)) return l2.a;\n    return l2.a + (l2.b - l2.a) * b / a;\n\
    \  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/line.hpp\"\n#include \"\
    src/real-geometry/operation/cross-product.hpp\"\n#include \"src/real-geometry/utility/equals/real-number.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  point<R> cross_point_ll(const\
    \ line<R> &l1, const line<R> &l2) {\n    R a = cross_product<R>(l1.b - l1.a, l2.b\
    \ - l2.a);\n    R b = cross_product<R>(l1.b - l1.a, l1.b - l2.a);\n    if (equals<R>(a,\
    \ 0) && equals<R>(b, 0)) return l2.a;\n    return l2.a + (l2.b - l2.a) * b / a;\n\
    \  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/line.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/utility/equals/vector.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/operation/cross-product.hpp
  isVerificationFile: false
  path: src/real-geometry/cross-point/cross-point-ll.hpp
  requiredBy: []
  timestamp: '2023-05-31 10:25:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/cgl/2_C.test.cpp
documentation_of: src/real-geometry/cross-point/cross-point-ll.hpp
layout: document
redirect_from:
- /library/src/real-geometry/cross-point/cross-point-ll.hpp
- /library/src/real-geometry/cross-point/cross-point-ll.hpp.html
title: src/real-geometry/cross-point/cross-point-ll.hpp
---
