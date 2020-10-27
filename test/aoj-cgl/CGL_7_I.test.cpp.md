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
    path: src/common_area_cc.hpp
    title: src/common_area_cc.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.000001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_7_I.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I\n// verification-helper:\
    \ ERROR 0.000001\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2\
    \ \"src/circle.hpp\"\n\n#line 4 \"src/circle.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\n// base\n\
    namespace geometry {\n    using real_number = long double;\n\n    const real_number\
    \ eps = 1e-8;\n    const real_number pi = acos(-1);\n\n    inline int sign(real_number\
    \ r) {\n        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n \
    \       return 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number\
    \ r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 7 \"src/point.hpp\"\
    \n\n// point\nnamespace geometry {\n  using point = complex< real_number >;\n\
    \  using points = vector< point >;\n\n  istream &operator>>(istream &is, point\
    \ &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return\
    \ is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p) {\n    return\
    \ os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const point &p,\
    \ const real_number &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\
    \n  point rotate(const real_number &theta, const point &p) {\n    return point(cos(theta)\
    \ * p.real() + sin(-theta) * p.imag(),\n        sin(theta) * p.real() + cos(-theta)\
    \ * p.imag());\n  }\n}\n#line 7 \"src/circle.hpp\"\n\n// circle\nnamespace geometry\
    \ {\n  struct circle {\n    point p;\n    real_number r;\n    circle() {}\n  \
    \  circle(point p, real_number r) : p(p), r(r) {}\n  };\n\n  using circles = vector<\
    \ circle >;\n}\n#line 2 \"src/common_area_cc.hpp\"\n\n#line 4 \"src/common_area_cc.hpp\"\
    \nusing namespace std;\n\n#line 9 \"src/common_area_cc.hpp\"\n\nnamespace geometry\
    \ {\n  real_number common_area_cc(circle a, circle b) {\n    real_number d = abs(a.p\
    \ - b.p);\n    if (a.r > b.r) swap(a, b);\n\n    if (sign(a.r + b.r - d) <= 0)\
    \ return 0;\n    if (sign(d - (b.r - a.r)) <= 0) {\n      return norm(a.r) * pi;\n\
    \    }\n\n    real_number res = 0;\n    for (int i = 0; i < 2; ++i) {\n      real_number\
    \ alpha = acos((norm(b.r) + norm(d) - norm(a.r)) / (2 * b.r * d));\n      real_number\
    \ s = alpha * norm(b.r);\n      real_number t = norm(b.r) * sin(alpha) * cos(alpha);\n\
    \      res += s - t;\n      std::swap(a, b);\n    }\n\n    return res;\n  }\n\n\
    }\n\n#line 9 \"test/aoj-cgl/CGL_7_I.test.cpp\"\n\nusing namespace geometry;\n\
    int main() {\n  circle c1, c2;\n  cin >> c1.p >> c1.r;\n  cin >> c2.p >> c2.r;\n\
    \n  cout << fixed << setprecision(15);\n  cout << common_area_cc(c1, c2) << endl;\n\
    }\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/CGL_7_I\n\
    // verification-helper: ERROR 0.000001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/circle.hpp\"\n#include \"../../src/common_area_cc.hpp\"\
    \n\nusing namespace geometry;\nint main() {\n  circle c1, c2;\n  cin >> c1.p >>\
    \ c1.r;\n  cin >> c2.p >> c2.r;\n\n  cout << fixed << setprecision(15);\n  cout\
    \ << common_area_cc(c1, c2) << endl;\n}\n"
  dependsOn:
  - src/circle.hpp
  - src/point.hpp
  - src/base.hpp
  - src/common_area_cc.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_7_I.test.cpp
  requiredBy: []
  timestamp: '2020-10-27 12:41:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_7_I.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_7_I.test.cpp
- /verify/test/aoj-cgl/CGL_7_I.test.cpp.html
title: test/aoj-cgl/CGL_7_I.test.cpp
---