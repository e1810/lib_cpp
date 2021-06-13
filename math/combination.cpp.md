---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: math/binom_lucas.cpp
    title: binom_lucas
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki/117.test.cpp
    title: test/yuki/117.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/combination.cpp\"\n#include<vector>\n\nstruct Combination\
    \ {\n\tint64_t MOD;\n\tstd::vector<int64_t> fac, inv, finv;\n\tCombination(int\
    \ n, int m): MOD(m), fac(n), inv(n), finv(n) {\n\t\tfac[0] = fac[1] = inv[1] =\
    \ finv[0] = finv[1] = 1;\n\t\tfor(int64_t i=2; i<n; i++){\n\t\t\tfac[i] = fac[i-1]\
    \ * i % MOD;\n\t\t\tinv[i] = (MOD - MOD/i) * inv[MOD%i] % MOD;\n\t\t\tfinv[i]\
    \ = finv[i-1] * inv[i] % MOD;\n\t\t}\n\t}\n\n\tint64_t C(int64_t n, int64_t k){\n\
    \t\tif(n==k || k==0) return 1;\n\t\tif(n<0 || k<0 || n<k) return 0;\n\t\treturn\
    \ fac[n] * finv[k] % MOD * finv[n-k] % MOD;\n\t}\n\n\tint64_t P(int64_t n, int64_t\
    \ k){\n\t\treturn C(n, k) * fac[k] % MOD;\n\t}\n\n\tint64_t H(int64_t n, int64_t\
    \ k){\n\t\treturn C(n+k-1, k);\n\t}\n};\n"
  code: "#include<vector>\n\nstruct Combination {\n\tint64_t MOD;\n\tstd::vector<int64_t>\
    \ fac, inv, finv;\n\tCombination(int n, int m): MOD(m), fac(n), inv(n), finv(n)\
    \ {\n\t\tfac[0] = fac[1] = inv[1] = finv[0] = finv[1] = 1;\n\t\tfor(int64_t i=2;\
    \ i<n; i++){\n\t\t\tfac[i] = fac[i-1] * i % MOD;\n\t\t\tinv[i] = (MOD - MOD/i)\
    \ * inv[MOD%i] % MOD;\n\t\t\tfinv[i] = finv[i-1] * inv[i] % MOD;\n\t\t}\n\t}\n\
    \n\tint64_t C(int64_t n, int64_t k){\n\t\tif(n==k || k==0) return 1;\n\t\tif(n<0\
    \ || k<0 || n<k) return 0;\n\t\treturn fac[n] * finv[k] % MOD * finv[n-k] % MOD;\n\
    \t}\n\n\tint64_t P(int64_t n, int64_t k){\n\t\treturn C(n, k) * fac[k] % MOD;\n\
    \t}\n\n\tint64_t H(int64_t n, int64_t k){\n\t\treturn C(n+k-1, k);\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: math/combination.cpp
  requiredBy:
  - math/binom_lucas.cpp
  timestamp: '2021-06-13 18:36:45+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki/117.test.cpp
documentation_of: math/combination.cpp
layout: document
redirect_from:
- /library/math/combination.cpp
- /library/math/combination.cpp.html
title: math/combination.cpp
---
