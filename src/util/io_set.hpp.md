---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/atcoder/abc151-f.cpp
    title: test/atcoder/abc151-f.cpp
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
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/util/io_set.hpp\"\n#include <iomanip>\n\nnamespace geometry\
    \ {\n  using namespace std;\n  class IoSetup {\n    using u32 = unsigned int;\n\
    \n    void set(ostream &os, u32 precision) {\n      os << fixed << setprecision(precision);\n\
    \    }\n\n    public:\n    IoSetup(u32 precision = 15) {\n      cin.tie(0);\n\
    \      ios::sync_with_stdio(0);\n\n      set(cout, precision);\n      set(cerr,\
    \ precision);\n    }\n  } iosetup;\n}\n"
  code: "#include <iomanip>\n\nnamespace geometry {\n  using namespace std;\n  class\
    \ IoSetup {\n    using u32 = unsigned int;\n\n    void set(ostream &os, u32 precision)\
    \ {\n      os << fixed << setprecision(precision);\n    }\n\n    public:\n   \
    \ IoSetup(u32 precision = 15) {\n      cin.tie(0);\n      ios::sync_with_stdio(0);\n\
    \n      set(cout, precision);\n      set(cerr, precision);\n    }\n  } iosetup;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/util/io_set.hpp
  requiredBy:
  - test/atcoder/abc151-f.cpp
  timestamp: '2020-11-21 21:36:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/cgl/4_A.test.cpp
  - test/aoj/cgl/4_C.test.cpp
  - test/aoj/cgl/7_E.test.cpp
  - test/aoj/cgl/3_A.test.cpp
  - test/aoj/cgl/7_F.test.cpp
  - test/aoj/cgl/7_I.test.cpp
  - test/aoj/cgl/7_D.test.cpp
  - test/aoj/cgl/1_B.test.cpp
  - test/aoj/cgl/1_A.test.cpp
  - test/aoj/cgl/7_B.test.cpp
  - test/aoj/cgl/7_C.test.cpp
  - test/aoj/cgl/7_H.test.cpp
  - test/aoj/cgl/2_D.test.cpp
  - test/aoj/cgl/7_G.test.cpp
  - test/aoj/cgl/5_A.test.cpp
  - test/aoj/cgl/2_C.test.cpp
  - test/aoj/cgl/4_B.test.cpp
  - test/aoj/icpc/3034.test.cpp
  - test/aoj/icpc/2402.test.cpp
documentation_of: src/util/io_set.hpp
layout: document
redirect_from:
- /library/src/util/io_set.hpp
- /library/src/util/io_set.hpp.html
title: src/util/io_set.hpp
---
