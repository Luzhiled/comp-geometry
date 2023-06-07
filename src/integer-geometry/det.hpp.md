---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  - icon: ':warning:'
    path: src/integer-geometry/point.hpp
    title: src/integer-geometry/point.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/integer-geometry/argcmp.hpp
    title: src/integer-geometry/argcmp.hpp
  - icon: ':warning:'
    path: src/integer-geometry/twice_area.hpp
    title: src/integer-geometry/twice_area.hpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-argcmp.cpp
    title: src/integer-geometry/unit-test/unit-test-argcmp.cpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-det.cpp
    title: src/integer-geometry/unit-test/unit-test-det.cpp
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-twice_area.cpp
    title: src/integer-geometry/unit-test/unit-test-twice_area.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/integer-geometry/det.hpp\"\n\n#line 2 \"src/integer-geometry/point.hpp\"\
    \n\n#line 2 \"src/integer-geometry/alias.hpp\"\n\n#include <cstddef>\n#include\
    \ <cstdint>\n\nnamespace intgeometry2d {\n  using isize = std::ptrdiff_t;\n  using\
    \ usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n  using i64 = std::int_fast64_t;\n\
    \  using u32 = std::uint_fast32_t;\n  using u64 = std::uint_fast64_t;\n} // intgeometry2d\n\
    #line 4 \"src/integer-geometry/point.hpp\"\n\nnamespace intgeometry2d {\n\n  template<\
    \ typename Z >\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n    lattice_point()\
    \ {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n    \n    Z x() const\
    \ { return x_; }\n    Z y() const { return y_; }\n\n    bool operator==(const\
    \ lattice_point &p) const { return x_ == p.x_ and y_ == p.y_; }\n    bool operator!=(const\
    \ lattice_point &p) const { return x_ != p.x_ or  y_ != p.y_; }\n\n    lattice_point\
    \ operator+(lattice_point p) { return lattice_point(x_ + p.x_, y_ + p.y_); }\n\
    \    lattice_point operator-(lattice_point p) { return lattice_point(x_ - p.x_,\
    \ y_ - p.y_); }\n\n    Z norm() const { return x_ * x_ + y_ * y_; }\n  };\n\n\
    } // intgeometry2d\n#line 4 \"src/integer-geometry/det.hpp\"\n\nnamespace intgeometry2d\
    \ {\n\n  template< typename Z >\n  Z det(const lattice_point<Z> &a, const lattice_point<Z>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n} // intgeometry2d\n"
  code: "#pragma once\n\n#include \"point.hpp\"\n\nnamespace intgeometry2d {\n\n \
    \ template< typename Z >\n  Z det(const lattice_point<Z> &a, const lattice_point<Z>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n} // intgeometry2d\n"
  dependsOn:
  - src/integer-geometry/point.hpp
  - src/integer-geometry/alias.hpp
  isVerificationFile: false
  path: src/integer-geometry/det.hpp
  requiredBy:
  - src/integer-geometry/argcmp.hpp
  - src/integer-geometry/unit-test/unit-test-det.cpp
  - src/integer-geometry/unit-test/unit-test-argcmp.cpp
  - src/integer-geometry/unit-test/unit-test-twice_area.cpp
  - src/integer-geometry/twice_area.hpp
  timestamp: '2022-05-14 03:05:02+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/det.hpp
layout: document
redirect_from:
- /library/src/integer-geometry/det.hpp
- /library/src/integer-geometry/det.hpp.html
title: src/integer-geometry/det.hpp
---
