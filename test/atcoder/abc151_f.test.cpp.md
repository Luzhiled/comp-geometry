---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/circumscribed-circle.hpp
    title: src/real-geometry/circle-lib/circumscribed-circle.hpp
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
    path: src/real-geometry/point-cloud/minimum-covering-circle.hpp
    title: src/real-geometry/point-cloud/minimum-covering-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/in-circle.hpp
    title: src/real-geometry/position/in-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/io-set.hpp
    title: src/real-geometry/utility/io-set.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: 1e-6
    PROBLEM: https://atcoder.jp/contests/abc151/tasks/abc151_f
    links:
    - https://atcoder.jp/contests/abc151/tasks/abc151_f
  bundledCode: "#line 1 \"test/atcoder/abc151_f.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f\n// verification-helper:\
    \ ERROR 1e-6\n\n#include <iostream>\n#include <vector>\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
    \n\n#line 2 \"src/real-geometry/class/vector.hpp\"\n\n#include <complex>\n#line\
    \ 5 \"src/real-geometry/class/vector.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  class vec2d : public std::complex< R > {\n    using complex\
    \ = std::complex< R >;\n\n   public:\n    using complex::complex;\n\n    vec2d(const\
    \ complex &c): complex::complex(c) {}\n\n    const R x() const { return this->real();\
    \ }\n    const R y() const { return this->imag(); }\n\n    friend vec2d operator*(const\
    \ vec2d &v, const R &k) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n\
    \    friend vec2d operator*(const R &k, const vec2d &v) {\n      return vec2d(v.x()\
    \ * k, v.y() * k);\n    }\n\n    friend std::istream &operator>>(std::istream\
    \ &is, vec2d &v) {\n      R x, y;\n      is >> x >> y;\n      v = vec2d(x, y);\n\
    \      return is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/class/point.hpp\"\
    \n\n#line 6 \"src/real-geometry/class/point.hpp\"\n\nnamespace geometry {\n\n\
    \  template< typename R >\n  using point = vec2d<R>;\n\n  template< typename R\
    \ >\n  using points = std::vector< point< R > >;\n\n}\n#line 2 \"src/real-geometry/point-cloud/minimum-covering-circle.hpp\"\
    \n\n#line 2 \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/class/circle.hpp\"\n\n#line 4 \"src/real-geometry/class/circle.hpp\"\
    \n\n#line 6 \"src/real-geometry/class/circle.hpp\"\n\n// circle\nnamespace geometry\
    \ {\n\n  template< typename R >\n  class circle {\n   public:\n    point<R> o;\n\
    \    R r;\n\n    circle() = default;\n    circle(point<R> o, R r) : o(o), r(r)\
    \ {}\n\n    const point<R> center() const {\n      return o;\n    }\n\n    const\
    \ R radius() const {\n      return r;\n    }\n  };\n\n\n  template< typename R\
    \ >\n  using circles = std::vector< circle<R> >;\n\n}\n#line 2 \"src/real-geometry/operation/cross-product.hpp\"\
    \n\n#line 4 \"src/real-geometry/operation/cross-product.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R cross_product(const vec2d<R> &a, const vec2d<R>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n}\n#line 6 \"src/real-geometry/circle-lib/circumscribed-circle.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  circle<R> circumscribed_circle(const\
    \ point<R> &a, const point<R> &b, const point<R> &c) {\n    R A = std::norm(b\
    \ - c), B = std::norm(c - a), C = std::norm(a - b);\n\n    R S = std::norm(cross_product<R>(b\
    \ - a, c - a));\n    R T = A + B + C;\n\n    point<R> o{(A*(T - 2*A) * a + B*(T\
    \ - 2*B) * b + C*(T - 2*C) * c) / (4 * S)};\n\n    return circle(o, std::abs(o\
    \ - a));\n  }\n\n}\n#line 2 \"src/real-geometry/position/in-circle.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/utility/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\
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
    \ > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 6 \"src/real-geometry/position/in-circle.hpp\"\
    \n\n#line 8 \"src/real-geometry/position/in-circle.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  bool in_circle(const circle<R> &c, const point<R>\
    \ &p) {\n    return sign(std::abs(c.o - p) - c.r) == -1;\n  }\n\n}\n#line 7 \"\
    src/real-geometry/point-cloud/minimum-covering-circle.hpp\"\n\n#include <random>\n\
    #include <algorithm>\n\nnamespace geometry {\n\n  template< typename R >\n  circle<R>\
    \ minimum_covering_circle(points<R> pts, unsigned int seed) {\n    auto make_circle\
    \ = [](const point<R> &a, const point<R> &b) {\n      return circle<R>(point<R>(a\
    \ + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n    if (n\
    \ == 1) return circle<R>(pts[0], 0);\n\n    std::mt19937 engine(seed);\n    std::shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle<R> res(point<R>(), -1);\n\n    for (int i =\
    \ 0; i < n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle<R>(pts[i],\
    \ 0);\n\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n\n        for (int k\
    \ = 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n      \
    \    res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n\
    \    }\n\n    return res;\n  }\n\n}\n#line 2 \"src/real-geometry/utility/io-set.hpp\"\
    \n\n#include <iomanip>\n\nnamespace geometry {\n\n  class IoSetup {\n    using\
    \ u32 = unsigned int;\n\n    void set(std::ostream &os, u32 precision) {\n   \
    \   os << std::fixed << std::setprecision(precision);\n    }\n\n   public:\n \
    \   IoSetup(u32 precision = 15) {\n      std::cin.tie(0);\n      std::ios::sync_with_stdio(0);\n\
    \n      set(std::cout, precision);\n      set(std::cerr, precision);\n    }\n\
    \  } iosetup;\n\n}\n#line 10 \"test/atcoder/abc151_f.test.cpp\"\n\nint main()\
    \ {\n  using R = long double;\n\n  int n;\n  std::cin >> n;\n\n  geometry::points<R>\
    \ pts(n);\n  for (auto &pt: pts) std::cin >> pt;\n\n  std::cout << geometry::minimum_covering_circle(pts,\
    \ 1333333333).r << std::endl;\n}\n"
  code: "// verification-helper: PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f\n\
    // verification-helper: ERROR 1e-6\n\n#include <iostream>\n#include <vector>\n\
    \n#include \"src/real-geometry/class/point.hpp\"\n#include \"src/real-geometry/point-cloud/minimum-covering-circle.hpp\"\
    \n#include \"src/real-geometry/utility/io-set.hpp\"\n\nint main() {\n  using R\
    \ = long double;\n\n  int n;\n  std::cin >> n;\n\n  geometry::points<R> pts(n);\n\
    \  for (auto &pt: pts) std::cin >> pt;\n\n  std::cout << geometry::minimum_covering_circle(pts,\
    \ 1333333333).r << std::endl;\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/point-cloud/minimum-covering-circle.hpp
  - src/real-geometry/circle-lib/circumscribed-circle.hpp
  - src/real-geometry/class/circle.hpp
  - src/real-geometry/operation/cross-product.hpp
  - src/real-geometry/position/in-circle.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/utility/io-set.hpp
  isVerificationFile: true
  path: test/atcoder/abc151_f.test.cpp
  requiredBy: []
  timestamp: '2023-06-05 11:25:05+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/atcoder/abc151_f.test.cpp
layout: document
redirect_from:
- /verify/test/atcoder/abc151_f.test.cpp
- /verify/test/atcoder/abc151_f.test.cpp.html
title: test/atcoder/abc151_f.test.cpp
---
