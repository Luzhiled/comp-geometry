---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_orthogonal.hpp
    title: src/is_orthogonal.hpp
  - icon: ':heavy_check_mark:'
    path: src/is_parallel.hpp
    title: src/is_parallel.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_2_A.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/is_parallel.hpp\"\
    \n\n#line 4 \"src/is_parallel.hpp\"\nusing namespace std;\n\n#line 2 \"src/base.hpp\"\
    \n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\n// base\nnamespace geometry\
    \ {\n    using real_number = long double;\n\n    const real_number eps = 1e-8;\n\
    \    const real_number pi = acos(-1);\n\n    inline int sign(real_number r) {\n\
    \        if (r < -eps) return -1;\n        if (r > +eps) return +1;\n        return\
    \ 0;\n    }\n\n    inline bool is_equal(real_number r1, real_number r2) {\n  \
    \      return sign(r1 - r2) == 0;\n    }\n}\n#line 2 \"src/line.hpp\"\n\n#line\
    \ 4 \"src/line.hpp\"\nusing namespace std;\n\n#line 2 \"src/point.hpp\"\n\n#line\
    \ 4 \"src/point.hpp\"\nusing namespace std;\n\n#line 7 \"src/point.hpp\"\n\n//\
    \ point\nnamespace geometry {\n  using point = complex< real_number >;\n  using\
    \ points = vector< point >;\n\n  istream &operator>>(istream &is, point &p) {\n\
    \    real_number x, y;\n    is >> x >> y;\n    p = point(x, y);\n    return is;\n\
    \  }\n\n  ostream &operator<<(ostream &os, const point &p) {\n    return os <<\
    \ p.real() << \" \" << p.imag();\n  }\n\n  point operator*(const point &p, const\
    \ real_number &k) {\n    return point(p.real() * k, p.imag() * k);\n  }\n\n  point\
    \ rotate(const real_number &theta, const point &p) {\n    return point(cos(theta)\
    \ * p.real() + sin(-theta) * p.imag(),\n        sin(theta) * p.real() + cos(-theta)\
    \ * p.imag());\n  }\n}\n#line 7 \"src/line.hpp\"\n\n// line \nnamespace geometry\
    \ {\n  struct line {\n    point a, b;\n\n    line() = default;\n    line(point\
    \ a, point b) : a(a), b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line\
    \ 2 \"src/product.hpp\"\n\n#line 4 \"src/product.hpp\"\nusing namespace std;\n\
    \n#line 7 \"src/product.hpp\"\n\n// product\nnamespace geometry {\n    real_number\
    \ cross(const point &a, const point &b) {\n        return a.real() * b.imag()\
    \ - a.imag() * b.real();\n    }\n\n    real_number dot(const point &a, const point\
    \ &b) {\n        return a.real() * b.real() + a.imag() * b.imag();\n    }\n}\n\
    #line 9 \"src/is_parallel.hpp\"\n\n// parallel\nnamespace geometry {\n  bool is_parallel(const\
    \ line &l1, const line &l2) {\n    return is_equal(cross(l1.b - l1.a, l2.b - l2.a),\
    \ 0);\n  }\n}\n#line 2 \"src/is_orthogonal.hpp\"\n\n#line 4 \"src/is_orthogonal.hpp\"\
    \nusing namespace std;\n\n#line 9 \"src/is_orthogonal.hpp\"\n\n// orthogonal\n\
    namespace geometry {\n  bool is_orthogonal(const line &l1, const line &l2) {\n\
    \    return is_equal(dot(l1.a - l1.b, l2.a - l2.b), 0);\n  }\n}\n#line 8 \"test/aoj-cgl/CGL_2_A.test.cpp\"\
    \n\nusing namespace geometry;\nint main() {\n  int q;\n  cin >> q;\n\n  while\
    \ (q--) {\n    line l1, l2;\n    cin >> l1.a >> l1.b >> l2.a >> l2.b;\n\n    if\
    \ (is_parallel(l1, l2)) {\n      cout << 2 << endl;\n    } else if (is_orthogonal(l1,\
    \ l2)) {\n      cout << 1 << endl;\n    } else {\n      cout << 0 << endl;\n \
    \   }\n  }\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_A\n\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/is_parallel.hpp\"\
    \n#include \"../../src/is_orthogonal.hpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  int q;\n  cin >> q;\n\n  while (q--) {\n    line l1, l2;\n    cin >> l1.a\
    \ >> l1.b >> l2.a >> l2.b;\n\n    if (is_parallel(l1, l2)) {\n      cout << 2\
    \ << endl;\n    } else if (is_orthogonal(l1, l2)) {\n      cout << 1 << endl;\n\
    \    } else {\n      cout << 0 << endl;\n    }\n  }\n}\n"
  dependsOn:
  - src/is_parallel.hpp
  - src/base.hpp
  - src/line.hpp
  - src/point.hpp
  - src/product.hpp
  - src/is_orthogonal.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_2_A.test.cpp
  requiredBy: []
  timestamp: '2020-10-15 00:41:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_2_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_2_A.test.cpp
- /verify/test/aoj-cgl/CGL_2_A.test.cpp.html
title: test/aoj-cgl/CGL_2_A.test.cpp
---
