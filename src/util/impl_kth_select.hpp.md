---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/util/kth_select.hpp
    title: src/util/kth_select.hpp
  - icon: ':warning:'
    path: src/util/median_value.hpp
    title: src/util/median_value.hpp
  - icon: ':warning:'
    path: test/unittest/util/kth_select.cpp
    title: test/unittest/util/kth_select.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/util/impl_kth_select.hpp\"\n#include <algorithm>\n#include\
    \ <vector>\n#include <cstddef>\n\ntemplate< class RandomAccessIterator, class\
    \ Compare >\nRandomAccessIterator impl_smallsize_kth_select(\n    RandomAccessIterator\
    \ first, \n    RandomAccessIterator last, \n    std::size_t k,\n    Compare comp)\
    \ \n{\n  std::sort(first, last, comp);\n  return (first + k);\n}\n\ntemplate<\
    \ typename T, class RandomAccessIterator, class Compare >\nT impl_kth_select(\n\
    \    RandomAccessIterator first,\n    RandomAccessIterator last,\n    std::size_t\
    \ k,\n    Compare comp) \n{\n  // TODO: implementation\n  return *impl_smallsize_kth_select(first,\
    \ last, k, comp);\n}\n"
  code: "#include <algorithm>\n#include <vector>\n#include <cstddef>\n\ntemplate<\
    \ class RandomAccessIterator, class Compare >\nRandomAccessIterator impl_smallsize_kth_select(\n\
    \    RandomAccessIterator first, \n    RandomAccessIterator last, \n    std::size_t\
    \ k,\n    Compare comp) \n{\n  std::sort(first, last, comp);\n  return (first\
    \ + k);\n}\n\ntemplate< typename T, class RandomAccessIterator, class Compare\
    \ >\nT impl_kth_select(\n    RandomAccessIterator first,\n    RandomAccessIterator\
    \ last,\n    std::size_t k,\n    Compare comp) \n{\n  // TODO: implementation\n\
    \  return *impl_smallsize_kth_select(first, last, k, comp);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/util/impl_kth_select.hpp
  requiredBy:
  - src/util/median_value.hpp
  - src/util/kth_select.hpp
  - test/unittest/util/kth_select.cpp
  timestamp: '2022-01-23 04:17:47+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/util/impl_kth_select.hpp
layout: document
redirect_from:
- /library/src/util/impl_kth_select.hpp
- /library/src/util/impl_kth_select.hpp.html
title: src/util/impl_kth_select.hpp
---
