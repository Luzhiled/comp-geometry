---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/integer-geometry/twice_area.hpp
    title: src/integer-geometry/twice_area.hpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-twice_area.cpp
    title: src/integer-geometry/unit-test/unit-test-twice_area.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/integer-geometry/nidx.hpp\"\n\n#line 2 \"src/integer-geometry/alias.hpp\"\
    \n\n#include <cstddef>\n#include <cstdint>\n\nnamespace intgeometry2d {\n  using\
    \ isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
    \  using i64 = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using\
    \ u64 = std::uint_fast64_t;\n} // intgeometry2d\n#line 4 \"src/integer-geometry/nidx.hpp\"\
    \n\nnamespace intgeometry2d {\n  inline usize nidx(usize idx, usize size) {\n\
    \    return idx + 1 == size ? 0 : idx + 1;\n  }\n} // intgeometry2d\n"
  code: "#pragma once\n\n#include \"alias.hpp\"\n\nnamespace intgeometry2d {\n  inline\
    \ usize nidx(usize idx, usize size) {\n    return idx + 1 == size ? 0 : idx +\
    \ 1;\n  }\n} // intgeometry2d\n"
  dependsOn:
  - src/integer-geometry/alias.hpp
  isVerificationFile: false
  path: src/integer-geometry/nidx.hpp
  requiredBy:
  - src/integer-geometry/unit-test/unit-test-twice_area.cpp
  - src/integer-geometry/twice_area.hpp
  timestamp: '2022-05-14 03:05:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/nidx.hpp
layout: document
redirect_from:
- /library/src/integer-geometry/nidx.hpp
- /library/src/integer-geometry/nidx.hpp.html
title: src/integer-geometry/nidx.hpp
---