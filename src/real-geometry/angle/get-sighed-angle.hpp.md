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
    path: src/real-geometry/common/const/pi.hpp
    title: src/real-geometry/common/const/pi.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/float-alias.hpp
    title: src/real-geometry/common/float-alias.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/angle/get-sighed-angle.hpp\"\n\n#line\
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
    \ point< R > >;\n\n}\n#line 2 \"src/real-geometry/common/const/pi.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/common/float-alias.hpp\"\n\nnamespace geometry {\n\n \
    \ using f80 = long double;\n  using f64 = double;\n\n}\n#line 4 \"src/real-geometry/common/const/pi.hpp\"\
    \n\n#include <cmath>\n\nnamespace geometry {\n\n  static f80 pi() {\n    static\
    \ const f80 PI = acosl(-1); // no need `std::`. (?)\n    return PI;\n  }\n\n}\n\
    #line 5 \"src/real-geometry/angle/get-sighed-angle.hpp\"\n\n#line 7 \"src/real-geometry/angle/get-sighed-angle.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R get_signed_angle(const\
    \ point &a, const point &b, const point &c) {\n    auto fix = [](R theta) {\n\
    \      if (theta < 0) theta += 2 * pi();\n      return theta;\n    };\n\n    const\
    \ point u(a - b), v(c - b);\n    R alpha = fix(std::atan2(u.y(), u.x()));\n  \
    \  R beta  = fix(std::atan2(v.y(), v.x()));\n    return fix(beta - alpha);\n \
    \ }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/point.hpp\"\n#include\
    \ \"src/real-geometry/common/const/pi.hpp\"\n\n#include <cmath>\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  R get_signed_angle(const point &a, const point\
    \ &b, const point &c) {\n    auto fix = [](R theta) {\n      if (theta < 0) theta\
    \ += 2 * pi();\n      return theta;\n    };\n\n    const point u(a - b), v(c -\
    \ b);\n    R alpha = fix(std::atan2(u.y(), u.x()));\n    R beta  = fix(std::atan2(v.y(),\
    \ v.x()));\n    return fix(beta - alpha);\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/common/const/pi.hpp
  - src/real-geometry/common/float-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/angle/get-sighed-angle.hpp
  requiredBy: []
  timestamp: '2023-06-01 02:56:49+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/real-geometry/angle/get-sighed-angle.hpp
layout: document
redirect_from:
- /library/src/real-geometry/angle/get-sighed-angle.hpp
- /library/src/real-geometry/angle/get-sighed-angle.hpp.html
title: src/real-geometry/angle/get-sighed-angle.hpp
---
