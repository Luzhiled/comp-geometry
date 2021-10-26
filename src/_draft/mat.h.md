---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/_draft/mat.h\"\nusing uint = unsigned int;\nusing R\
    \ = double;\n\ntemplate< uint r, uint c, class T >\nclass mat {\npublic:\n  T\
    \ _vec[r * c];\n\n  const T &operator[] (const uint i) const;\n        T &operator[]\
    \ (const uint i);\n\n  mat<r, c, T> operator- () const;\n\n  mat<r, c, T> &operator+=\
    \ (const mat<r, c, T> &op);\n  mat<r, c, T> &operator-= (const mat<r, c, T> &op);\n\
    \  mat<r, c, T>  operator+  (const mat<r, c, T> &op) const;\n  mat<r, c, T>  operator-\
    \  (const mat<r, c, T> &op) const;\n\n  mat<r, c, T> &operator*= (const T &scalar);\n\
    \  mat<r, c, T> &operator/= (const T &scalar);\n  mat<r, c, T>  operator*  (const\
    \ T &scalar) const;\n  mat<r, c, T>  operator/  (const T &scalar) const;\n\n \
    \ R norm() const;\n  R dist(const mat<r, c, T> &v) const;\n\n  bool is_nan() const;\n\
    \  bool is_inf() const;\n\n  mat<3, 1, T> cross(const mat<3, 1, T> &v) const;\n\
    \  T            dot  (const mat<r, c, T> &v) const;\n\n  const T &x() const {\
    \ return _vec[0]; }\n        T &x()       { return _vec[0]; }\n  const T &y()\
    \ const { return _vec[1]; }\n        T &y()       { return _vec[1]; }\n  const\
    \ T &z() const { return _vec[2]; }\n        T &z()       { return _vec[2]; }\n\
    };\n"
  code: "using uint = unsigned int;\nusing R = double;\n\ntemplate< uint r, uint c,\
    \ class T >\nclass mat {\npublic:\n  T _vec[r * c];\n\n  const T &operator[] (const\
    \ uint i) const;\n        T &operator[] (const uint i);\n\n  mat<r, c, T> operator-\
    \ () const;\n\n  mat<r, c, T> &operator+= (const mat<r, c, T> &op);\n  mat<r,\
    \ c, T> &operator-= (const mat<r, c, T> &op);\n  mat<r, c, T>  operator+  (const\
    \ mat<r, c, T> &op) const;\n  mat<r, c, T>  operator-  (const mat<r, c, T> &op)\
    \ const;\n\n  mat<r, c, T> &operator*= (const T &scalar);\n  mat<r, c, T> &operator/=\
    \ (const T &scalar);\n  mat<r, c, T>  operator*  (const T &scalar) const;\n  mat<r,\
    \ c, T>  operator/  (const T &scalar) const;\n\n  R norm() const;\n  R dist(const\
    \ mat<r, c, T> &v) const;\n\n  bool is_nan() const;\n  bool is_inf() const;\n\n\
    \  mat<3, 1, T> cross(const mat<3, 1, T> &v) const;\n  T            dot  (const\
    \ mat<r, c, T> &v) const;\n\n  const T &x() const { return _vec[0]; }\n      \
    \  T &x()       { return _vec[0]; }\n  const T &y() const { return _vec[1]; }\n\
    \        T &y()       { return _vec[1]; }\n  const T &z() const { return _vec[2];\
    \ }\n        T &z()       { return _vec[2]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/_draft/mat.h
  requiredBy: []
  timestamp: '2021-10-23 00:44:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/_draft/mat.h
layout: document
redirect_from:
- /library/src/_draft/mat.h
- /library/src/_draft/mat.h.html
title: src/_draft/mat.h
---
