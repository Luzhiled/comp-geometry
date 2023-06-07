---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/float-alias.hpp
    title: src/real-geometry/common/float-alias.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/angle/degree-to-radian.hpp
    title: src/real-geometry/angle/degree-to-radian.hpp
  - icon: ':warning:'
    path: src/real-geometry/angle/get-sighed-angle.hpp
    title: src/real-geometry/angle/get-sighed-angle.hpp
  - icon: ':warning:'
    path: src/real-geometry/angle/get-smaller-angle.hpp
    title: src/real-geometry/angle/get-smaller-angle.hpp
  - icon: ':warning:'
    path: src/real-geometry/angle/radian-to-degree.hpp
    title: src/real-geometry/angle/radian-to-degree.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/common-area-cc.hpp
    title: src/real-geometry/area/common-area-cc.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_I.test.cpp
    title: test/aoj/cgl/7_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/common/const/pi.hpp\"\n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using f80 = long double;\n  using f64 = double;\n\
    \n}\n#line 4 \"src/real-geometry/common/const/pi.hpp\"\n\n#include <cmath>\n\n\
    namespace geometry {\n\n  static f80 pi() {\n    static const f80 PI = acosl(-1);\
    \ // no need `std::`. (?)\n    return PI;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/float-alias.hpp\"\n\n\
    #include <cmath>\n\nnamespace geometry {\n\n  static f80 pi() {\n    static const\
    \ f80 PI = acosl(-1); // no need `std::`. (?)\n    return PI;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/float-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/common/const/pi.hpp
  requiredBy:
  - src/real-geometry/area/common-area-cc.hpp
  - src/real-geometry/angle/degree-to-radian.hpp
  - src/real-geometry/angle/get-sighed-angle.hpp
  - src/real-geometry/angle/radian-to-degree.hpp
  - src/real-geometry/angle/get-smaller-angle.hpp
  timestamp: '2023-06-01 02:56:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/7_I.test.cpp
documentation_of: src/real-geometry/common/const/pi.hpp
layout: document
redirect_from:
- /library/src/real-geometry/common/const/pi.hpp
- /library/src/real-geometry/common/const/pi.hpp.html
title: src/real-geometry/common/const/pi.hpp
---
