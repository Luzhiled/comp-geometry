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
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/integer-geometry/circle.hpp\"\n\n#line 2 \"src/integer-geometry/alias.hpp\"\
    \n\n#include <cstddef>\n#include <cstdint>\n\nnamespace intgeometry2d {\n  using\
    \ isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
    \  using i64 = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using\
    \ u64 = std::uint_fast64_t;\n} // intgeometry2d\n#line 2 \"src/integer-geometry/point.hpp\"\
    \n\n#line 4 \"src/integer-geometry/point.hpp\"\n\nnamespace intgeometry2d {\n\n\
    \  template< typename Z >\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n\
    \    lattice_point() {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n \
    \   \n    Z x() const { return x_; }\n    Z y() const { return y_; }\n\n    bool\
    \ operator==(const lattice_point &p) const { return x_ == p.x_ and y_ == p.y_;\
    \ }\n    bool operator!=(const lattice_point &p) const { return x_ != p.x_ or\
    \  y_ != p.y_; }\n\n    lattice_point operator+(lattice_point p) { return lattice_point(x_\
    \ + p.x_, y_ + p.y_); }\n    lattice_point operator-(lattice_point p) { return\
    \ lattice_point(x_ - p.x_, y_ - p.y_); }\n\n    Z norm() const { return x_ * x_\
    \ + y_ * y_; }\n  };\n\n} // intgeometry2d\n#line 5 \"src/integer-geometry/circle.hpp\"\
    \n\nnamespace intgeometry2d {\n\n  template< typename Z >\n  class circle {\n\
    \    lattice_point< Z > center_;\n    Z r_;\n\n   public:\n    circle() {}\n \
    \   circle(lattice_point< Z > center_, Z r_) : center_(center_), r_(r_) {}\n\n\
    \    lattice_point< Z > center() const { return center_; }\n    Z r() const {\
    \ return r_; }\n  };\n\n} // intgeometry2d\n"
  code: "#pragma once\n\n#include \"alias.hpp\"\n#include \"point.hpp\"\n\nnamespace\
    \ intgeometry2d {\n\n  template< typename Z >\n  class circle {\n    lattice_point<\
    \ Z > center_;\n    Z r_;\n\n   public:\n    circle() {}\n    circle(lattice_point<\
    \ Z > center_, Z r_) : center_(center_), r_(r_) {}\n\n    lattice_point< Z > center()\
    \ const { return center_; }\n    Z r() const { return r_; }\n  };\n\n} // intgeometry2d\n"
  dependsOn:
  - src/integer-geometry/alias.hpp
  - src/integer-geometry/point.hpp
  isVerificationFile: false
  path: src/integer-geometry/circle.hpp
  requiredBy: []
  timestamp: '2022-07-15 22:41:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/circle.hpp
layout: document
redirect_from:
- /library/src/integer-geometry/circle.hpp
- /library/src/integer-geometry/circle.hpp.html
title: src/integer-geometry/circle.hpp
---
