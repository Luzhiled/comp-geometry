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
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/real-number.hpp
    title: src/real-geometry/utility/equals/real-number.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/vector.hpp
    title: src/real-geometry/utility/equals/vector.hpp
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
    path: src/real-geometry/circle-lib/tangent-cc.hpp
    title: src/real-geometry/circle-lib/tangent-cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/convex-cut.hpp
    title: src/real-geometry/convex/convex-cut.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/cross-point/cross-point-cl.hpp
    title: src/real-geometry/cross-point/cross-point-cl.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/cross-point/cross-point-ll.hpp
    title: src/real-geometry/cross-point/cross-point-ll.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-lp.hpp
    title: src/real-geometry/distance/distance-lp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-sp.hpp
    title: src/real-geometry/distance/distance-sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-ss.hpp
    title: src/real-geometry/distance/distance-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/projection.hpp
    title: src/real-geometry/mapping/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/reflection.hpp
    title: src/real-geometry/mapping/reflection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/is-orthogonal.hpp
    title: src/real-geometry/position/is-orthogonal.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/is-parallel.hpp
    title: src/real-geometry/position/is-parallel.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_A.test.cpp
    title: test/aoj/cgl/1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_B.test.cpp
    title: test/aoj/cgl/1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_A.test.cpp
    title: test/aoj/cgl/2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_C.test.cpp
    title: test/aoj/cgl/2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
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
    path: test/aoj/icpc/2442.test.cpp
    title: test/aoj/icpc/2442.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/atcoder/abc181_f.test.cpp
    title: test/atcoder/abc181_f.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/class/line.hpp\"\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
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
    \ >\n  using lines = std::vector< line<R> >;\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n#include\
    \ \"src/real-geometry/utility/equals/vector.hpp\"\n\n#include <cassert>\n#include\
    \ <vector>\n\nnamespace geometry {\n\n  template< typename R >\n  class line {\n\
    \    using P = point<R>;\n\n   public:\n    P a, b;\n\n    line() = default;\n\
    \    line(P a, P b) : a(a), b(b) {\n      assert(not equals(a, b));\n    }\n\n\
    \  };\n\n  template< typename R >\n  using lines = std::vector< line<R> >;\n\n\
    }\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/utility/equals/vector.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/class/line.hpp
  requiredBy:
  - src/real-geometry/mapping/reflection.hpp
  - src/real-geometry/mapping/projection.hpp
  - src/real-geometry/circle-lib/tangent-cc.hpp
  - src/real-geometry/circle-lib/inscribed-circle.hpp
  - src/real-geometry/cross-point/cross-point-ll.hpp
  - src/real-geometry/cross-point/cross-point-cl.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/is-parallel.hpp
  - src/real-geometry/position/is-orthogonal.hpp
  - src/real-geometry/distance/distance-ss.hpp
  - src/real-geometry/distance/distance-sp.hpp
  - src/real-geometry/distance/distance-lp.hpp
  - src/real-geometry/convex/convex-cut.hpp
  timestamp: '2023-05-30 15:46:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2442.test.cpp
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/1_A.test.cpp
  - test/aoj/cgl/2_C.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/2_A.test.cpp
  - test/aoj/cgl/1_B.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/atcoder/abc181_f.test.cpp
documentation_of: src/real-geometry/class/line.hpp
layout: document
redirect_from:
- /library/src/real-geometry/class/line.hpp
- /library/src/real-geometry/class/line.hpp.html
title: src/real-geometry/class/line.hpp
---
