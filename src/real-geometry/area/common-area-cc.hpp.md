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
    path: src/real-geometry/common/const/eps.hpp
    title: src/real-geometry/common/const/eps.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/const/pi.hpp
    title: src/real-geometry/common/const/pi.hpp
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
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_I.test.cpp
    title: test/aoj/cgl/7_I.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/area/common-area-cc.hpp\"\n\n#line 2 \"\
    src/real-geometry/common/const/pi.hpp\"\n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using f80 = long double;\n  using f64 = double;\n\
    \n}\n#line 4 \"src/real-geometry/common/const/pi.hpp\"\n\n#include <cmath>\n\n\
    namespace geometry {\n\n  static f80 pi() {\n    static const f80 PI = acosl(-1);\
    \ // no need `std::`. (?)\n    return PI;\n  }\n\n}\n#line 2 \"src/real-geometry/class/circle.hpp\"\
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
    \ point< R > >;\n\n}\n#line 4 \"src/real-geometry/class/circle.hpp\"\n\n#line\
    \ 6 \"src/real-geometry/class/circle.hpp\"\n\n// circle\nnamespace geometry {\n\
    \n  template< typename R >\n  class circle {\n   public:\n    point<R> o;\n  \
    \  R r;\n\n    circle() = default;\n    circle(point<R> o, R r) : o(o), r(r) {}\n\
    \n    const point<R> center() const {\n      return o;\n    }\n\n    const R radius()\
    \ const {\n      return r;\n    }\n  };\n\n\n  template< typename R >\n  using\
    \ circles = std::vector< circle<R> >;\n\n}\n#line 2 \"src/real-geometry/utility/sign.hpp\"\
    \n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\n\n#line 4 \"src/real-geometry/common/const/eps.hpp\"\
    \n\nnamespace geometry {\n\n  inline static f80 &eps() {\n    static f80 EPS =\
    \ 1e-10;\n    return EPS;\n  }\n\n  void set_eps(f80 EPS) {\n    eps() = EPS;\n\
    \  }\n\n}\n#line 2 \"src/real-geometry/numbers/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/int-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using i32 = int;\n  using i64 = long long;\n\n}\n\
    #line 4 \"src/real-geometry/numbers/sign.hpp\"\n\nnamespace geometry::number::sign\
    \ {\n\n  constexpr i32 PLUS  = +1;\n  constexpr i32 ZERO  =  0;\n  constexpr i32\
    \ MINUS = -1;\n\n}\n#line 5 \"src/real-geometry/utility/sign.hpp\"\n\nnamespace\
    \ geometry {\n\n  using namespace geometry::number::sign;\n\n  template< typename\
    \ R >\n  inline int sign(R r) {\n    if (r < -eps()) return MINUS;\n    if (r\
    \ > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 7 \"src/real-geometry/area/common-area-cc.hpp\"\
    \n\n#line 9 \"src/real-geometry/area/common-area-cc.hpp\"\n#include <algorithm>\n\
    #line 11 \"src/real-geometry/area/common-area-cc.hpp\"\n\nnamespace geometry {\n\
    \n  template< typename R >\n  R common_area_cc(circle<R> a, circle<R> b) {\n \
    \   using std::norm;\n\n    if (a.r > b.r) std::swap(a, b);\n\n    R d = std::abs(a.o\
    \ - b.o);\n\n    if (sign(a.r + b.r - d) <= 0) return 0;\n    if (sign(d - (b.r\
    \ - a.r)) <= 0) return norm(a.r) * pi();\n\n    R res = 0;\n    for (int i = 0;\
    \ i < 2; ++i) {\n      R alpha = std::acos((norm(b.r) + norm(d) - norm(a.r)) /\
    \ (2 * b.r * d));\n\n      R s = alpha * norm(b.r);\n      R t = norm(b.r) * std::sin(alpha)\
    \ * std::cos(alpha);\n      res += s - t;\n\n      std::swap(a, b);\n    }\n\n\
    \    return res;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/const/pi.hpp\"\n#include\
    \ \"src/real-geometry/class/circle.hpp\"\n#include \"src/real-geometry/class/point.hpp\"\
    \n#include \"src/real-geometry/utility/sign.hpp\"\n\n#include <complex>\n#include\
    \ <algorithm>\n#include <cmath>\n\nnamespace geometry {\n\n  template< typename\
    \ R >\n  R common_area_cc(circle<R> a, circle<R> b) {\n    using std::norm;\n\n\
    \    if (a.r > b.r) std::swap(a, b);\n\n    R d = std::abs(a.o - b.o);\n\n   \
    \ if (sign(a.r + b.r - d) <= 0) return 0;\n    if (sign(d - (b.r - a.r)) <= 0)\
    \ return norm(a.r) * pi();\n\n    R res = 0;\n    for (int i = 0; i < 2; ++i)\
    \ {\n      R alpha = std::acos((norm(b.r) + norm(d) - norm(a.r)) / (2 * b.r *\
    \ d));\n\n      R s = alpha * norm(b.r);\n      R t = norm(b.r) * std::sin(alpha)\
    \ * std::cos(alpha);\n      res += s - t;\n\n      std::swap(a, b);\n    }\n\n\
    \    return res;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/const/pi.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/class/circle.hpp
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/area/common-area-cc.hpp
  requiredBy: []
  timestamp: '2023-06-01 02:56:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/7_I.test.cpp
documentation_of: src/real-geometry/area/common-area-cc.hpp
layout: document
redirect_from:
- /library/src/real-geometry/area/common-area-cc.hpp
- /library/src/real-geometry/area/common-area-cc.hpp.html
title: src/real-geometry/area/common-area-cc.hpp
---