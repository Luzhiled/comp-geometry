---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/angle.hpp
    title: src/angle.hpp
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.00000001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_1_A.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A\n\
    // verification-helper: ERROR 0.00000001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/projection.hpp\"\n\n#line 4 \"src/projection.hpp\"\nusing\
    \ namespace std;\n\n#line 2 \"src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing\
    \ namespace std;\n\n// base\nnamespace geometry {\n    using real_number = long\
    \ double;\n\n    const real_number eps = 1e-8;\n    const real_number pi = acos(-1);\n\
    \n    inline int sign(real_number r) {\n        if (r < -eps) return -1;\n   \
    \     if (r > +eps) return +1;\n        return 0;\n    }\n\n    inline bool is_equal(real_number\
    \ r1, real_number r2) {\n        return sign(r1 - r2) == 0;\n    }\n}\n#line 2\
    \ \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\nusing namespace std;\n\n#line\
    \ 7 \"src/point.hpp\"\n\n// point\nnamespace geometry {\n  using point = complex<\
    \ real_number >;\n  using points = vector< point >;\n\n  istream &operator>>(istream\
    \ &is, point &p) {\n    real_number x, y;\n    is >> x >> y;\n    p = point(x,\
    \ y);\n    return is;\n  }\n\n  ostream &operator<<(ostream &os, const point &p)\
    \ {\n    return os << p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const\
    \ point &p, const real_number &k) {\n    return point(p.real() * k, p.imag() *\
    \ k);\n  }\n\n  point rotate(const real_number &theta, const point &p) {\n   \
    \ return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n        sin(theta)\
    \ * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line 2 \"src/line.hpp\"\n\n\
    #line 4 \"src/line.hpp\"\nusing namespace std;\n\n#line 7 \"src/line.hpp\"\n\n\
    // line \nnamespace geometry {\n  struct line {\n    point a, b;\n\n    line()\
    \ = default;\n    line(point a, point b) : a(a), b(b) {}\n  };\n\n  using lines\
    \ = vector< line >;\n}\n#line 2 \"src/angle.hpp\"\n\n#line 4 \"src/angle.hpp\"\
    \nusing namespace std;\n\n#line 7 \"src/angle.hpp\"\n\n// angle\nnamespace geometry\
    \ {\n    real_number cross(const point &a, const point &b) {\n        return a.real()\
    \ * b.imag() - a.imag() * b.real();\n    }\n\n    real_number dot(const point\
    \ &a, const point &b) {\n        return a.real() * b.real() + a.imag() * b.imag();\n\
    \    }\n\n    real_number radian_to_degree(real_number theta) {\n        return\
    \ theta * 180.0 / pi;\n    }\n\n    real_number degree_to_radian(const real_number\
    \ deg) {\n        return deg * pi / 180.0;\n    }\n\n    real_number get_smaller_angle(const\
    \ point &a, const point &b, const point &c) {\n        const point v(b - a), w(c\
    \ - b);\n        real_number alpha = atan2(v.imag(), v.real());\n        real_number\
    \ beta = atan2(w.imag(), w.real());\n        if (alpha > beta) swap(alpha, beta);\n\
    \        real_number theta = beta - alpha;\n        return min(theta, 2 * pi -\
    \ theta);\n    }\n}\n#line 10 \"src/projection.hpp\"\n\n// projection\nnamespace\
    \ geometry {\n  point projection(const line &l, const point &p) {\n    real_number\
    \ t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n    return l.a + (l.a - l.b)\
    \ * t;\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_1_A.test.cpp\"\n\nusing namespace geometry;\n\
    int main() {\n  point p1, p2;\n  cin >> p1 >> p2;\n\n  line l(p1, p2);\n\n  int\
    \ q;\n  cin >> q;\n\n  cout << fixed << setprecision(15);\n  while (q--) {\n \
    \   point p;\n    cin >> p;\n\n    cout << projection(l, p) << endl;\n  }\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_1_A\n\
    // verification-helper: ERROR 0.00000001\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#include \"../../src/projection.hpp\"\n\nusing namespace geometry;\n\
    int main() {\n  point p1, p2;\n  cin >> p1 >> p2;\n\n  line l(p1, p2);\n\n  int\
    \ q;\n  cin >> q;\n\n  cout << fixed << setprecision(15);\n  while (q--) {\n \
    \   point p;\n    cin >> p;\n\n    cout << projection(l, p) << endl;\n  }\n}\n"
  dependsOn:
  - src/projection.hpp
  - src/base.hpp
  - src/point.hpp
  - src/line.hpp
  - src/angle.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_1_A.test.cpp
  requiredBy: []
  timestamp: '2020-10-14 18:34:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_1_A.test.cpp
- /verify/test/aoj-cgl/CGL_1_A.test.cpp.html
title: test/aoj-cgl/CGL_1_A.test.cpp
---
