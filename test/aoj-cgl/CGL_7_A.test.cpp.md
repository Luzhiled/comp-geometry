---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/intersect_cc.hpp
    title: src/intersect_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_7_A.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A\n\n#include <iostream>\n\
    using namespace std;\n\n#line 2 \"src/intersect_cc.hpp\"\n\n#include <complex>\n\
    #include <algorithm>\nusing namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#include\
    \ <cmath>\nusing namespace std;\n\n// base\nnamespace geometry {\n    using real_number\
    \ = long double;\n\n    const real_number eps = 1e-9;\n    const real_number pi\
    \ = acos(-1);\n\n    inline int sign(real_number r) {\n        if (r < -eps) return\
    \ -1;\n        if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline\
    \ bool is_equal(real_number r1, real_number r2) {\n        return sign(r1 - r2)\
    \ == 0;\n    }\n}\n#line 2 \"src/circle.hpp\"\n\n#include <vector>\nusing namespace\
    \ std;\n\n#line 2 \"src/point.hpp\"\n\n#line 6 \"src/point.hpp\"\n#include <istream>\n\
    #include <ostream>\nusing namespace std;\n\n#line 11 \"src/point.hpp\"\n\n// point\n\
    namespace geometry {\n  using point = complex< real_number >;\n  using points\
    \ = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n    real_number\
    \ x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream\
    \ &operator<<(ostream &os, const point &p) {\n    return os << p.real() << \"\
    \ \" << p.imag();\n  }\n\n  point operator*(const point &p, const real_number\
    \ &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point rotate(const\
    \ real_number &theta, const point &p) {\n    return point(cos(theta) * p.real()\
    \ + sin(-theta) * p.imag(),\n                 sin(theta) * p.real() + cos(-theta)\
    \ * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\n\n// circle\nnamespace geometry\
    \ {\n  struct circle {\n    point p;\n    real_number r;\n    circle() {}\n  \
    \  circle(point p, real_number r) : p(p), r(r) {}\n  };\n\n  using circles = vector<\
    \ circle >;\n}\n#line 9 \"src/intersect_cc.hpp\"\n\nnamespace geometry {\n  constexpr\
    \ int SEPERATE     = 4;\n  constexpr int CIRCUMSCRIBE = 3;\n  constexpr int INTERSECT\
    \    = 2;\n  constexpr int INSCRIBE     = 1;\n  constexpr int CONTAIN      = 0;\n\
    \  int intersect_cc(circle c1, circle c2) {\n    if (c1.r > c2.r) swap(c1, c2);\n\
    \    real_number d = abs(c1.p - c2.p), r = c1.r + c2.r;\n\n    if (sign(d - r)\
    \ > 0) return SEPERATE;\n    if (sign(d + c1.r - c2.r) < 0) return CONTAIN;\n\
    \    if (is_equal(d, r)) return CIRCUMSCRIBE;\n    if (is_equal(d + c1.r, c2.r))\
    \ return INSCRIBE;\n    return INTERSECT;\n  }\n}\n#line 7 \"test/aoj-cgl/CGL_7_A.test.cpp\"\
    \n\nusing namespace geometry;\nint main() {\n  circle c1, c2;\n  cin >> c1.p >>\
    \ c1.r;\n  cin >> c2.p >> c2.r;\n\n  cout << intersect_cc(c1, c2) << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_A\n\
    \n#include <iostream>\nusing namespace std;\n\n#include \"../../src/intersect_cc.hpp\"\
    \n\nusing namespace geometry;\nint main() {\n  circle c1, c2;\n  cin >> c1.p >>\
    \ c1.r;\n  cin >> c2.p >> c2.r;\n\n  cout << intersect_cc(c1, c2) << endl;\n}\n"
  dependsOn:
  - src/intersect_cc.hpp
  - src/base.hpp
  - src/circle.hpp
  - src/point.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_7_A.test.cpp
  requiredBy: []
  timestamp: '2020-11-16 02:22:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_7_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_7_A.test.cpp
- /verify/test/aoj-cgl/CGL_7_A.test.cpp.html
title: test/aoj-cgl/CGL_7_A.test.cpp
---
