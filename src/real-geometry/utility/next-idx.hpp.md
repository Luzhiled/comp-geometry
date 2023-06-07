---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/size-alias.hpp
    title: src/real-geometry/common/size-alias.hpp
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
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2950.test.cpp
    title: test/aoj/icpc/2950.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/utility/next-idx.hpp\"\n\n#line 2 \"src/real-geometry/common/size-alias.hpp\"\
    \n\n#include <cstddef>\n\nnamespace geometry {\n\n  using isize = std::ptrdiff_t;\n\
    \  using usize = std::size_t;\n\n}\n#line 4 \"src/real-geometry/utility/next-idx.hpp\"\
    \n\nnamespace geometry {\n\n  inline usize next_idx(usize idx, usize size) {\n\
    \    return idx + 1 == size ? 0 : idx + 1;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/size-alias.hpp\"\n\n\
    namespace geometry {\n\n  inline usize next_idx(usize idx, usize size) {\n   \
    \ return idx + 1 == size ? 0 : idx + 1;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/size-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/utility/next-idx.hpp
  requiredBy:
  - src/real-geometry/utility/polygon-to-segments.hpp
  - src/real-geometry/area/polygon-area.hpp
  - src/real-geometry/area/common-area-circle-polygon.hpp
  - src/real-geometry/position/point-polygon-positional-relationships.hpp
  - src/real-geometry/convex/convex-diameter.hpp
  - src/real-geometry/convex/is-convex.hpp
  - src/real-geometry/convex/convex-cut.hpp
  timestamp: '2023-05-30 13:29:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2950.test.cpp
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/3_B.test.cpp
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/3_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
documentation_of: src/real-geometry/utility/next-idx.hpp
layout: document
redirect_from:
- /library/src/real-geometry/utility/next-idx.hpp
- /library/src/real-geometry/utility/next-idx.hpp.html
title: src/real-geometry/utility/next-idx.hpp
---
