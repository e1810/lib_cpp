---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki/16.test.cpp
    title: test/yuki/16.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/modpow.cpp\"\n\n\n\ntemplate<typename T>\nT modpow(T\
    \ a, T p, T m){\n    T ret = 1;\n    while(p){\n\tif(p&1) ret = ret * a % m;\n\
    \ta = a * a % m;\n\tp >>= 1;\n    }\n    return ret;\n}\n\n\n"
  code: "#ifndef MODPOW_INCLUDED\n#define MODPOW_INCLUDED\n\ntemplate<typename T>\n\
    T modpow(T a, T p, T m){\n    T ret = 1;\n    while(p){\n\tif(p&1) ret = ret *\
    \ a % m;\n\ta = a * a % m;\n\tp >>= 1;\n    }\n    return ret;\n}\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: math/modpow.cpp
  requiredBy: []
  timestamp: '2020-09-29 17:31:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki/16.test.cpp
documentation_of: math/modpow.cpp
layout: document
redirect_from:
- /library/math/modpow.cpp
- /library/math/modpow.cpp.html
title: math/modpow.cpp
---
