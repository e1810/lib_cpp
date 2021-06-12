---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki/16.test.cpp
    title: test/yuki/16.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/modpow.cpp\"\n\n\n\ntemplate<typename T>\nT modpow(T\
    \ a, T p, T m){\n    T ret = 1;\n    while(p){\n\t\tif(p&1) ret = ret * a % m;\n\
    \t\ta = a * a % m;\n\t\tp >>= 1;\n    }\n    return ret;\n}\n\n\n"
  code: "#ifndef MODPOW_INCLUDED\n#define MODPOW_INCLUDED\n\ntemplate<typename T>\n\
    T modpow(T a, T p, T m){\n    T ret = 1;\n    while(p){\n\t\tif(p&1) ret = ret\
    \ * a % m;\n\t\ta = a * a % m;\n\t\tp >>= 1;\n    }\n    return ret;\n}\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: math/modpow.cpp
  requiredBy: []
  timestamp: '2021-06-13 03:14:44+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki/16.test.cpp
documentation_of: math/modpow.cpp
layout: document
title: modpow
---

## 概要
$ a ^ p \mod m $ を繰り返し二乗法で求めます。
## 計算量
$ O(\log p) $
