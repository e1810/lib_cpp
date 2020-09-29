---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/yosupo/unionfind.cpp
    title: test/yosupo/unionfind.cpp
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/unionfind.cpp\"\n\n\n#include<vector>\n\n\
    struct UnionFind {\n    std::vector<int> data;\n    UnionFind(int n=1e5): data(n,\
    \ -1) {}\n\n\tint root(int x){\n\t\tif(data[x]<0) return x;\n\t\telse return data[x]\
    \ = root(data[x]);\n\t}\n\n\tbool same(int x, int y){\n\t\treturn root(x)==root(y);\n\
    \t}\n\n\tvoid unite(int x, int y){\n\t\tx = root(x);\n\t\ty = root(y);\n\t\tif(x==y)\
    \ return;\n\t\tdata[x] += data[y];\n\t\tdata[y] = x;\n\t}\n};\n\n\n"
  code: "#ifndef INCLUDED_UNIONFIND_HPP\n#define INCLUDED_UNIONFIND_HPP\n#include<vector>\n\
    \nstruct UnionFind {\n    std::vector<int> data;\n    UnionFind(int n=1e5): data(n,\
    \ -1) {}\n\n\tint root(int x){\n\t\tif(data[x]<0) return x;\n\t\telse return data[x]\
    \ = root(data[x]);\n\t}\n\n\tbool same(int x, int y){\n\t\treturn root(x)==root(y);\n\
    \t}\n\n\tvoid unite(int x, int y){\n\t\tx = root(x);\n\t\ty = root(y);\n\t\tif(x==y)\
    \ return;\n\t\tdata[x] += data[y];\n\t\tdata[y] = x;\n\t}\n};\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/unionfind.cpp
  requiredBy:
  - test/yosupo/unionfind.cpp
  timestamp: '2020-09-29 17:31:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/unionfind.cpp
layout: document
redirect_from:
- /library/data_structure/unionfind.cpp
- /library/data_structure/unionfind.cpp.html
title: data_structure/unionfind.cpp
---
