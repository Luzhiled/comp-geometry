---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/closest_pair.hpp
    title: src/closest_pair.hpp
  - icon: ':heavy_check_mark:'
    path: src/compare.hpp
    title: src/compare.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/util/io_set.hpp
    title: src/util/io_set.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: '0.000001'
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A
  bundledCode: "#line 1 \"test/aoj-cgl/CGL_5_A.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A \n\
    // verification-helper: ERROR 0.000001\n\n#include <iostream>\nusing namespace\
    \ std;\n\n#line 2 \"src/closest_pair.hpp\"\n\n#include <cmath>\n#include <complex>\n\
    #include <algorithm>\n#include <iterator>\nusing namespace std;\n\n#line 2 \"\
    src/base.hpp\"\n\n#line 4 \"src/base.hpp\"\nusing namespace std;\n\n// base\n\
    namespace geometry {\n  using real_number = long double;\n\n  const real_number\
    \ PI = acos(-1);\n\n  inline static real_number &eps() {\n    static real_number\
    \ EPS = 1e-10;\n    return EPS;\n  }\n\n  static void set_eps(real_number EPS)\
    \ {\n    eps() = EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n\
    \    if (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n\
    \  }\n\n  inline bool is_equal(real_number r1, real_number r2) {\n    return sign(r1\
    \ - r2) == 0;\n  }\n}\n#line 2 \"src/point.hpp\"\n\n#line 4 \"src/point.hpp\"\n\
    #include <vector>\n#line 6 \"src/point.hpp\"\n#include <istream>\n#include <ostream>\n\
    using namespace std;\n\n#line 11 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n}\n#line\
    \ 2 \"src/compare.hpp\"\n\nusing namespace std;\n\n#line 7 \"src/compare.hpp\"\
    \n\nnamespace geometry {\n  bool compare_x(const point &a, const point &b) {\n\
    \    return !is_equal(a.real(), b.real()) ? a.real() < b.real() : a.imag() < b.imag();\n\
    \  }\n\n  bool compare_y(const point &a, const point &b) {\n    return !is_equal(a.imag(),\
    \ b.imag()) ? a.imag() < b.imag() : a.real() < b.real();\n  }\n}\n#line 12 \"\
    src/closest_pair.hpp\"\n\nnamespace geometry {\n  real_number impl_closest_pair(points\
    \ &pts, int l, int r) {\n    if (r - l <= 1) return abs(pts[0] - pts[1]);\n  \
    \  int m = (l + r) / 2;\n    real_number x = pts[m].real();\n    real_number d\
    \ = min(impl_closest_pair(pts, l, m), impl_closest_pair(pts, m, r));\n    inplace_merge(pts.begin()\
    \ + l, pts.begin() + m, pts.begin() + r, compare_y);\n\n    points ps;\n    for\
    \ (int i = l; i < r; ++i) {\n      if (sign(abs(pts[i].real() - x) - d) >= 0)\
    \ continue;\n      for (int j = 0; j < (int)ps.size(); ++j) {\n        real_number\
    \ dy = pts[i].imag() - (*next(ps.rbegin(), j)).imag();\n        if (sign(dy -\
    \ d) >= 0) break;\n        d = min(d, abs(pts[i] - *next(ps.rbegin(), j)));\n\
    \      }\n\n      ps.emplace_back(pts[i]);\n    }\n\n    return d;\n  }\n\n  real_number\
    \ closest_pair(points pts) {\n    const real_number INF = 1e18;\n    if (pts.size()\
    \ <= 1) {\n      return INF;\n    }\n\n    sort(pts.begin(), pts.end(), compare_x);\n\
    \n    return impl_closest_pair(pts, 0, pts.size());\n  }\n}\n#line 1 \"src/util/io_set.hpp\"\
    \n#include <iomanip>\n\nclass IoSetup {\n  using u32 = unsigned int;\n\n  void\
    \ set(ostream &os, u32 precision) {\n    os << fixed << setprecision(precision);\n\
    \  }\n\npublic:\n  IoSetup(u32 precision = 15) {\n    cin.tie(0);\n    ios::sync_with_stdio(0);\n\
    \n    set(cout, precision);\n    set(cerr, precision);\n  }\n} iosetup;\n#line\
    \ 9 \"test/aoj-cgl/CGL_5_A.test.cpp\"\n\nusing namespace geometry;\nint main()\
    \ {\n  int n;\n  cin >> n;\n\n  points pts(n);\n  for (auto &p: pts) cin >> p;\n\
    \n  cout << closest_pair(pts) << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/5/CGL_5_A\
    \ \n// verification-helper: ERROR 0.000001\n\n#include <iostream>\nusing namespace\
    \ std;\n\n#include \"../../src/closest_pair.hpp\"\n#include \"../../src/util/io_set.hpp\"\
    \n\nusing namespace geometry;\nint main() {\n  int n;\n  cin >> n;\n\n  points\
    \ pts(n);\n  for (auto &p: pts) cin >> p;\n\n  cout << closest_pair(pts) << endl;\n\
    }\n"
  dependsOn:
  - src/closest_pair.hpp
  - src/base.hpp
  - src/point.hpp
  - src/compare.hpp
  - src/util/io_set.hpp
  isVerificationFile: true
  path: test/aoj-cgl/CGL_5_A.test.cpp
  requiredBy: []
  timestamp: '2020-11-16 08:02:06+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-cgl/CGL_5_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-cgl/CGL_5_A.test.cpp
- /verify/test/aoj-cgl/CGL_5_A.test.cpp.html
title: test/aoj-cgl/CGL_5_A.test.cpp
---
