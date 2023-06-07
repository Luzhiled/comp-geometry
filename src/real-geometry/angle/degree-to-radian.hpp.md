---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/const/pi.hpp
    title: src/real-geometry/common/const/pi.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/float-alias.hpp
    title: src/real-geometry/common/float-alias.hpp
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
  bundledCode: "#line 2 \"src/real-geometry/angle/degree-to-radian.hpp\"\n\n#line\
    \ 2 \"src/real-geometry/common/const/pi.hpp\"\n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using f80 = long double;\n  using f64 = double;\n\
    \n}\n#line 4 \"src/real-geometry/common/const/pi.hpp\"\n\n#include <cmath>\n\n\
    namespace geometry {\n\n  static f80 pi() {\n    static const f80 PI = acosl(-1);\
    \ // no need `std::`. (?)\n    return PI;\n  }\n\n}\n#line 4 \"src/real-geometry/angle/degree-to-radian.hpp\"\
    \n\nnamespace geometry {\n\n  // warning: to use degree_to_radian<R>(deg) \n \
    \ //          if type of deg is `int`\n  template< typename R >\n  R degree_to_radian(R\
    \ deg) {\n    return deg * pi() / 180.0;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/const/pi.hpp\"\n\nnamespace\
    \ geometry {\n\n  // warning: to use degree_to_radian<R>(deg) \n  //         \
    \ if type of deg is `int`\n  template< typename R >\n  R degree_to_radian(R deg)\
    \ {\n    return deg * pi() / 180.0;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/const/pi.hpp
  - src/real-geometry/common/float-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/angle/degree-to-radian.hpp
  requiredBy: []
  timestamp: '2023-06-05 10:52:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
documentation_of: src/real-geometry/angle/degree-to-radian.hpp
layout: document
redirect_from:
- /library/src/real-geometry/angle/degree-to-radian.hpp
- /library/src/real-geometry/angle/degree-to-radian.hpp.html
title: src/real-geometry/angle/degree-to-radian.hpp
---
