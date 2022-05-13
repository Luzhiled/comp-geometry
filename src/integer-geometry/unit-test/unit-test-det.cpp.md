---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  - icon: ':warning:'
    path: src/integer-geometry/det.hpp
    title: src/integer-geometry/det.hpp
  - icon: ':warning:'
    path: src/integer-geometry/point.hpp
    title: src/integer-geometry/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/integer-geometry/unit-test/unit-test-det.cpp\"\n#include\
    \ <cassert>\n\n#line 2 \"src/integer-geometry/point.hpp\"\n\n#line 1 \"src/integer-geometry/alias.hpp\"\
    \n#include <cstddef>\n#include <cstdint>\n\nnamespace intgeometry2d {\n  using\
    \ isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
    \  using i64 = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using\
    \ u64 = std::uint_fast64_t;\n} // intgeometry2d\n#line 4 \"src/integer-geometry/point.hpp\"\
    \n\nnamespace intgeometry2d {\n\n  template< typename Z >\n  class lattice_point\
    \ {\n    Z x_, y_;\n\n  public:\n    lattice_point() {}\n    lattice_point(Z x_,\
    \ Z y_) : x_(x_), y_(y_) {}\n    \n    Z x() const { return x_; }\n    Z y() const\
    \ { return y_; }\n\n    bool operator==(const lattice_point &p) const { return\
    \ x_ == p.x_ and y_ == p.y_; }\n    bool operator!=(const lattice_point &p) const\
    \ { return x_ != p.x_ or  y_ != p.y_; }\n\n    lattice_point operator+(lattice_point\
    \ p) { return lattice_point(x_ + p.x_, y_ + p.y_); }\n    lattice_point operator-(lattice_point\
    \ p) { return lattice_point(x_ - p.x_, y_ - p.y_); }\n\n    Z norm() const { return\
    \ x_ * x_ + y_ * y_; }\n  };\n\n} // intgeometry2d\n#line 2 \"src/integer-geometry/det.hpp\"\
    \n\nnamespace intgeometry2d {\n\n  template< typename Z >\n  Z det(const lattice_point<Z>\
    \ &a, const lattice_point<Z> &b) {\n    return a.x() * b.y() - a.y() * b.x();\n\
    \  }\n\n} // intgeometry2d\n#line 4 \"src/integer-geometry/unit-test/unit-test-det.cpp\"\
    \n\nint main() {\n  using intgeometry2d::i64;\n  using intgeometry2d::lattice_point;\n\
    \  using intgeometry2d::det;\n\n  using LP64 = lattice_point<i64>;\n  assert(det(LP64(12345,\
    \ 67890), LP64(3141592, 653589)) == -205'214'124'675ll);\n}\n"
  code: "#include <cassert>\n\n#include \"../det.hpp\"\n\nint main() {\n  using intgeometry2d::i64;\n\
    \  using intgeometry2d::lattice_point;\n  using intgeometry2d::det;\n\n  using\
    \ LP64 = lattice_point<i64>;\n  assert(det(LP64(12345, 67890), LP64(3141592, 653589))\
    \ == -205'214'124'675ll);\n}\n"
  dependsOn:
  - src/integer-geometry/det.hpp
  - src/integer-geometry/point.hpp
  - src/integer-geometry/alias.hpp
  isVerificationFile: false
  path: src/integer-geometry/unit-test/unit-test-det.cpp
  requiredBy: []
  timestamp: '2022-05-14 02:43:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/unit-test/unit-test-det.cpp
layout: document
redirect_from:
- /library/src/integer-geometry/unit-test/unit-test-det.cpp
- /library/src/integer-geometry/unit-test/unit-test-det.cpp.html
title: src/integer-geometry/unit-test/unit-test-det.cpp
---
