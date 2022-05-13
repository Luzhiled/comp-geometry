---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/integer-geometry/alias.hpp
    title: src/integer-geometry/alias.hpp
  - icon: ':warning:'
    path: src/integer-geometry/ntimes_centroid.hpp
    title: src/integer-geometry/ntimes_centroid.hpp
  - icon: ':warning:'
    path: src/integer-geometry/point.hpp
    title: src/integer-geometry/point.hpp
  - icon: ':warning:'
    path: src/integer-geometry/points.hpp
    title: src/integer-geometry/points.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp\"\
    \n#include <cassert>\n\n#line 2 \"src/integer-geometry/ntimes_centroid.hpp\"\n\
    \n#include <numeric>\n\n#line 2 \"src/integer-geometry/point.hpp\"\n\n#line 2\
    \ \"src/integer-geometry/alias.hpp\"\n\n#include <cstddef>\n#include <cstdint>\n\
    \nnamespace intgeometry2d {\n  using isize = std::ptrdiff_t;\n  using usize =\
    \ std::size_t;\n\n  using i32 = std::int_fast32_t;\n  using i64 = std::int_fast64_t;\n\
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
    } // intgeometry2d\n#line 2 \"src/integer-geometry/points.hpp\"\n\n#include <vector>\n\
    \n#line 6 \"src/integer-geometry/points.hpp\"\n\nnamespace intgeometry2d {\n\n\
    \  template< typename Z >\n  using lattice_points = std::vector< lattice_point<Z>\
    \ >;\n\n} // intgeometry2d\n#line 7 \"src/integer-geometry/ntimes_centroid.hpp\"\
    \n\nnamespace intgeometry2d {\n\n  template< typename Z >\n  lattice_point< Z\
    \ > ntimes_centroid(const lattice_points<Z> &pts) {\n    return std::accumulate(pts.begin(),\
    \ pts.end(), lattice_point<Z>(0, 0));\n  }\n\n} // intgeometry2d\n#line 4 \"src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp\"\
    \n\nint main() {\n  using intgeometry2d::i32;\n  using LP32 = intgeometry2d::lattice_point<i32>;\n\
    \  using intgeometry2d::lattice_points;\n  using intgeometry2d::ntimes_centroid;\n\
    \n  lattice_points<i32> pts({\n    LP32(1, 5),\n    LP32(4, 8),\n    LP32(-5,\
    \ 0),\n    LP32(-8, -9)\n  });\n\n  assert(ntimes_centroid(pts) == LP32(-8, 4));\n\
    }\n"
  code: "#include <cassert>\n\n#include \"../ntimes_centroid.hpp\"\n\nint main() {\n\
    \  using intgeometry2d::i32;\n  using LP32 = intgeometry2d::lattice_point<i32>;\n\
    \  using intgeometry2d::lattice_points;\n  using intgeometry2d::ntimes_centroid;\n\
    \n  lattice_points<i32> pts({\n    LP32(1, 5),\n    LP32(4, 8),\n    LP32(-5,\
    \ 0),\n    LP32(-8, -9)\n  });\n\n  assert(ntimes_centroid(pts) == LP32(-8, 4));\n\
    }\n"
  dependsOn:
  - src/integer-geometry/ntimes_centroid.hpp
  - src/integer-geometry/point.hpp
  - src/integer-geometry/alias.hpp
  - src/integer-geometry/points.hpp
  isVerificationFile: false
  path: src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp
  requiredBy: []
  timestamp: '2022-05-14 03:51:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp
layout: document
redirect_from:
- /library/src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp
- /library/src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp.html
title: src/integer-geometry/unit-test/unit-test-ntimes_centroid.cpp
---
