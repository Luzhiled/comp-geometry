---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_A.test.cpp
    title: test/aoj/cgl/1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/1_B.test.cpp
    title: test/aoj/cgl/1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_C.test.cpp
    title: test/aoj/cgl/2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/2_D.test.cpp
    title: test/aoj/cgl/2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/3_A.test.cpp
    title: test/aoj/cgl/3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_A.test.cpp
    title: test/aoj/cgl/4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_B.test.cpp
    title: test/aoj/cgl/4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/4_C.test.cpp
    title: test/aoj/cgl/4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/5_A.test.cpp
    title: test/aoj/cgl/5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_B.test.cpp
    title: test/aoj/cgl/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_C.test.cpp
    title: test/aoj/cgl/7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_D.test.cpp
    title: test/aoj/cgl/7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_E.test.cpp
    title: test/aoj/cgl/7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_F.test.cpp
    title: test/aoj/cgl/7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_G.test.cpp
    title: test/aoj/cgl/7_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_H.test.cpp
    title: test/aoj/cgl/7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/cgl/7_I.test.cpp
    title: test/aoj/cgl/7_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/2402.test.cpp
    title: test/aoj/icpc/2402.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/icpc/3034.test.cpp
    title: test/aoj/icpc/3034.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/atcoder/abc151_f.test.cpp
    title: test/atcoder/abc151_f.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/real-geometry/utility/io-set.hpp\"\n\n#include <iomanip>\n\
    \nnamespace geometry {\n\n  class IoSetup {\n    using u32 = unsigned int;\n\n\
    \    void set(std::ostream &os, u32 precision) {\n      os << std::fixed << std::setprecision(precision);\n\
    \    }\n\n   public:\n    IoSetup(u32 precision = 15) {\n      std::cin.tie(0);\n\
    \      std::ios::sync_with_stdio(0);\n\n      set(std::cout, precision);\n   \
    \   set(std::cerr, precision);\n    }\n  } iosetup;\n\n}\n"
  code: "#pragma once\n\n#include <iomanip>\n\nnamespace geometry {\n\n  class IoSetup\
    \ {\n    using u32 = unsigned int;\n\n    void set(std::ostream &os, u32 precision)\
    \ {\n      os << std::fixed << std::setprecision(precision);\n    }\n\n   public:\n\
    \    IoSetup(u32 precision = 15) {\n      std::cin.tie(0);\n      std::ios::sync_with_stdio(0);\n\
    \n      set(std::cout, precision);\n      set(std::cerr, precision);\n    }\n\
    \  } iosetup;\n\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/real-geometry/utility/io-set.hpp
  requiredBy: []
  timestamp: '2023-05-31 10:27:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/icpc/2402.test.cpp
  - test/aoj/icpc/3034.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/7_I.test.cpp
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/5_A.test.cpp
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/1_A.test.cpp
  - test/aoj/cgl/2_C.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/1_B.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/atcoder/abc151_f.test.cpp
documentation_of: src/real-geometry/utility/io-set.hpp
layout: document
redirect_from:
- /library/src/real-geometry/utility/io-set.hpp
- /library/src/real-geometry/utility/io-set.hpp.html
title: src/real-geometry/utility/io-set.hpp
---
