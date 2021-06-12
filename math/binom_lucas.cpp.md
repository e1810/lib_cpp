---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/binom_lucas.cpp\"\n\n\n\n#include<combination.cpp>\n\
    template<typename Int>\nInt binom(Int n, Int k){\n\t//TODO \u4E8C\u9805\u4FC2\u6570\
    \ mod P \u3092\u6C42\u3081\u308B\u3084\u3064\n}\n\ntemplate<typename Int>\nInt\
    \ binom_lucas(Int n, Int k, Int p){\n\tif(n<0 || k<0 || n<k) return 0;\n\tInt\
    \ ret = 1;\n\twhile(n>0 && k>0){\n\t\tret *= binom(n%p, k%p);\n\t\tn /= p;\n\t\
    \tk /= p;\n\t}\n\treturn ret;\n}\n\n\n\n"
  code: "#ifndef INCLUDED_BINOM_LUCAS\n#define INCLUDED_BINOM_LUCAS\n\n#include<combination.cpp>\n\
    template<typename Int>\nInt binom(Int n, Int k){\n\t//TODO \u4E8C\u9805\u4FC2\u6570\
    \ mod P \u3092\u6C42\u3081\u308B\u3084\u3064\n}\n\ntemplate<typename Int>\nInt\
    \ binom_lucas(Int n, Int k, Int p){\n\tif(n<0 || k<0 || n<k) return 0;\n\tInt\
    \ ret = 1;\n\twhile(n>0 && k>0){\n\t\tret *= binom(n%p, k%p);\n\t\tn /= p;\n\t\
    \tk /= p;\n\t}\n\treturn ret;\n}\n\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: math/binom_lucas.cpp
  requiredBy: []
  timestamp: '2021-06-13 02:22:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/binom_lucas.cpp
layout: document
redirect_from:
- /library/math/binom_lucas.cpp
- /library/math/binom_lucas.cpp.html
title: math/binom_lucas.cpp
---
