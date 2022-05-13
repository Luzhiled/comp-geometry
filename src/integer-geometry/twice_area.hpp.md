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
    path: src/integer-geometry/nidx.hpp
    title: src/integer-geometry/nidx.hpp
  - icon: ':warning:'
    path: src/integer-geometry/point.hpp
    title: src/integer-geometry/point.hpp
  - icon: ':warning:'
    path: src/integer-geometry/polygon.hpp
    title: src/integer-geometry/polygon.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/integer-geometry/unit-test/unit-test-twice_area.cpp
    title: src/integer-geometry/unit-test/unit-test-twice_area.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/integer-geometry/twice_area.hpp\"\n\n#line 2 \"src/integer-geometry/alias.hpp\"\
    \n\n#include <cstddef>\n#include <cstdint>\n\nnamespace intgeometry2d {\n  using\
    \ isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
    \  using i64 = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using\
    \ u64 = std::uint_fast64_t;\n} // intgeometry2d\n#line 2 \"src/integer-geometry/polygon.hpp\"\
    \n\n#include <vector>\n\n#line 2 \"src/integer-geometry/point.hpp\"\n\n#line 4\
    \ \"src/integer-geometry/point.hpp\"\n\nnamespace intgeometry2d {\n\n  template<\
    \ typename Z >\n  class lattice_point {\n    Z x_, y_;\n\n  public:\n    lattice_point()\
    \ {}\n    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}\n    \n    Z x() const\
    \ { return x_; }\n    Z y() const { return y_; }\n\n    bool operator==(const\
    \ lattice_point &p) const { return x_ == p.x_ and y_ == p.y_; }\n    bool operator!=(const\
    \ lattice_point &p) const { return x_ != p.x_ or  y_ != p.y_; }\n\n    lattice_point\
    \ operator+(lattice_point p) { return lattice_point(x_ + p.x_, y_ + p.y_); }\n\
    \    lattice_point operator-(lattice_point p) { return lattice_point(x_ - p.x_,\
    \ y_ - p.y_); }\n\n    Z norm() const { return x_ * x_ + y_ * y_; }\n  };\n\n\
    } // intgeometry2d\n#line 6 \"src/integer-geometry/polygon.hpp\"\n\nnamespace\
    \ intgeometry2d {\n\n  template< typename Z >\n  using polygon = std::vector<\
    \ lattice_point<Z> >;\n\n} // intgeometry2d\n#line 2 \"src/integer-geometry/det.hpp\"\
    \n\n#line 4 \"src/integer-geometry/det.hpp\"\n\nnamespace intgeometry2d {\n\n\
    \  template< typename Z >\n  Z det(const lattice_point<Z> &a, const lattice_point<Z>\
    \ &b) {\n    return a.x() * b.y() - a.y() * b.x();\n  }\n\n} // intgeometry2d\n\
    #line 2 \"src/integer-geometry/nidx.hpp\"\n\n#line 4 \"src/integer-geometry/nidx.hpp\"\
    \n\nnamespace intgeometry2d {\n  inline usize nidx(usize idx, usize size) {\n\
    \    return idx + 1 == size ? 0 : idx + 1;\n  }\n} // intgeometry2d\n#line 7 \"\
    src/integer-geometry/twice_area.hpp\"\n\nnamespace intgeometry2d {\n  \n  template<\
    \ typename Z >\n  Z twice_signed_area(const polygon<Z> &poly) {\n    Z s = Z(0);\n\
    \    for (usize i = 0; i < poly.size(); i++) {\n      s += det(poly[i], poly[nidx(i,\
    \ poly.size())]);\n    }\n    return s;\n  }\n\n  template< typename Z >\n  Z\
    \ twice_unsigned_area(const polygon<Z> &poly) {\n    return abs(twice_signed_area(poly));\n\
    \  }\n\n} // intgeometry2d\n"
  code: "#pragma once\n\n#include \"alias.hpp\"\n#include \"polygon.hpp\"\n#include\
    \ \"det.hpp\"\n#include \"nidx.hpp\"\n\nnamespace intgeometry2d {\n  \n  template<\
    \ typename Z >\n  Z twice_signed_area(const polygon<Z> &poly) {\n    Z s = Z(0);\n\
    \    for (usize i = 0; i < poly.size(); i++) {\n      s += det(poly[i], poly[nidx(i,\
    \ poly.size())]);\n    }\n    return s;\n  }\n\n  template< typename Z >\n  Z\
    \ twice_unsigned_area(const polygon<Z> &poly) {\n    return abs(twice_signed_area(poly));\n\
    \  }\n\n} // intgeometry2d\n"
  dependsOn:
  - src/integer-geometry/alias.hpp
  - src/integer-geometry/polygon.hpp
  - src/integer-geometry/point.hpp
  - src/integer-geometry/det.hpp
  - src/integer-geometry/nidx.hpp
  isVerificationFile: false
  path: src/integer-geometry/twice_area.hpp
  requiredBy:
  - src/integer-geometry/unit-test/unit-test-twice_area.cpp
  timestamp: '2022-05-14 03:19:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/twice_area.hpp
layout: document
redirect_from:
- /library/src/integer-geometry/twice_area.hpp
- /library/src/integer-geometry/twice_area.hpp.html
title: src/integer-geometry/twice_area.hpp
---
