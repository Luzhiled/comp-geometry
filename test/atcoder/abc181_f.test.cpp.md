---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/line.hpp
    title: src/real-geometry/class/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/point.hpp
    title: src/real-geometry/class/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/class/vector.hpp
    title: src/real-geometry/class/vector.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/const/eps.hpp
    title: src/real-geometry/common/const/eps.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/float-alias.hpp
    title: src/real-geometry/common/float-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/common/int-alias.hpp
    title: src/real-geometry/common/int-alias.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/distance/distance-lp.hpp
    title: src/real-geometry/distance/distance-lp.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/mapping/projection.hpp
    title: src/real-geometry/mapping/projection.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/numbers/sign.hpp
    title: src/real-geometry/numbers/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/operation/inner-product.hpp
    title: src/real-geometry/operation/inner-product.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/real-number.hpp
    title: src/real-geometry/utility/equals/real-number.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/equals/vector.hpp
    title: src/real-geometry/utility/equals/vector.hpp
  - icon: ':heavy_check_mark:'
    path: src/real-geometry/utility/sign.hpp
    title: src/real-geometry/utility/sign.hpp
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
    \ ERROR 1e-4\n\n#include <iostream>\n#include <vector>\n\n// union find {{{\n\
    class union_find {\n\n    using data_type = int_fast32_t;\n    std::vector< data_type\
    \ > data_;\n\n    public:\n    union_find(std::size_t size) : data_(size, -1)\
    \ {}\n\n    std::size_t size() const {\n        return data_.size();\n    }\n\n\
    \    data_type get_root(data_type x) {\n        return (data_[x] < 0 ? x : data_[x]\
    \ = get_root(data_[x]));\n    }\n\n    bool is_root(data_type x) {\n        return\
    \ x == get_root(x);\n    }\n\n    bool is_same(data_type x, data_type y) {\n \
    \       return get_root(x) == get_root(y);\n    }\n\n    void unite(data_type\
    \ x, data_type y) {\n        x = get_root(x); y = get_root(y);\n        if (x\
    \ == y) return;\n\n        if (data_[x] > data_[y]) std::swap(x, y);\n       \
    \ data_[x] += data_[y];\n        data_[y] = x;\n    }\n\n    data_type element_count(data_type\
    \ x) {\n        return -data_[get_root(x)];\n    }\n};\n// }}}\n\n#line 2 \"src/real-geometry/class/point.hpp\"\
    \n\n#line 2 \"src/real-geometry/class/vector.hpp\"\n\n#include <complex>\n#line\
    \ 5 \"src/real-geometry/class/vector.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  class vec2d : public std::complex< R > {\n    using complex\
    \ = std::complex< R >;\n\n   public:\n    using complex::complex;\n\n    vec2d(const\
    \ complex &c): complex::complex(c) {}\n\n    const R x() const { return this->real();\
    \ }\n    const R y() const { return this->imag(); }\n\n    friend vec2d operator*(const\
    \ vec2d &v, const R &k) {\n      return vec2d(v.x() * k, v.y() * k);\n    }\n\n\
    \    friend vec2d operator*(const R &k, const vec2d &v) {\n      return vec2d(v.x()\
    \ * k, v.y() * k);\n    }\n\n    friend std::istream &operator>>(std::istream\
    \ &is, vec2d &v) {\n      R x, y;\n      is >> x >> y;\n      v = vec2d(x, y);\n\
    \      return is;\n    }\n \n  };\n\n}\n#line 4 \"src/real-geometry/class/point.hpp\"\
    \n\n#line 6 \"src/real-geometry/class/point.hpp\"\n\nnamespace geometry {\n\n\
    \  template< typename R >\n  using point = vec2d<R>;\n\n  template< typename R\
    \ >\n  using points = std::vector< point< R > >;\n\n}\n#line 2 \"src/real-geometry/distance/distance-lp.hpp\"\
    \n\n#line 2 \"src/real-geometry/class/line.hpp\"\n\n#line 2 \"src/real-geometry/utility/equals/vector.hpp\"\
    \n\n#line 2 \"src/real-geometry/utility/equals/real-number.hpp\"\n\n#line 2 \"\
    src/real-geometry/utility/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/const/eps.hpp\"\
    \n\n#line 2 \"src/real-geometry/common/float-alias.hpp\"\n\nnamespace geometry\
    \ {\n\n  using f80 = long double;\n  using f64 = double;\n\n}\n#line 4 \"src/real-geometry/common/const/eps.hpp\"\
    \n\nnamespace geometry {\n\n  inline static f80 &eps() {\n    static f80 EPS =\
    \ 1e-10;\n    return EPS;\n  }\n\n  void set_eps(f80 EPS) {\n    eps() = EPS;\n\
    \  }\n\n}\n#line 2 \"src/real-geometry/numbers/sign.hpp\"\n\n#line 2 \"src/real-geometry/common/int-alias.hpp\"\
    \n\nnamespace geometry {\n\n  using i32 = int;\n  using i64 = long long;\n\n}\n\
    #line 4 \"src/real-geometry/numbers/sign.hpp\"\n\nnamespace geometry::number::sign\
    \ {\n\n  constexpr i32 PLUS  = +1;\n  constexpr i32 ZERO  =  0;\n  constexpr i32\
    \ MINUS = -1;\n\n}\n#line 5 \"src/real-geometry/utility/sign.hpp\"\n\nnamespace\
    \ geometry {\n\n  using namespace geometry::number::sign;\n\n  template< typename\
    \ R >\n  inline int sign(R r) {\n    if (r < -eps()) return MINUS;\n    if (r\
    \ > +eps()) return PLUS;\n    return ZERO;\n  }\n\n}\n#line 4 \"src/real-geometry/utility/equals/real-number.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool equals(R a, R b)\
    \ {\n    return sign(a - b) == 0;\n  }\n\n}\n#line 5 \"src/real-geometry/utility/equals/vector.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  bool equals(const vec2d<R>\
    \ &a, const vec2d<R> &b) {\n    return equals(a.x(), b.x()) and equals(a.y(),\
    \ b.y());\n  }\n\n}\n#line 5 \"src/real-geometry/class/line.hpp\"\n\n#include\
    \ <cassert>\n#line 8 \"src/real-geometry/class/line.hpp\"\n\nnamespace geometry\
    \ {\n\n  template< typename R >\n  class line {\n    using P = point<R>;\n\n \
    \  public:\n    P a, b;\n\n    line() = default;\n    line(P a, P b) : a(a), b(b)\
    \ {\n      assert(not equals(a, b));\n    }\n\n  };\n\n  template< typename R\
    \ >\n  using lines = std::vector< line<R> >;\n\n}\n#line 2 \"src/real-geometry/mapping/projection.hpp\"\
    \n\n#line 2 \"src/real-geometry/operation/inner-product.hpp\"\n\n#line 4 \"src/real-geometry/operation/inner-product.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R inner_product(const\
    \ vec2d<R> &a, const vec2d<R> &b) {\n    return a.x() * b.x() + a.y() * b.y();\n\
    \  }\n\n}\n#line 6 \"src/real-geometry/mapping/projection.hpp\"\n\n#line 8 \"\
    src/real-geometry/mapping/projection.hpp\"\n\nnamespace geometry {\n\n  template<\
    \ typename R >\n  point<R> projection(const line<R> &l, const point<R> &p) {\n\
    \    R t = inner_product<R>(p - l.a, l.a - l.b) / std::norm(l.a - l.b);\n    return\
    \ l.a + (l.a - l.b) * t;\n  }\n\n}\n#line 6 \"src/real-geometry/distance/distance-lp.hpp\"\
    \n\nnamespace geometry {\n\n  template< typename R >\n  R distance_lp(const line<R>\
    \ &l, const point<R> &p) {\n    point<R> pr = projection(l, p);\n    return std::abs(pr\
    \ - p);\n  }\n\n}\n#line 50 \"test/atcoder/abc181_f.test.cpp\"\n\nint main() {\n\
    \  using R = long double;\n  using line = geometry::line<R>;\n  using point =\
    \ geometry::point<R>;\n  using points = geometry::points<R>;\n  using geometry::sign;\n\
    \n  line t(point(0,  100), point(1,  100));\n  line b(point(0, -100), point(1,\
    \ -100));\n\n  int n;\n  std::cin >> n;\n\n  points pts(n);\n  for (auto &p :\
    \ pts) std::cin >> p;\n\n  R ng = 200, ok = 0;\n  for (int lb = 0; lb < 100; lb++)\
    \ {\n    R mid = (ok + ng) / 2;\n\n    union_find uf(n + 2);\n    int T = n, B\
    \ = n + 1;\n    for (int i = 0; i < n; i++) {\n      point p = pts[i];\n     \
    \ if (sign(geometry::distance_lp(t, p) - mid) < 0) uf.unite(T, i);\n      if (sign(geometry::distance_lp(b,\
    \ p) - mid) < 0) uf.unite(B, i);\n    }\n\n    for (int i = 0; i < n; i++) {\n\
    \      for (int j = 0; j < i; j++) {\n        point p = pts[i], q = pts[j];\n\
    \        if (sign(std::abs(p - q) - mid) < 0) uf.unite(i, j);\n      }\n    }\n\
    \n    if (uf.is_same(T, B)) {\n      ng = mid;\n    } else {\n      ok = mid;\n\
    \    }\n  }\n\n  std::cout << ok / 2 << std::endl;\n}\n"
  code: "// verification-helper: PROBLEM https://atcoder.jp/contests/abc181/tasks/abc181_f\n\
    // verification-helper: ERROR 1e-4\n\n#include <iostream>\n#include <vector>\n\
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
    // }}}\n\n#include \"src/real-geometry/class/point.hpp\"\n#include \"src/real-geometry/distance/distance-lp.hpp\"\
    \n#include \"src/real-geometry/utility/sign.hpp\"\n\nint main() {\n  using R =\
    \ long double;\n  using line = geometry::line<R>;\n  using point = geometry::point<R>;\n\
    \  using points = geometry::points<R>;\n  using geometry::sign;\n\n  line t(point(0,\
    \  100), point(1,  100));\n  line b(point(0, -100), point(1, -100));\n\n  int\
    \ n;\n  std::cin >> n;\n\n  points pts(n);\n  for (auto &p : pts) std::cin >>\
    \ p;\n\n  R ng = 200, ok = 0;\n  for (int lb = 0; lb < 100; lb++) {\n    R mid\
    \ = (ok + ng) / 2;\n\n    union_find uf(n + 2);\n    int T = n, B = n + 1;\n \
    \   for (int i = 0; i < n; i++) {\n      point p = pts[i];\n      if (sign(geometry::distance_lp(t,\
    \ p) - mid) < 0) uf.unite(T, i);\n      if (sign(geometry::distance_lp(b, p) -\
    \ mid) < 0) uf.unite(B, i);\n    }\n\n    for (int i = 0; i < n; i++) {\n    \
    \  for (int j = 0; j < i; j++) {\n        point p = pts[i], q = pts[j];\n    \
    \    if (sign(std::abs(p - q) - mid) < 0) uf.unite(i, j);\n      }\n    }\n\n\
    \    if (uf.is_same(T, B)) {\n      ng = mid;\n    } else {\n      ok = mid;\n\
    \    }\n  }\n\n  std::cout << ok / 2 << std::endl;\n}\n"
  dependsOn:
  - src/real-geometry/class/point.hpp
  - src/real-geometry/class/vector.hpp
  - src/real-geometry/distance/distance-lp.hpp
  - src/real-geometry/class/line.hpp
  - src/real-geometry/utility/equals/vector.hpp
  - src/real-geometry/utility/equals/real-number.hpp
  - src/real-geometry/utility/sign.hpp
  - src/real-geometry/common/const/eps.hpp
  - src/real-geometry/common/float-alias.hpp
  - src/real-geometry/numbers/sign.hpp
  - src/real-geometry/common/int-alias.hpp
  - src/real-geometry/mapping/projection.hpp
  - src/real-geometry/operation/inner-product.hpp
  isVerificationFile: true
  path: test/atcoder/abc181_f.test.cpp
  requiredBy: []
  timestamp: '2023-06-05 11:34:11+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/atcoder/abc181_f.test.cpp
layout: document
redirect_from:
- /verify/test/atcoder/abc181_f.test.cpp
- /verify/test/atcoder/abc181_f.test.cpp.html
title: test/atcoder/abc181_f.test.cpp
---
