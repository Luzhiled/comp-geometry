---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/area/common-area-circle-polygon.hpp
    title: src/real-geometry/area/common-area-circle-polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/circle-lib/inscribed-circle.hpp
    title: src/real-geometry/circle-lib/inscribed-circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/is-convex.hpp
    title: src/real-geometry/convex/is-convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-sp.hpp
    title: src/real-geometry/distance/distance-sp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-ss.hpp
    title: src/real-geometry/distance/distance-ss.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/ccw.hpp
    title: src/real-geometry/operation/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/position/intersect-ss.hpp
    title: src/real-geometry/position/intersect-ss.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_C.test.cpp
    title: test/aoj/cgl/1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_B.test.cpp
    title: test/aoj/cgl/2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
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
    path: test/aoj/icpc/2862.test.cpp
    title: test/aoj/icpc/2862.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/numbers/ccw.hpp\"\n\nnamespace geometry::number::ccw\
    \ {\n\n  constexpr int COUNTER_CLOCKWISE = +1;\n  constexpr int CLOCKWISE    \
    \     = -1;\n  constexpr int ONLINE_BACK       = +2; // c-a-b\n  constexpr int\
    \ ONLINE_FRONT      = -2; // a-b-c\n  constexpr int ON_SEGMENT        =  0; //\
    \ a-c-b\n\n}\n"
  code: "#pragma once\n\nnamespace geometry::number::ccw {\n\n  constexpr int COUNTER_CLOCKWISE\
    \ = +1;\n  constexpr int CLOCKWISE         = -1;\n  constexpr int ONLINE_BACK\
    \       = +2; // c-a-b\n  constexpr int ONLINE_FRONT      = -2; // a-b-c\n  constexpr\
    \ int ON_SEGMENT        =  0; // a-c-b\n\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/real-geometry/numbers/ccw.hpp
  requiredBy:
  - src/real-geometry/circle-lib/inscribed-circle.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/intersect-ss.hpp
  - src/real-geometry/distance/distance-ss.hpp
  - src/real-geometry/distance/distance-sp.hpp
  - src/real-geometry/convex/is-convex.hpp
  - src/real-geometry/operation/ccw.hpp
  timestamp: '2023-05-30 15:40:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2003.test.cpp
  - test/aoj/icpc/2862.test.cpp
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/cgl/2_B.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/1_C.test.cpp
  - test/aoj/cgl/7_B.test.cpp
documentation_of: src/real-geometry/numbers/ccw.hpp
layout: document
redirect_from:
- /library/src/real-geometry/numbers/ccw.hpp
- /library/src/real-geometry/numbers/ccw.hpp.html
title: src/real-geometry/numbers/ccw.hpp
---
