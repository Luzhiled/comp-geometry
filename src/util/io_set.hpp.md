---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_A.test.cpp
    title: test/aoj-cgl/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_1_B.test.cpp
    title: test/aoj-cgl/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_C.test.cpp
    title: test/aoj-cgl/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_2_D.test.cpp
    title: test/aoj-cgl/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_3_A.test.cpp
    title: test/aoj-cgl/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_A.test.cpp
    title: test/aoj-cgl/CGL_4_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_B.test.cpp
    title: test/aoj-cgl/CGL_4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_4_C.test.cpp
    title: test/aoj-cgl/CGL_4_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_5_A.test.cpp
    title: test/aoj-cgl/CGL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_B.test.cpp
    title: test/aoj-cgl/CGL_7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_C.test.cpp
    title: test/aoj-cgl/CGL_7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_D.test.cpp
    title: test/aoj-cgl/CGL_7_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_E.test.cpp
    title: test/aoj-cgl/CGL_7_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_F.test.cpp
    title: test/aoj-cgl/CGL_7_F.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_G.test.cpp
    title: test/aoj-cgl/CGL_7_G.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_H.test.cpp
    title: test/aoj-cgl/CGL_7_H.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj-cgl/CGL_7_I.test.cpp
    title: test/aoj-cgl/CGL_7_I.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/util/io_set.hpp\"\n#include <iomanip>\n\nclass IoSetup\
    \ {\n  using u32 = unsigned int;\n\n  void set(ostream &os, u32 precision) {\n\
    \    os << fixed << setprecision(precision);\n  }\n\npublic:\n  IoSetup(u32 precision\
    \ = 15) {\n    cin.tie(0);\n    ios::sync_with_stdio(0);\n\n    set(cout, precision);\n\
    \    set(cerr, precision);\n  }\n} iosetup;\n"
  code: "#include <iomanip>\n\nclass IoSetup {\n  using u32 = unsigned int;\n\n  void\
    \ set(ostream &os, u32 precision) {\n    os << fixed << setprecision(precision);\n\
    \  }\n\npublic:\n  IoSetup(u32 precision = 15) {\n    cin.tie(0);\n    ios::sync_with_stdio(0);\n\
    \n    set(cout, precision);\n    set(cerr, precision);\n  }\n} iosetup;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/util/io_set.hpp
  requiredBy: []
  timestamp: '2020-11-16 02:22:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-cgl/CGL_4_A.test.cpp
  - test/aoj-cgl/CGL_7_B.test.cpp
  - test/aoj-cgl/CGL_7_C.test.cpp
  - test/aoj-cgl/CGL_7_I.test.cpp
  - test/aoj-cgl/CGL_3_A.test.cpp
  - test/aoj-cgl/CGL_5_A.test.cpp
  - test/aoj-cgl/CGL_7_H.test.cpp
  - test/aoj-cgl/CGL_1_A.test.cpp
  - test/aoj-cgl/CGL_1_B.test.cpp
  - test/aoj-cgl/CGL_7_G.test.cpp
  - test/aoj-cgl/CGL_2_C.test.cpp
  - test/aoj-cgl/CGL_2_D.test.cpp
  - test/aoj-cgl/CGL_4_C.test.cpp
  - test/aoj-cgl/CGL_4_B.test.cpp
  - test/aoj-cgl/CGL_7_F.test.cpp
  - test/aoj-cgl/CGL_7_E.test.cpp
  - test/aoj-cgl/CGL_7_D.test.cpp
documentation_of: src/util/io_set.hpp
layout: document
redirect_from:
- /library/src/util/io_set.hpp
- /library/src/util/io_set.hpp.html
title: src/util/io_set.hpp
---
