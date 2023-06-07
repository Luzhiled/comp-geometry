---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/point.hpp
    title: src/real-geometry/class/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/vector.hpp
    title: src/real-geometry/class/vector.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/common-area-cc.hpp
    title: src/real-geometry/area/common-area-cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/common-area-circle-polygon.hpp
    title: src/real-geometry/area/common-area-circle-polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/circumscribed-circle.hpp
    title: src/real-geometry/circle-lib/circumscribed-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/inscribed-circle.hpp
    title: src/real-geometry/circle-lib/inscribed-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/tangent-cc.hpp
    title: src/real-geometry/circle-lib/tangent-cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/tangent-cp.hpp
    title: src/real-geometry/circle-lib/tangent-cp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/cross-point/cross-point-cc.hpp
    title: src/real-geometry/cross-point/cross-point-cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/cross-point/cross-point-cl.hpp
    title: src/real-geometry/cross-point/cross-point-cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/point-cloud/minimum-covering-circle.hpp
    title: src/real-geometry/point-cloud/minimum-covering-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/in-circle.hpp
    title: src/real-geometry/position/in-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/intersect-cc.hpp
    title: src/real-geometry/position/intersect-cc.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_A.test.cpp
    title: test/aoj/cgl/7_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_C.test.cpp
    title: test/aoj/cgl/7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_E.test.cpp
    title: test/aoj/cgl/7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_F.test.cpp
    title: test/aoj/cgl/7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_I.test.cpp
    title: test/aoj/cgl/7_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/1175.test.cpp
    title: test/aoj/icpc/1175.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
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
  bundledCode: "#line 2 \"src/real-geometry/class/circle.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ circles = std::vector< circle<R> >;\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n\n#include\
    \ <vector>\n\n// circle\nnamespace geometry {\n\n  template< typename R >\n  class\
    \ circle {\n   public:\n    point<R> o;\n    R r;\n\n    circle() = default;\n\
    \    circle(point<R> o, R r) : o(o), r(r) {}\n\n    const point<R> center() const\
    \ {\n      return o;\n    }\n\n    const R radius() const {\n      return r;\n\
    \    }\n  };\n\n\n  template< typename R >\n  using circles = std::vector< circle<R>\
    \ >;\n\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  isVerificationFile: false
  path: src/real-geometry/class/circle.hpp
  requiredBy:
  - src/real-geometry/point-cloud/minimum-covering-circle.hpp
  - src/real-geometry/circle-lib/tangent-cc.hpp
  - src/real-geometry/circle-lib/circumscribed-circle.hpp
  - src/real-geometry/circle-lib/tangent-cp.hpp
  - src/real-geometry/circle-lib/inscribed-circle.hpp
  - src/real-geometry/cross-point/cross-point-cl.hpp
  - src/real-geometry/cross-point/cross-point-cc.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/area/common-area-cc.hpp
  - src/real-geometry/position/intersect-cc.hpp
  - src/real-geometry/position/in-circle.hpp
  timestamp: '2023-06-01 01:39:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/1175.test.cpp
  - test/aoj/icpc/3034.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/7_I.test.cpp
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/aoj/cgl/7_A.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/atcoder/abc151_f.test.cpp
documentation_of: src/real-geometry/class/circle.hpp
layout: document
redirect_from:
- /library/src/real-geometry/class/circle.hpp
- /library/src/real-geometry/class/circle.hpp.html
title: src/real-geometry/class/circle.hpp
---
