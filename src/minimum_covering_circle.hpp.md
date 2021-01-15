---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: in_circle.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n\n#include <random>\n#include <algorithm>\n\n#include \"./point.hpp\"\
    \n#include \"./circle.hpp\"\n#include \"./in_circle.hpp\"\n#include \"./circumscribed_circle.hpp\"\
    \n\nnamespace geometry {\n  circle minimum_covering_circle(points pts, unsigned\
    \ int seed) {\n    auto make_circle = [](const point &a, const point &b) {\n \
    \     return circle((a + b) * 0.5, abs(a - b) * 0.5);\n    };\n\n    int n = pts.size();\n\
    \    if (n == 1) return circle(pts[0], 0);\n    mt19937 engine(seed);\n    shuffle(pts.begin(),\
    \ pts.end(), engine);\n    circle res(point(), -1e10);\n\n    for (int i = 0;\
    \ i < n; i++) {\n      if (in_circle(res, pts[i])) continue;\n      res = circle(pts[i],\
    \ 0);\n      for (int j = 0; j < i; j++) {\n        if (in_circle(res, pts[j]))\
    \ continue;\n        res = make_circle(pts[i], pts[j]);\n        for (int k =\
    \ 0; k < j; k++) {\n          if (in_circle(res, pts[k])) continue;\n        \
    \  res = circumscribed_circle(pts[i], pts[j], pts[k]);\n        }\n      }\n \
    \   }\n    return res;\n  }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/minimum_covering_circle.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/minimum_covering_circle.hpp
layout: document
redirect_from:
- /library/src/minimum_covering_circle.hpp
- /library/src/minimum_covering_circle.hpp.html
title: src/minimum_covering_circle.hpp
---
