---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/base.hpp
    title: src/base.hpp
  - icon: ':heavy_check_mark:'
    path: src/distance_lp.hpp
    title: src/distance_lp.hpp
  - icon: ':heavy_check_mark:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/product.hpp
    title: src/product.hpp
  - icon: ':heavy_check_mark:'
    path: src/projection.hpp
    title: src/projection.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    ERROR: 1e-4
    PROBLEM: https://atcoder.jp/contests/abc181/tasks/abc181_f
    links:
    - https://atcoder.jp/contests/abc181/tasks/abc181_f
  bundledCode: "#line 1 \"test/atcoder/abc181_f.test.cpp\"\n// verification-helper:\
    \ PROBLEM https://atcoder.jp/contests/abc181/tasks/abc181_f\n// verification-helper:\
    \ ERROR 1e-4\n\n#include <iostream>\n#include <vector>\nusing namespace std;\n\
    \n// union find {{{\nclass union_find {\n\n    using data_type = int_fast32_t;\n\
    \    std::vector< data_type > data_;\n\n    public:\n    union_find(std::size_t\
    \ size) : data_(size, -1) {}\n\n    std::size_t size() const {\n        return\
    \ data_.size();\n    }\n\n    data_type get_root(data_type x) {\n        return\
    \ (data_[x] < 0 ? x : data_[x] = get_root(data_[x]));\n    }\n\n    bool is_root(data_type\
    \ x) {\n        return x == get_root(x);\n    }\n\n    bool is_same(data_type\
    \ x, data_type y) {\n        return get_root(x) == get_root(y);\n    }\n\n   \
    \ void unite(data_type x, data_type y) {\n        x = get_root(x); y = get_root(y);\n\
    \        if (x == y) return;\n\n        if (data_[x] > data_[y]) std::swap(x,\
    \ y);\n        data_[x] += data_[y];\n        data_[y] = x;\n    }\n\n    data_type\
    \ element_count(data_type x) {\n        return -data_[get_root(x)];\n    }\n};\n\
    // }}}\n\n#line 2 \"src/point.hpp\"\n\n#include <complex>\n#line 5 \"src/point.hpp\"\
    \n#include <cmath>\n#include <istream>\n#include <ostream>\n\n#line 2 \"src/base.hpp\"\
    \n\n#line 4 \"src/base.hpp\"\n\n// base\nnamespace geometry {\n  using namespace\
    \ std;\n  using real_number = long double;\n\n  const real_number PI = acosl(-1);\n\
    \n  inline static real_number &eps() {\n    static real_number EPS = 1e-10;\n\
    \    return EPS;\n  }\n\n  static void set_eps(real_number EPS) {\n    eps() =\
    \ EPS;\n  }\n\n  inline int sign(real_number r) {\n    set_eps(1e-10);\n    if\
    \ (r < -eps()) return -1;\n    if (r > +eps()) return +1;\n    return 0;\n  }\n\
    \n  inline bool equals(real_number r1, real_number r2) {\n    return sign(r1 -\
    \ r2) == 0;\n  }\n}\n#line 10 \"src/point.hpp\"\n\n// point\nnamespace geometry\
    \ {\n  using point = complex< real_number >;\n  using points = vector< point >;\n\
    \n  istream &operator>>(istream &is, point &p) {\n    real_number x, y;\n    is\
    \ >> x >> y;\n    p = point(x, y);\n    return is;\n  }\n\n  ostream &operator<<(ostream\
    \ &os, const point &p) {\n    return os << p.real() << \" \" << p.imag();\n  }\n\
    \n  point operator*(const point &p, const real_number &k) {\n    return point(p.real()\
    \ * k, p.imag() * k);\n  }\n\n  point rotate(const real_number &theta, const point\
    \ &p) {\n    return point(cos(theta) * p.real() + sin(-theta) * p.imag(),\n  \
    \               sin(theta) * p.real() + cos(-theta) * p.imag());\n  }\n\n  bool\
    \ equals(const point &a, const point &b) {\n    return equals(a.real(), b.real())\
    \ and equals(a.imag(), b.imag());\n  }\n}\n\nusing geometry::operator>>;\nusing\
    \ geometry::operator<<;\n#line 2 \"src/line.hpp\"\n\n#line 4 \"src/line.hpp\"\n\
    \n#line 6 \"src/line.hpp\"\n\n// line \nnamespace geometry {\n  struct line {\n\
    \    point a, b;\n\n    line() = default;\n    line(point a, point b) : a(a),\
    \ b(b) {}\n  };\n\n  using lines = vector< line >;\n}\n#line 2 \"src/projection.hpp\"\
    \n\n#line 4 \"src/projection.hpp\"\n\n#line 2 \"src/product.hpp\"\n\n#line 5 \"\
    src/product.hpp\"\n\n// product\nnamespace geometry {\n  real_number cross(const\
    \ point &a, const point &b) {\n    return a.real() * b.imag() - a.imag() * b.real();\n\
    \  }\n\n  real_number dot(const point &a, const point &b) {\n    return a.real()\
    \ * b.real() + a.imag() * b.imag();\n  }\n}\n#line 9 \"src/projection.hpp\"\n\n\
    // projection\nnamespace geometry {\n  point projection(const line &l, const point\
    \ &p) {\n    real_number t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);\n    return\
    \ l.a + (l.a - l.b) * t;\n  }\n}\n#line 5 \"src/distance_lp.hpp\"\n\nnamespace\
    \ geometry {\n  real_number distance_lp(const line &l, const point &p) {\n   \
    \ point pr = projection(l, p);\n    return abs(pr - p);\n  }\n}\n#line 50 \"test/atcoder/abc181_f.test.cpp\"\
    \nusing namespace geometry;\n\nint main() {\n  line t(point(0,  100), point(1,\
    \  100));\n  line b(point(0, -100), point(1, -100));\n\n  int n;\n  cin >> n;\n\
    \n  points pts(n);\n  for (auto &p : pts) cin >> p;\n\n  real_number ng = 200,\
    \ ok = 0;\n  for (int lb = 0; lb < 100; lb++) {\n    real_number mid = (ok + ng)\
    \ / 2;\n\n    union_find uf(n + 2);\n    int T = n, B = n + 1;\n    for (int i\
    \ = 0; i < n; i++) {\n      point p = pts[i];\n      if (sign(distance_lp(t, p)\
    \ - mid) < 0) uf.unite(T, i);\n      if (sign(distance_lp(b, p) - mid) < 0) uf.unite(B,\
    \ i);\n    }\n\n    for (int i = 0; i < n; i++) {\n      for (int j = 0; j < i;\
    \ j++) {\n        point p = pts[i], q = pts[j];\n        if (sign(abs(p - q) -\
    \ mid) < 0) uf.unite(i, j);\n      }\n    }\n\n    if (uf.is_same(T, B)) {\n \
    \     ng = mid;\n    } else {\n      ok = mid;\n    }\n  }\n\n  cout << ok / 2\
    \ << endl;\n}\n"
  code: "// verification-helper: PROBLEM https://atcoder.jp/contests/abc181/tasks/abc181_f\n\
    // verification-helper: ERROR 1e-4\n\n#include <iostream>\n#include <vector>\n\
    using namespace std;\n\n// union find {{{\nclass union_find {\n\n    using data_type\
    \ = int_fast32_t;\n    std::vector< data_type > data_;\n\n    public:\n    union_find(std::size_t\
    \ size) : data_(size, -1) {}\n\n    std::size_t size() const {\n        return\
    \ data_.size();\n    }\n\n    data_type get_root(data_type x) {\n        return\
    \ (data_[x] < 0 ? x : data_[x] = get_root(data_[x]));\n    }\n\n    bool is_root(data_type\
    \ x) {\n        return x == get_root(x);\n    }\n\n    bool is_same(data_type\
    \ x, data_type y) {\n        return get_root(x) == get_root(y);\n    }\n\n   \
    \ void unite(data_type x, data_type y) {\n        x = get_root(x); y = get_root(y);\n\
    \        if (x == y) return;\n\n        if (data_[x] > data_[y]) std::swap(x,\
    \ y);\n        data_[x] += data_[y];\n        data_[y] = x;\n    }\n\n    data_type\
    \ element_count(data_type x) {\n        return -data_[get_root(x)];\n    }\n};\n\
    // }}}\n\n#include \"src/point.hpp\"\n#include \"src/distance_lp.hpp\"\nusing\
    \ namespace geometry;\n\nint main() {\n  line t(point(0,  100), point(1,  100));\n\
    \  line b(point(0, -100), point(1, -100));\n\n  int n;\n  cin >> n;\n\n  points\
    \ pts(n);\n  for (auto &p : pts) cin >> p;\n\n  real_number ng = 200, ok = 0;\n\
    \  for (int lb = 0; lb < 100; lb++) {\n    real_number mid = (ok + ng) / 2;\n\n\
    \    union_find uf(n + 2);\n    int T = n, B = n + 1;\n    for (int i = 0; i <\
    \ n; i++) {\n      point p = pts[i];\n      if (sign(distance_lp(t, p) - mid)\
    \ < 0) uf.unite(T, i);\n      if (sign(distance_lp(b, p) - mid) < 0) uf.unite(B,\
    \ i);\n    }\n\n    for (int i = 0; i < n; i++) {\n      for (int j = 0; j < i;\
    \ j++) {\n        point p = pts[i], q = pts[j];\n        if (sign(abs(p - q) -\
    \ mid) < 0) uf.unite(i, j);\n      }\n    }\n\n    if (uf.is_same(T, B)) {\n \
    \     ng = mid;\n    } else {\n      ok = mid;\n    }\n  }\n\n  cout << ok / 2\
    \ << endl;\n}\n"
  dependsOn:
  - src/point.hpp
  - src/base.hpp
  - src/distance_lp.hpp
  - src/line.hpp
  - src/projection.hpp
  - src/product.hpp
  isVerificationFile: true
  path: test/atcoder/abc181_f.test.cpp
  requiredBy: []
  timestamp: '2022-01-29 19:05:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/atcoder/abc181_f.test.cpp
layout: document
redirect_from:
- /verify/test/atcoder/abc181_f.test.cpp
- /verify/test/atcoder/abc181_f.test.cpp.html
title: test/atcoder/abc181_f.test.cpp
---
