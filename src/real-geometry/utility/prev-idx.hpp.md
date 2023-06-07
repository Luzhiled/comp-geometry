---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/size-alias.hpp
    title: src/real-geometry/common/size-alias.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/convex/is-convex.hpp
    title: src/real-geometry/convex/is-convex.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_B.test.cpp
    title: test/aoj/cgl/3_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/utility/prev-idx.hpp\"\n\n#line 2 \"src/real-geometry/common/size-alias.hpp\"\
    \n\n#include <cstddef>\n\nnamespace geometry {\n\n  using isize = std::ptrdiff_t;\n\
    \  using usize = std::size_t;\n\n}\n#line 4 \"src/real-geometry/utility/prev-idx.hpp\"\
    \n\nnamespace geometry {\n\n  inline usize prev_idx(usize idx, usize size) {\n\
    \    return idx ? idx - 1 : size - 1;\n  }\n\n}\n"
  code: "#pragma once\n\n#include \"src/real-geometry/common/size-alias.hpp\"\n\n\
    namespace geometry {\n\n  inline usize prev_idx(usize idx, usize size) {\n   \
    \ return idx ? idx - 1 : size - 1;\n  }\n\n}\n"
  dependsOn:
  - src/real-geometry/common/size-alias.hpp
  isVerificationFile: false
  path: src/real-geometry/utility/prev-idx.hpp
  requiredBy:
  - src/real-geometry/convex/is-convex.hpp
  timestamp: '2023-05-31 11:05:34+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/3_B.test.cpp
documentation_of: src/real-geometry/utility/prev-idx.hpp
layout: document
redirect_from:
- /library/src/real-geometry/utility/prev-idx.hpp
- /library/src/real-geometry/utility/prev-idx.hpp.html
title: src/real-geometry/utility/prev-idx.hpp
---
