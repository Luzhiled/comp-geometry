---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/util/impl_kth_select.hpp
    title: src/util/impl_kth_select.hpp
  - icon: ':warning:'
    path: src/util/kth_select.hpp
    title: src/util/kth_select.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"test/unittest/util/kth_select.cpp\"\n#include <vector>\n\
    #include <algorithm>\n#include <cassert>\n#include <functional>\n#include <iostream>\n\
    \n#line 3 \"src/util/kth_select.hpp\"\n#include <cstddef>\n\n#line 4 \"src/util/impl_kth_select.hpp\"\
    \n\ntemplate< class RandomAccessIterator, class Compare >\nRandomAccessIterator\
    \ impl_smallsize_kth_select(\n    RandomAccessIterator first, \n    RandomAccessIterator\
    \ last, \n    std::size_t k,\n    Compare comp) \n{\n  std::sort(first, last,\
    \ comp);\n  return (first + k);\n}\n\ntemplate< typename T, class RandomAccessIterator,\
    \ class Compare >\nT impl_kth_select(\n    RandomAccessIterator first,\n    RandomAccessIterator\
    \ last,\n    std::size_t k,\n    Compare comp) \n{\n  // TODO: implementation\n\
    \  return *impl_smallsize_kth_select(first, last, k, comp);\n}\n#line 6 \"src/util/kth_select.hpp\"\
    \n\ntemplate< typename T >\nT kth_select(std::vector< T > vs, std::size_t k) {\n\
    \  return impl_kth_select<T>(std::begin(vs), std::end(vs), k, std::less< T >());\n\
    }\n\ntemplate< typename T, class Compare >\nT kth_select(std::vector< T > vs,\
    \ std::size_t k, Compare comp) {\n  return impl_kth_select<T>(std::begin(vs),\
    \ std::end(vs), k, comp);\n}\n#line 8 \"test/unittest/util/kth_select.cpp\"\n\n\
    int main() {\n  std::vector< int > vs({5, 2, 4, 9, 8, 4});\n\n  std::vector< int\
    \ > res;\n  for (int i = 0; i < (int)vs.size(); i++) {\n    res.emplace_back(kth_select(vs,\
    \ i));\n  }\n\n  std::sort(vs.begin(), vs.end());\n\n  for (int i = 0; i < (int)vs.size();\
    \ i++) {\n    std::cerr << i << \"th : \" << vs[i] << \", \" << res[i] << std::endl;\n\
    \  }\n\n  std::cerr << \"assert(vs == res): \" << std::flush;\n  assert(vs ==\
    \ res);\n  std::cerr << \"ok\" << std::endl;\n}\n"
  code: "#include <vector>\n#include <algorithm>\n#include <cassert>\n#include <functional>\n\
    #include <iostream>\n\n#include \"../../../src/util/kth_select.hpp\"\n\nint main()\
    \ {\n  std::vector< int > vs({5, 2, 4, 9, 8, 4});\n\n  std::vector< int > res;\n\
    \  for (int i = 0; i < (int)vs.size(); i++) {\n    res.emplace_back(kth_select(vs,\
    \ i));\n  }\n\n  std::sort(vs.begin(), vs.end());\n\n  for (int i = 0; i < (int)vs.size();\
    \ i++) {\n    std::cerr << i << \"th : \" << vs[i] << \", \" << res[i] << std::endl;\n\
    \  }\n\n  std::cerr << \"assert(vs == res): \" << std::flush;\n  assert(vs ==\
    \ res);\n  std::cerr << \"ok\" << std::endl;\n}\n"
  dependsOn:
  - src/util/kth_select.hpp
  - src/util/impl_kth_select.hpp
  isVerificationFile: false
  path: test/unittest/util/kth_select.cpp
  requiredBy: []
  timestamp: '2022-01-23 04:17:47+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/unittest/util/kth_select.cpp
layout: document
redirect_from:
- /library/test/unittest/util/kth_select.cpp
- /library/test/unittest/util/kth_select.cpp.html
title: test/unittest/util/kth_select.cpp
---
