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
  bundledCode: "#line 1 \"math/binom_mod3.cpp\"\n\n\n\n#include<vector>\n#include<cassert>\n\
    \nstruct binom_mod3 {\n\tstd::vector<int> quo, rem;\n\tbinom_mod3(int n): quo(n),\
    \ rem(n) {\n\t\tquo[0] = 0;\n\t\trem[0] = 1;\n\t\tfor(int i=1; i<n; i++){\n\t\t\
    \tint m = i, cnt = 0;\n\t\t\twhile(m%3==0){\n\t\t\t\tm /= 3;\n\t\t\t\tcnt++;\n\
    \t\t\t}\n\t\t\tquo[i] = quo[i-1] + cnt;\n\t\t\trem[i] = rem[i-1] * m % 3;\n\t\t\
    }\n\t}\n\t\n\tint eval(int n, int k){\n\t\tassert(n < quo.size());\n\t\tif(n<0\
    \ || k<0 || n<k) return 0;\n\t\tif(quo[n] > quo[k] + quo[n-k]) return 0;\n\t\t\
    int num = rem[n], den = rem[k] * rem[n-k] % 3;\n\t\treturn num * den % 3;\n\t\
    }\n};\n\n\n\n"
  code: "#ifndef INCLUDED_BINOM_MOD3\n#define INCLUDED_BINOM_MOD3\n\n#include<vector>\n\
    #include<cassert>\n\nstruct binom_mod3 {\n\tstd::vector<int> quo, rem;\n\tbinom_mod3(int\
    \ n): quo(n), rem(n) {\n\t\tquo[0] = 0;\n\t\trem[0] = 1;\n\t\tfor(int i=1; i<n;\
    \ i++){\n\t\t\tint m = i, cnt = 0;\n\t\t\twhile(m%3==0){\n\t\t\t\tm /= 3;\n\t\t\
    \t\tcnt++;\n\t\t\t}\n\t\t\tquo[i] = quo[i-1] + cnt;\n\t\t\trem[i] = rem[i-1] *\
    \ m % 3;\n\t\t}\n\t}\n\t\n\tint eval(int n, int k){\n\t\tassert(n < quo.size());\n\
    \t\tif(n<0 || k<0 || n<k) return 0;\n\t\tif(quo[n] > quo[k] + quo[n-k]) return\
    \ 0;\n\t\tint num = rem[n], den = rem[k] * rem[n-k] % 3;\n\t\treturn num * den\
    \ % 3;\n\t}\n};\n\n#endif\n\n"
  dependsOn: []
  isVerificationFile: false
  path: math/binom_mod3.cpp
  requiredBy: []
  timestamp: '2021-06-13 02:22:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/binom_mod3.cpp
layout: document
redirect_from:
- /library/math/binom_mod3.cpp
- /library/math/binom_mod3.cpp.html
title: math/binom_mod3.cpp
---
