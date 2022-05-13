---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/integer-geometry/det.hpp
    title: src/integer-geometry/det.hpp
  - icon: ':warning:'
    path: src/integer-geometry/dot.hpp
    title: src/integer-geometry/dot.hpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-det.cpp
    title: src/integer-geometry/unit-test/unit-test-det.cpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-dot.cpp
    title: src/integer-geometry/unit-test/unit-test-dot.cpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-point.cpp
    title: src/integer-geometry/unit-test/unit-test-point.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/integer-geometry/alias.hpp\"\n#include <cstddef>\n#include\
    \ <cstdint>\n\nnamespace intgeometry2d {\n  using isize = std::ptrdiff_t;\n  using\
    \ usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n  using i64 = std::int_fast64_t;\n\
    \  using u32 = std::uint_fast32_t;\n  using u64 = std::uint_fast64_t;\n} // intgeometry2d\n\
    #line 2 \"src/integer-geometry/point.hpp\"\n\nnamespace intgeometry2d {\n\n  template<\
    \ typename Z>\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n    lattice_point()\
    \ {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n    \n    Z x() const\
    \ { return x_; }\n    Z y() const { return y_; }\n\n    bool operator==(const\
    \ lattice_point &p) const { return x_ == p.x_ and y_ == p.y_; }\n    bool operator!=(const\
    \ lattice_point &p) const { return x_ != p.x_ or  y_ != p.y_; }\n\n    lattice_point\
    \ operator+(lattice_point p) { return lattice_point(x_ + p.x_, y_ + p.y_); }\n\
    \    lattice_point operator-(lattice_point p) { return lattice_point(x_ - p.x_,\
    \ y_ - p.y_); }\n\n    Z norm() { return x_ * x_ + y_ * y_; }\n  };\n\n} // intgeometry2d\n"
  code: "#include \"alias.hpp\"\n\nnamespace intgeometry2d {\n\n  template< typename\
    \ Z>\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n    lattice_point()\
    \ {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n    \n    Z x() const\
    \ { return x_; }\n    Z y() const { return y_; }\n\n    bool operator==(const\
    \ lattice_point &p) const { return x_ == p.x_ and y_ == p.y_; }\n    bool operator!=(const\
    \ lattice_point &p) const { return x_ != p.x_ or  y_ != p.y_; }\n\n    lattice_point\
    \ operator+(lattice_point p) { return lattice_point(x_ + p.x_, y_ + p.y_); }\n\
    \    lattice_point operator-(lattice_point p) { return lattice_point(x_ - p.x_,\
    \ y_ - p.y_); }\n\n    Z norm() { return x_ * x_ + y_ * y_; }\n  };\n\n} // intgeometry2d\n"
  dependsOn:
  - src/integer-geometry/alias.hpp
  isVerificationFile: false
  path: src/integer-geometry/point.hpp
  requiredBy:
  - src/integer-geometry/unit-test/unit-test-det.cpp
  - src/integer-geometry/unit-test/unit-test-point.cpp
  - src/integer-geometry/unit-test/unit-test-dot.cpp
  - src/integer-geometry/det.hpp
  - src/integer-geometry/dot.hpp
  timestamp: '2022-05-14 01:40:05+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/point.hpp
layout: document
redirect_from:
- /library/src/integer-geometry/point.hpp
- /library/src/integer-geometry/point.hpp.html
title: src/integer-geometry/point.hpp
---
