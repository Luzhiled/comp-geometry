---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/ccw.hpp
    title: src/ccw.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_convex.hpp
    title: src/is_convex.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/polygon.hpp
    title: src/polygon.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_3_B.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/is_convex.hpp\"\
    \n\n#line 4 \"src/is_convex.hpp\"\nusing namespace std;\n\n#line 2 \"src/polygon.hpp\"\
    \n\n#line 4 \"src/polygon.hpp\"\nusing namespace std;\n\n#line 2 \"src/point.hpp\"\
    \n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line 2 \"src/base.hpp\"\
    \n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\n// base\nnamespace geometry\
    \ {\n    using real_number = long double;\n\n    const real_number eps = 1e-8;\n\
    \    const real_number pi = acos(-1);\n\n    inline int sign(real_number r) {\n\
    \        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n        return\
    \ 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number r2) {\n  \
    \      return sign(r1 - r2) == 0;\n    }\n}\n#line 7 \"src/point.hpp\"\n\n// point\n\
    namespace geometry {\n  using point = complex< real_number >;\n  using points\
    \ = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n    real_number\
    \ x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream\
    \ &operator<<(ostream &os, const point &p) {\n    return os << p.real() << \"\
    \ \" << p.imag();\n  }\n\n  point operator*(const point &p, const real_number\
    \ &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point rotate(const\
    \ real_number &theta, const point &p) {\n    return point(cos(theta) * p.real()\
    \ + sin(-theta) * p.imag(),\n        sin(theta) * p.real() + cos(-theta) * p.imag());\n\
    \  }\n}\n#line 7 \"src/polygon.hpp\"\n\n// polygon\nnamespace geometry {\n  using\
    \ polygon = vector< point >;\n  using polygons = vector< polygon >;\n}\n#line\
    \ 2 \"src/ccw.hpp\"\n\n#line 4 \"src/ccw.hpp\"\nusing namespace std;\n\n#line\
    \ 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\nusing namespace std;\n\
    \n#line 7 \"src/product.hpp\"\n\n// product\nnamespace geometry {\n    real_number\
    \ cross(const point &a, const point &b) {\n        return a.real() * b.imag()\
    \ - a.imag() * b.real();\n    }\n\n    real_number dot(const point &a, const point\
    \ &b) {\n        return a.real() * b.real() + a.imag() * b.imag();\n    }\n}\n\
    #line 7 \"src/ccw.hpp\"\n\n// ccw\nnamespace geometry {\n  constexpr int COUNTER_CLOCKWISE\
    \ = +1;\n  constexpr int CLOCKWISE         = -1;\n  constexpr int ONLINE_BACK\
    \       = +2; // c-a-b\n  constexpr int ONLINE_FRONT      = -2; // a-b-c\n  constexpr\
    \ int ON_SEGMENT        =  0; // a-c-b\n  int ccw(const point &a, point b, point\
    \ c) {\n    b = b - a, c = c - a;\n    if (sign(cross(b, c)) == +1) return COUNTER_CLOCKWISE;\n\
    \    if (sign(cross(b, c)) == -1) return CLOCKWISE;\n    if (sign(dot(b, c)) ==\
    \ -1) return ONLINE_BACK;\n    if (norm(b) < norm(c)) return ONLINE_FRONT;\n \
    \   return ON_SEGMENT;\n  }\n}\n#line 8 \"src/is_convex.hpp\"\n\nnamespace geometry\
    \ {\n  bool is_convex(const polygon &poly) { // poly given counterclockwise \n\
    \    int n = poly.size();\n    for (int i = 0; i < n; ++i) {\n      if (ccw(poly[(i\
    \ + n - 1) % n], poly[i], poly[(i + 1) % n]) == -1) return false;\n    }\n   \
    \ return true;\n  }\n}\n#line 7 \"test/aoj-cgl/CGL_3_B.test.cpp\"\n\nusing namespace\
    \ geometry;\nint main() {\n  int n;\n  cin >> n;\n\n  polygon poly(n);\n  for\
    \ (auto &p: poly) {\n    cin >> p;\n  }\n\n  cout << is_convex(poly) << endl;\n\
    }\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/3/CGL_3_B\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/is_convex.hpp\"\
    \n\nusing namespace geometry;\nint main() {\n  int n;\n  cin >> n;\n\n  polygon\
    \ poly(n);\n  for (auto &p: poly) {\n    cin >> p;\n  }\n\n  cout << is_convex(poly)\
    \ << endl;\n}\n"
  dependsOn:
  - src/is_convex.hpp
  - src/polygon.hpp
  - src/point.hpp
  - src/base.hpp
  - src/ccw.hpp
  - src/product.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_3_B.test.cpp
  requiredBy: []
  timestamp: '2020-10-15 00:41:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_3_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_3_B.test.cpp
- /verify/test/aoj-cgl/CGL_3_B.test.cpp.html
title: test/aoj-cgl/CGL_3_B.test.cpp
---
