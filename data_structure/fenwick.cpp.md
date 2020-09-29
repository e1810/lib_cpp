---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/fenwick.cpp\"\n\n\n#include<vector>\n\n//\
    \ add: idx\u756A\u76EE\u306E\u5024\u306Bx\u3092\u52A0\u7B97\n// sum: \u533A\u9593\
    [0, r]\u306E\u7DCF\u548C\u3092\u53D6\u5F97\n\ntemplate<typename T>\nstruct Fenwick\
    \ {\n    std::vector<T> data;\n    Fenwick(int sz=1e5): data(sz+1, 0) {}\n\n \
    \   void add(int idx, T x){\n\t\tidx++;\n\t\twhile(idx<data.size()){\n\t    \t\
    data[idx] += x;\n\t    \tidx += idx & -idx;\n\t\t}\n    }\n\n\tT __sum(int r){\n\
    \t\tT ret = 0;\n\t\twhile(r>0){\n\t\t\tret += data[r];\n\t\t\tr -= r & -r;\n\t\
    \t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r){\n\t\treturn __sum(r+1) - __sum(l);\n\
    \t}\n\n};\n\n\n\n"
  code: "#ifndef INCLUDED_FENWICK_HPP\n#define INCLUDED_FENWICK_HPP\n#include<vector>\n\
    \n// add: idx\u756A\u76EE\u306E\u5024\u306Bx\u3092\u52A0\u7B97\n// sum: \u533A\
    \u9593[0, r]\u306E\u7DCF\u548C\u3092\u53D6\u5F97\n\ntemplate<typename T>\nstruct\
    \ Fenwick {\n    std::vector<T> data;\n    Fenwick(int sz=1e5): data(sz+1, 0)\
    \ {}\n\n    void add(int idx, T x){\n\t\tidx++;\n\t\twhile(idx<data.size()){\n\
    \t    \tdata[idx] += x;\n\t    \tidx += idx & -idx;\n\t\t}\n    }\n\n\tT __sum(int\
    \ r){\n\t\tT ret = 0;\n\t\twhile(r>0){\n\t\t\tret += data[r];\n\t\t\tr -= r &\
    \ -r;\n\t\t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r){\n\t\treturn __sum(r+1)\
    \ - __sum(l);\n\t}\n\n};\n\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/fenwick.cpp
  requiredBy: []
  timestamp: '2020-09-29 17:31:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/fenwick.cpp
layout: document
redirect_from:
- /library/data_structure/fenwick.cpp
- /library/data_structure/fenwick.cpp.html
title: data_structure/fenwick.cpp
---
