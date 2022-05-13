---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
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
  bundledCode: "#line 1 \"src/integer-geometry/unit-test/unit-test-point.cpp\"\n#include\
    \ <cassert>\n\n#line 1 \"src/integer-geometry/alias.hpp\"\n#include <cstddef>\n\
    #include <cstdint>\n\nnamespace intgeometry2d {\n  using isize = std::ptrdiff_t;\n\
    \  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n  using i64\
    \ = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using u64 = std::uint_fast64_t;\n\
    } // intgeometry2d\n#line 2 \"src/integer-geometry/point.hpp\"\n\nnamespace intgeometry2d\
    \ {\n\n  template< typename Z>\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n\
    \    lattice_point() {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n \
    \   \n    Z x() const { return x_; }\n    Z y() const { return y_; }\n\n    bool\
    \ operator==(const lattice_point &p) const { return x_ == p.x_ and y_ == p.y_;\
    \ }\n    bool operator!=(const lattice_point &p) const { return x_ != p.x_ or\
    \  y_ != p.y_; }\n\n    lattice_point operator+(lattice_point p) { return lattice_point(x_\
    \ + p.x_, y_ + p.y_); }\n    lattice_point operator-(lattice_point p) { return\
    \ lattice_point(x_ - p.x_, y_ - p.y_); }\n\n    Z norm() { return x_ * x_ + y_\
    \ * y_; }\n  };\n\n} // intgeometry2d\n#line 4 \"src/integer-geometry/unit-test/unit-test-point.cpp\"\
    \n\nint main() {\n  using intgeometry2d::lattice_point;\n  using intgeometry2d::i32;\n\
    \n  using LP32 = lattice_point<i32>;\n  assert(LP32(4, 8).x() == 4);\n  assert(LP32(4,\
    \ 8).y() == 8);\n\n  assert(LP32(4, 8) == LP32(4, 8));\n  assert(LP32(4, 8) !=\
    \ LP32(6, 8));\n  assert(LP32(4, 8) != LP32(4, 12));\n  assert(LP32(4, 8) != LP32(7,\
    \ 12));\n\n  assert((LP32(4, 8) + LP32(6, 6)) == LP32(10, 14));\n  assert((LP32(4,\
    \ 8) - LP32(6, 6)) == LP32(-2, 2));\n\n  assert(LP32(4, 8).norm() == 80);\n}\n"
  code: "#include <cassert>\n\n#include \"../point.hpp\"\n\nint main() {\n  using\
    \ intgeometry2d::lattice_point;\n  using intgeometry2d::i32;\n\n  using LP32 =\
    \ lattice_point<i32>;\n  assert(LP32(4, 8).x() == 4);\n  assert(LP32(4, 8).y()\
    \ == 8);\n\n  assert(LP32(4, 8) == LP32(4, 8));\n  assert(LP32(4, 8) != LP32(6,\
    \ 8));\n  assert(LP32(4, 8) != LP32(4, 12));\n  assert(LP32(4, 8) != LP32(7, 12));\n\
    \n  assert((LP32(4, 8) + LP32(6, 6)) == LP32(10, 14));\n  assert((LP32(4, 8) -\
    \ LP32(6, 6)) == LP32(-2, 2));\n\n  assert(LP32(4, 8).norm() == 80);\n}\n"
  dependsOn:
  - src/integer-geometry/point.hpp
  - src/integer-geometry/alias.hpp
  isVerificationFile: false
  path: src/integer-geometry/unit-test/unit-test-point.cpp
  requiredBy: []
  timestamp: '2022-05-14 01:40:05+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/unit-test/unit-test-point.cpp
layout: document
redirect_from:
- /library/src/integer-geometry/unit-test/unit-test-point.cpp
- /library/src/integer-geometry/unit-test/unit-test-point.cpp.html
title: src/integer-geometry/unit-test/unit-test-point.cpp
---
