---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/combination.cpp
    title: math/combination.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
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
    \ k){\n\t\treturn C(n+k-1, k);\n\t}\n};\n#line 2 \"math/binom_lucas.cpp\"\n\n\
    struct Lucas {\n\tconst int64_t MOD;\n\tCombination com;\n\tLucas(int m): MOD(m),\
    \ com(m, m) {}\n\n\tint64_t binom_lucas(int64_t n, int64_t k){\n\t\tif(n<0 ||\
    \ k<0 || n<k) return 0;\n\t\tint64_t ret = 1;\n\t\twhile(n>0 || k>0){\n\t\t\t\
    ret = ret * com.C(n%MOD, k%MOD) % MOD;\n\t\t\tn /= MOD;\n\t\t\tk /= MOD;\n\t\t\
    }\n\t\treturn ret;\n\t}\n};\n"
  code: "#include\"combination.cpp\"\n\nstruct Lucas {\n\tconst int64_t MOD;\n\tCombination\
    \ com;\n\tLucas(int m): MOD(m), com(m, m) {}\n\n\tint64_t binom_lucas(int64_t\
    \ n, int64_t k){\n\t\tif(n<0 || k<0 || n<k) return 0;\n\t\tint64_t ret = 1;\n\t\
    \twhile(n>0 || k>0){\n\t\t\tret = ret * com.C(n%MOD, k%MOD) % MOD;\n\t\t\tn /=\
    \ MOD;\n\t\t\tk /= MOD;\n\t\t}\n\t\treturn ret;\n\t}\n};\n"
  dependsOn:
  - math/combination.cpp
  isVerificationFile: false
  path: math/binom_lucas.cpp
  requiredBy: []
  timestamp: '2021-06-13 18:36:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/binom_lucas.cpp
layout: document
title: binom_lucas
---

## 概要
Lucas の定理を用いて $ binom(n, k) \mod p$ を求めます。
- Lucas の定理

	$n$, $k$ を $p$ 進数表示したときの $i$ 桁目をそれぞれ $n_i$, $k_i$ として、

	$ binom(n, k) \equiv \prod_{i=0} binom(n_i, k_i)  \mod p$

各 $binom(n_i, k_i)$ は前計算により $O(1)$ で求められる。
(<https://e1810.github.io/lib_cpp/combination.cpp> などを用いる)

## 計算量
- 前計算 $ O(p) $
- クエリ $ O( \log_p{n} ) $

