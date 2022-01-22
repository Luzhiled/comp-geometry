---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/util/impl_kth_select.hpp
    title: src/util/impl_kth_select.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/util/median_value.hpp\"\n#include <vector>\n#include\
    \ <functional>\n#include <cstddef>\n\n#line 1 \"src/util/impl_kth_select.hpp\"\
    \n#include <algorithm>\n#line 4 \"src/util/impl_kth_select.hpp\"\n\ntemplate<\
    \ class RandomAccessIterator, class Compare >\nRandomAccessIterator impl_smallsize_kth_select(\n\
    \    RandomAccessIterator first, \n    RandomAccessIterator last, \n    std::size_t\
    \ k,\n    Compare comp) \n{\n  std::sort(first, last, comp);\n  return (first\
    \ + k);\n}\n\ntemplate< typename T, class RandomAccessIterator, class Compare\
    \ >\nT impl_kth_select(\n    RandomAccessIterator first,\n    RandomAccessIterator\
    \ last,\n    std::size_t k,\n    Compare comp) \n{\n  // TODO: implementation\n\
    \  return *impl_smallsize_kth_select(first, last, k, comp);\n}\n#line 6 \"src/util/median_value.hpp\"\
    \n\ntemplate< typename T >\nT median_value(std::vector< T > vs) {\n  return impl_kth_select(std::begin(vs),\
    \ std::end(vs), k, std::less< T >());\n}\n\ntemplate< typename T, class Compare\
    \ >\nT median_value(std::vector< T > vs, Compare comp) {\n  std::assert(vs.size()\
    \ != 0);\n\n  std::size_t k = vs.size() / 2;\n  return impl_kth_select(std::begin(vs),\
    \ std::end(vs), k, comp);\n}\n"
  code: "#include <vector>\n#include <functional>\n#include <cstddef>\n\n#include\
    \ \"impl_kth_select.hpp\"\n\ntemplate< typename T >\nT median_value(std::vector<\
    \ T > vs) {\n  return impl_kth_select(std::begin(vs), std::end(vs), k, std::less<\
    \ T >());\n}\n\ntemplate< typename T, class Compare >\nT median_value(std::vector<\
    \ T > vs, Compare comp) {\n  std::assert(vs.size() != 0);\n\n  std::size_t k =\
    \ vs.size() / 2;\n  return impl_kth_select(std::begin(vs), std::end(vs), k, comp);\n\
    }\n"
  dependsOn:
  - src/util/impl_kth_select.hpp
  isVerificationFile: false
  path: src/util/median_value.hpp
  requiredBy: []
  timestamp: '2022-01-23 04:18:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/util/median_value.hpp
layout: document
redirect_from:
- /library/src/util/median_value.hpp
- /library/src/util/median_value.hpp.html
title: src/util/median_value.hpp
---
