---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/segtree.cpp\"\n\n\n#include<vector>\n\n<template\
    \ typename T>\nstruct Segtree {\n\tusing func = std::function<T(T, T)>;\n\n\t\
    int sz;\n\tfunc f;\n\tT unit;\n\tstd::vector<T> data;\n\n\tSegtree(int n=1e5,\
    \ func f, T u): f(f), unit(u) {\n\t\tsz = 1;\n\t\twhile(sz<n) sz<<=1;\n\t\tseg.assign(2*sz,\
    \ unit);\n\t}\n\n\tvoid set(int idx, T x){\n\t\tseg[sz + idx] = x;\n\t}\n\n\t\
    void build(){\n\t\tfor(int k=sz-1; k>0; k--){\n\t\t\tdata[k] = f(data[2*k], data[2*k+1]);\n\
    \t\t}\n\t}\n\n\n\tvoid update(int idx, T x){\n\t\tidx += sz;\n\t\tdata[idx] =\
    \ x;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx] = f(data[2*idx], data[2*idx+1]);\n\t\
    \t}\n\t}\n\n\tT query(int a,  int b){\n\t\tT l = unit, r = unit;\n\t\tfor(a+=sz,\
    \ b+=sz; a<b; a>>=1, b>>=1){\n\t\t\tif(a&1) l = f(l, data[a++]);\n\t\t\tif(b&1)\
    \ r = f(data[--b], r);\n\t\t}\n\t\treturn f(l, r);\n\t}\n};\n\n\n"
  code: "#ifndef INCLUDED_SEGTREE_HPP\n#define INCLUDED_SEGTREE_HPP\n#include<vector>\n\
    \n<template typename T>\nstruct Segtree {\n\tusing func = std::function<T(T, T)>;\n\
    \n\tint sz;\n\tfunc f;\n\tT unit;\n\tstd::vector<T> data;\n\n\tSegtree(int n=1e5,\
    \ func f, T u): f(f), unit(u) {\n\t\tsz = 1;\n\t\twhile(sz<n) sz<<=1;\n\t\tseg.assign(2*sz,\
    \ unit);\n\t}\n\n\tvoid set(int idx, T x){\n\t\tseg[sz + idx] = x;\n\t}\n\n\t\
    void build(){\n\t\tfor(int k=sz-1; k>0; k--){\n\t\t\tdata[k] = f(data[2*k], data[2*k+1]);\n\
    \t\t}\n\t}\n\n\n\tvoid update(int idx, T x){\n\t\tidx += sz;\n\t\tdata[idx] =\
    \ x;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx] = f(data[2*idx], data[2*idx+1]);\n\t\
    \t}\n\t}\n\n\tT query(int a,  int b){\n\t\tT l = unit, r = unit;\n\t\tfor(a+=sz,\
    \ b+=sz; a<b; a>>=1, b>>=1){\n\t\t\tif(a&1) l = f(l, data[a++]);\n\t\t\tif(b&1)\
    \ r = f(data[--b], r);\n\t\t}\n\t\treturn f(l, r);\n\t}\n};\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/segtree.cpp
  requiredBy: []
  timestamp: '2020-09-29 17:31:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/segtree.cpp
layout: document
redirect_from:
- /library/data_structure/segtree.cpp
- /library/data_structure/segtree.cpp.html
title: data_structure/segtree.cpp
---
