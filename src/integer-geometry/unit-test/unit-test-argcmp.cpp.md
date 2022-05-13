---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  - icon: ':warning:'
    path: src/integer-geometry/argcmp.hpp
    title: src/integer-geometry/argcmp.hpp
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
  bundledCode: "#line 1 \"src/integer-geometry/unit-test/unit-test-argcmp.cpp\"\n\
    #include <cassert>\n#include <vector>\n\n#line 1 \"src/integer-geometry/alias.hpp\"\
    \n#include <cstddef>\n#include <cstdint>\n\nnamespace intgeometry2d {\n  using\
    \ isize = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
    \  using i64 = std::int_fast64_t;\n  using u32 = std::uint_fast32_t;\n  using\
    \ u64 = std::uint_fast64_t;\n} // intgeometry2d\n#line 1 \"src/integer-geometry/argcmp.hpp\"\
    \n#include <utility>\n\n#line 2 \"src/integer-geometry/point.hpp\"\n\n#line 3\
    \ \"src/integer-geometry/alias.hpp\"\n\nnamespace intgeometry2d {\n  using isize\
    \ = std::ptrdiff_t;\n  using usize = std::size_t;\n\n  using i32 = std::int_fast32_t;\n\
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
    \  }\n\n} // intgeometry2d\n#line 5 \"src/integer-geometry/argcmp.hpp\"\n\nnamespace\
    \ intgeometry2d {\n  template< typename Z >\n  bool argcmp(const lattice_point<Z>\
    \ &a, const lattice_point<Z> &b) {\n    using std::pair;\n    bool fa = pair(a.y(),\
    \ a.x()) < pair<Z, Z>(0, 0);\n    bool fb = pair(b.y(), b.x()) < pair<Z, Z>(0,\
    \ 0);\n    Z d = det(a, b);\n    return fa != fb ? fa < fb : (d == 0 ? a.norm()\
    \ < b.norm() : d > 0);\n  }\n} // intgeometry2d\n\n#line 6 \"src/integer-geometry/unit-test/unit-test-argcmp.cpp\"\
    \n\nint main() {\n  using std::vector;\n\n  using intgeometry2d::i32;\n  using\
    \ intgeometry2d::usize;\n  using LP32 = intgeometry2d::lattice_point<i32>;\n \
    \ using intgeometry2d::argcmp;\n\n  vector< LP32 > pts({\n    LP32( 0,  0),\n\
    \    LP32( 1,  0), LP32( 2,  0),\n    LP32( 1,  1), LP32( 2,  2),\n    LP32( 0,\
    \  1), LP32( 0,  2),\n    LP32(-1,  1), LP32(-2,  2),\n    LP32(-1,  0), LP32(-2,\
    \  0),\n    LP32(-1, -1), LP32(-2, -2),\n    LP32( 0, -1), LP32( 0, -2),\n   \
    \ LP32( 1, -1), LP32( 2, -2)\n  });\n  \n  for (usize i = 0; i < pts.size(); i++)\
    \ {\n    for (usize j = 0; j < pts.size(); j++) {\n      assert(argcmp(pts[i],\
    \ pts[j]) == (i < j));\n    }\n  }\n}\n"
  code: "#include <cassert>\n#include <vector>\n\n#include \"../alias.hpp\"\n#include\
    \ \"../argcmp.hpp\"\n\nint main() {\n  using std::vector;\n\n  using intgeometry2d::i32;\n\
    \  using intgeometry2d::usize;\n  using LP32 = intgeometry2d::lattice_point<i32>;\n\
    \  using intgeometry2d::argcmp;\n\n  vector< LP32 > pts({\n    LP32( 0,  0),\n\
    \    LP32( 1,  0), LP32( 2,  0),\n    LP32( 1,  1), LP32( 2,  2),\n    LP32( 0,\
    \  1), LP32( 0,  2),\n    LP32(-1,  1), LP32(-2,  2),\n    LP32(-1,  0), LP32(-2,\
    \  0),\n    LP32(-1, -1), LP32(-2, -2),\n    LP32( 0, -1), LP32( 0, -2),\n   \
    \ LP32( 1, -1), LP32( 2, -2)\n  });\n  \n  for (usize i = 0; i < pts.size(); i++)\
    \ {\n    for (usize j = 0; j < pts.size(); j++) {\n      assert(argcmp(pts[i],\
    \ pts[j]) == (i < j));\n    }\n  }\n}\n"
  dependsOn:
  - src/integer-geometry/alias.hpp
  - src/integer-geometry/argcmp.hpp
  - src/integer-geometry/point.hpp
  - src/integer-geometry/alias.hpp
  - src/integer-geometry/det.hpp
  isVerificationFile: false
  path: src/integer-geometry/unit-test/unit-test-argcmp.cpp
  requiredBy: []
  timestamp: '2022-05-14 02:47:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/unit-test/unit-test-argcmp.cpp
layout: document
redirect_from:
- /library/src/integer-geometry/unit-test/unit-test-argcmp.cpp
- /library/src/integer-geometry/unit-test/unit-test-argcmp.cpp.html
title: src/integer-geometry/unit-test/unit-test-argcmp.cpp
---
