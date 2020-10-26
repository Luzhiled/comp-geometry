---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
  - icon: ':heavy_check_mark:'
    path: src/convex_diameter.hpp
    title: src/convex_diameter.hpp
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
    ERROR: '0.000001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_4_B.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B\n//\
    \ verification-helper: ERROR 0.000001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/convex_diameter.hpp\"\n\n#line 4 \"src/convex_diameter.hpp\"\
    \nusing namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\
    \nusing namespace std;\n\n// base\nnamespace geometry {\n    using real_number\
    \ = long double;\n\n    const real_number eps = 1e-8;\n    const real_number pi\
    \ = acos(-1);\n\n    inline int sign(real_number r) {\n        if (r < -eps) return\
    \ -1;\n        if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline\
    \ bool is_equal(real_number r1, real_number r2) {\n        return sign(r1 - r2)\
    \ == 0;\n    }\n}\n#line 2 \"src/polygon.hpp\"\n\n#line 4 \"src/polygon.hpp\"\n\
    using namespace std;\n\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \      sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 7 \"src/polygon.hpp\"\
    \n\n// polygon\nnamespace geometry {\n  using polygon = vector< point >;\n  using\
    \ polygons = vector< polygon >;\n}\n#line 2 \"src/product.hpp\"\n\n#line 4 \"\
    src/product.hpp\"\nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\n\
    namespace geometry {\n    real_number cross(const point &a, const point &b) {\n\
    \        return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 2 \"src/compare.hpp\"\n\n#line 4 \"src/compare.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/compare.hpp\"\n\nnamespace geometry {\n\
    \  bool compare_x(const point &a, const point &b) {\n    return a.real() != b.real()\
    \ ? a.real() < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const\
    \ point &a, const point &b) {\n    return a.imag() != b.imag() ? a.imag() < b.imag()\
    \ : a.real() < b.real();\n  }\n}\n#line 10 \"src/convex_diameter.hpp\"\n\nnamespace\
    \ geometry {\n  real_number convex_diameter(const polygon &p) {\n    int n = p.size();\n\
    \    if (n == 2) return abs(p[0] - p[1]);\n\n    int i = 0, j = 0;\n    for (int\
    \ k = 0; k < n; ++k) {\n      if ( compare_x(p[i], p[k])) i = k;\n      if (!compare_x(p[j],\
    \ p[k])) j = k;\n    }\n\n    real_number res = 0;\n    int si = i, sj = j;\n\
    \    while (i != sj || j != si) {\n      res = max(res, abs(p[i] - p[j]));\n \
    \     if (sign(cross(p[(i + 1) % n] - p[i], p[(j + 1) % n] - p[j])) == -1) {\n\
    \        i = (i + 1) % n;\n      } else {\n        j = (j + 1) % n;\n      }\n\
    \    }\n\n    return res;\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_4_B.test.cpp\"\n\
    \nusing namespace geometry;\nint main() {\n  int n;\n  cin >> n;\n\n  polygon\
    \ poly(n);\n  for (auto &p: poly) cin >> p;\n\n  cout << fixed << setprecision(15);\n\
    \  cout << convex_diameter(poly) << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/4/CGL_4_B\n\
    // verification-helper: ERROR 0.000001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/convex_diameter.hpp\"\n\nusing namespace geometry;\n\
    int main() {\n  int n;\n  cin >> n;\n\n  polygon poly(n);\n  for (auto &p: poly)\
    \ cin >> p;\n\n  cout << fixed << setprecision(15);\n  cout << convex_diameter(poly)\
    \ << endl;\n}\n"
  dependsOn:
  - src/convex_diameter.hpp
  - src/base.hpp
  - src/polygon.hpp
  - src/point.hpp
  - src/product.hpp
  - src/compare.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_4_B.test.cpp
  requiredBy: []
  timestamp: '2020-10-27 06:59:11+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_4_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_4_B.test.cpp
- /verify/test/aoj-cgl/CGL_4_B.test.cpp.html
title: test/aoj-cgl/CGL_4_B.test.cpp
---
