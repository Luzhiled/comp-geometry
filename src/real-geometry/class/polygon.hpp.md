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
    path: src/real-geometry/area/common-area-circle-polygon.hpp
    title: src/real-geometry/area/common-area-circle-polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/polygon-area.hpp
    title: src/real-geometry/area/polygon-area.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/convex-cut.hpp
    title: src/real-geometry/convex/convex-cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/convex-diameter.hpp
    title: src/real-geometry/convex/convex-diameter.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/is-convex.hpp
    title: src/real-geometry/convex/is-convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/point-cloud/convex-hull-with-index.hpp
    title: src/real-geometry/point-cloud/convex-hull-with-index.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/point-cloud/convex-hull.hpp
    title: src/real-geometry/point-cloud/convex-hull.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/point-polygon-positional-relationships.hpp
    title: src/real-geometry/position/point-polygon-positional-relationships.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/polygon-to-segments.hpp
    title: src/real-geometry/utility/polygon-to-segments.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_A.test.cpp
    title: test/aoj/cgl/3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_C.test.cpp
    title: test/aoj/cgl/3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2003.test.cpp
    title: test/aoj/icpc/2003.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/class/polygon.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ R >\n  using polygons = std::vector< polygon<R> >;\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n\n#include\
    \ <vector>\n\nnamespace geometry {\n\n  template< typename R >\n  using polygon\
    \ = std::vector< point<R> >;\n\n  template< typename R >\n  using polygons = std::vector<\
    \ polygon<R> >;\n\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  isVerificationFile: false
  path: src/real-geometry/class/polygon.hpp
  requiredBy:
  - src/real-geometry/point-cloud/convex-hull.hpp
  - src/real-geometry/point-cloud/convex-hull-with-index.hpp
  - src/real-geometry/utility/polygon-to-segments.hpp
  - src/real-geometry/area/polygon-area.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/point-polygon-positional-relationships.hpp
  - src/real-geometry/convex/convex-diameter.hpp
  - src/real-geometry/convex/is-convex.hpp
  - src/real-geometry/convex/convex-cut.hpp
  timestamp: '2023-05-30 15:21:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/3_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
documentation_of: src/real-geometry/class/polygon.hpp
layout: document
redirect_from:
- /library/src/real-geometry/class/polygon.hpp
- /library/src/real-geometry/class/polygon.hpp.html
title: src/real-geometry/class/polygon.hpp
---
