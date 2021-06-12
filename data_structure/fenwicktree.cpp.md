---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
    title: test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/fenwicktree.cpp\"\n\n\n#include<vector>\n\
    \n// add: idx\u756A\u76EE\u306E\u5024\u306Bx\u3092\u52A0\u7B97\n// sum: \u533A\
    \u9593[l, r)\u306E\u7DCF\u548C\u3092\u53D6\u5F97\n\ntemplate<typename T>\nstruct\
    \ FenwickTree {\n\tstd::vector<T> data;\n\tFenwickTree(int sz=1e5): data(sz+1,\
    \ 0) {}\n\n\tvoid add(int idx, T x){\n\t\tidx++;\n\t\twhile(idx<data.size()){\n\
    \t\t\tdata[idx] += x;\n\t\t\tidx += idx & -idx;\n\t\t}\n\t}\n\n\tT __sum(int r){\n\
    \t\tT ret = 0;\n\t\twhile(r>0){\n\t\t\tret += data[r];\n\t\t\tr -= r & -r;\n\t\
    \t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r){\n\t\treturn __sum(r) - __sum(l);\n\
    \t}\n\n};\n\n\n\n"
  code: "#ifndef INCLUDED_FENWICKTREE\n#define INCLUDED_FENWICKTREE\n#include<vector>\n\
    \n// add: idx\u756A\u76EE\u306E\u5024\u306Bx\u3092\u52A0\u7B97\n// sum: \u533A\
    \u9593[l, r)\u306E\u7DCF\u548C\u3092\u53D6\u5F97\n\ntemplate<typename T>\nstruct\
    \ FenwickTree {\n\tstd::vector<T> data;\n\tFenwickTree(int sz=1e5): data(sz+1,\
    \ 0) {}\n\n\tvoid add(int idx, T x){\n\t\tidx++;\n\t\twhile(idx<data.size()){\n\
    \t\t\tdata[idx] += x;\n\t\t\tidx += idx & -idx;\n\t\t}\n\t}\n\n\tT __sum(int r){\n\
    \t\tT ret = 0;\n\t\twhile(r>0){\n\t\t\tret += data[r];\n\t\t\tr -= r & -r;\n\t\
    \t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r){\n\t\treturn __sum(r) - __sum(l);\n\
    \t}\n\n};\n\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/fenwicktree.cpp
  requiredBy: []
  timestamp: '2021-06-13 03:44:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
documentation_of: data_structure/fenwicktree.cpp
layout: document
redirect_from:
- /library/data_structure/fenwicktree.cpp
- /library/data_structure/fenwicktree.cpp.html
title: data_structure/fenwicktree.cpp
---
