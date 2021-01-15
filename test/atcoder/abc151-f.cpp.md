---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    ERROR: 1e-6
    PROBLEM: https://atcoder.jp/contests/abc151/tasks/abc151_f
    links:
    - https://atcoder.jp/contests/abc151/tasks/abc151_f
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: in_circle.hpp:\
    \ line -1: no such header\n"
  code: "// verification-helper: PROBLEM https://atcoder.jp/contests/abc151/tasks/abc151_f\n\
    // verification-helper: ERROR 1e-6\n//\n#include <iostream>\n\n#include \"../../src/point.hpp\"\
    \n#include \"../../src/minimum_covering_circle.hpp\"\n#include \"../../src/util/io_set.hpp\"\
    \n\nusing namespace geometry;\n\nint main() {\n  IoSetup(20);\n  int n;\n  std::cin\
    \ >> n;\n\n  points pts(n);\n  for (auto &p : pts) std::cin >> p;\n\n  cout <<\
    \ minimum_covering_circle(pts, 1333333333).r << std::endl;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: test/atcoder/abc151-f.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/atcoder/abc151-f.cpp
layout: document
redirect_from:
- /library/test/atcoder/abc151-f.cpp
- /library/test/atcoder/abc151-f.cpp.html
title: test/atcoder/abc151-f.cpp
---
