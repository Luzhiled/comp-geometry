---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/vector.hpp
    title: src/real-geometry/class/vector.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/mapping/rotate.hpp\"\n\n#line 2 \"src/real-geometry/class/vector.hpp\"\
    \n\n#include <complex>\n#include <iostream>\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  class vec2d : public std::complex< R > {\n    using complex\
    \ = std::complex< R >;\n\n   public:\n    using complex::complex;\n\n    vec2d(const\
    \ complex &c): complex::complex(c) {}\n\n    const R x() const { return this->real();\
    \ }\n    const R y() const { return this->imag(); }\n\n    friend vec2d operator*(const\
    \ vec2d &v, const R &k) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n\
    \    friend vec2d operator*(const R &k, const vec2d &v) {\n      return vec2d(v.x()\
    \ * k, v.y() * k);\n    }\n\n    friend std::istream &operator>>(std::istream\
    \ &is, vec2d &v) {\n      R x, y;\n      is >> x >> y;\n      v = vec2d(x, y);\n\
    \      return is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/mapping/rotate.hpp\"\
    \n\n#include <cmath>\n\nnamespace geometry {\n\n  template< typename R >\n  vec2d<R>\
    \ rotate(const R theta, const vec2d<R> &v) {\n    return {std::cos(theta) * v.x()\
    \ + std::sin(-theta) * v.y(),\n            std::sin(theta) * v.x() + std::cos(-theta)\
    \ * v.y()};\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/class/vector.hpp\"\n\n#include\
    \ <cmath>\n\nnamespace geometry {\n\n  template< typename R >\n  vec2d<R> rotate(const\
    \ R theta, const vec2d<R> &v) {\n    return {std::cos(theta) * v.x() + std::sin(-theta)\
    \ * v.y(),\n            std::sin(theta) * v.x() + std::cos(-theta) * v.y()};\n\
    \  }\n\n}\n"
  dependsOn:
  - src/real-geometry/class/vector.hpp
  isVerificationFile: false
  path: src/real-geometry/mapping/rotate.hpp
  requiredBy: []
  timestamp: '2023-06-05 10:52:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
documentation_of: src/real-geometry/mapping/rotate.hpp
layout: document
redirect_from:
- /library/src/real-geometry/mapping/rotate.hpp
- /library/src/real-geometry/mapping/rotate.hpp.html
title: src/real-geometry/mapping/rotate.hpp
---
