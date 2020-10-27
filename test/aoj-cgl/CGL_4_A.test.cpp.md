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
    path: src/convex_hull.hpp
    title: src/convex_hull.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_4_A.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/polygon.hpp\"\
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
    \ 2 \"src/convex_hull.hpp\"\n\n#line 4 \"src/convex_hull.hpp\"\nusing namespace\
    \ std;\n\n#line 2 \"src/compare.hpp\"\n\n#line 4 \"src/compare.hpp\"\nusing namespace\
    \ std;\n\n#line 8 \"src/compare.hpp\"\n\nnamespace geometry {\n  bool compare_x(const\
    \ point &a, const point &b) {\n    return !is_equal(a.real(), b.real()) ? a.real()\
    \ < b.real() : a.imag() < b.imag();\n  }\n\n  bool compare_y(const point &a, const\
    \ point &b) {\n    return !is_equal(a.imag(), b.imag()) ? a.imag() < b.imag()\
    \ : a.real() < b.real();\n  }\n}\n#line 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/product.hpp\"\n\n// product\nnamespace\
    \ geometry {\n    real_number cross(const point &a, const point &b) {\n      \
    \  return a.real() * b.imag() - a.imag() * b.real();\n    }\n\n    real_number\
    \ dot(const point &a, const point &b) {\n        return a.real() * b.real() +\
    \ a.imag() * b.imag();\n    }\n}\n#line 10 \"src/convex_hull.hpp\"\n\n// convex_hull\n\
    namespace geometry {\n  polygon convex_hull(points poly) {\n    int n = poly.size(),\
    \ k = 0;\n    if (n <= 2) return poly;\n    sort(poly.begin(), poly.end(), compare_x);\n\
    \n    polygon res(2 * n);\n    for (int i = 0; i < n; res[k++] = poly[i++]) {\n\
    \      while (k >= 2 && sign(cross(res[k - 1] - res[k - 2], poly[i] - res[k -\
    \ 1])) == -1) {\n        --k;\n      }\n    }\n\n    for (int i = n - 2, t = k\
    \ + 1; i >= 0; res[k++] = poly[i--]) {\n      while (k >= t && sign(cross(res[k\
    \ - 1] - res[k - 2], poly[i] - res[k - 1])) == -1) {\n        --k;\n      }\n\
    \    }\n\n    res.resize(k - 1);\n    return res;\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_4_A.test.cpp\"\
    \n\nusing namespace geometry;\nint main() {\n  int n;\n  cin >> n;\n\n  points\
    \ pts(n);\n  for (auto &p: pts) {\n    cin >> p;\n  }\n\n  polygon poly = convex_hull(pts);\n\
    \n  n = (int)poly.size();\n  cout << n << endl;\n\n  int idx = 0;\n  for (int\
    \ i = 0; i < n; ++i) {\n    if (compare_y(poly[i], poly[idx])) {\n      idx =\
    \ i;\n    }\n  }\n\n  cout << fixed << setprecision(0);\n  for (int i = 0; i <\
    \ n; ++i) {\n    cout << poly[(i + idx) % n] << endl;\n  }\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_4_A\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/polygon.hpp\"\
    \n#include \"../../src/convex_hull.hpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  int n;\n  cin >> n;\n\n  points pts(n);\n  for (auto &p: pts) {\n    cin\
    \ >> p;\n  }\n\n  polygon poly = convex_hull(pts);\n\n  n = (int)poly.size();\n\
    \  cout << n << endl;\n\n  int idx = 0;\n  for (int i = 0; i < n; ++i) {\n   \
    \ if (compare_y(poly[i], poly[idx])) {\n      idx = i;\n    }\n  }\n\n  cout <<\
    \ fixed << setprecision(0);\n  for (int i = 0; i < n; ++i) {\n    cout << poly[(i\
    \ + idx) % n] << endl;\n  }\n}\n"
  dependsOn:
  - src/polygon.hpp
  - src/point.hpp
  - src/base.hpp
  - src/convex_hull.hpp
  - src/compare.hpp
  - src/product.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_4_A.test.cpp
  requiredBy: []
  timestamp: '2020-10-27 12:17:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_4_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_4_A.test.cpp
- /verify/test/aoj-cgl/CGL_4_A.test.cpp.html
title: test/aoj-cgl/CGL_4_A.test.cpp
---
