---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
    title: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/data_structure/point_set_range_composite.test.cpp
    title: test/yosupo/data_structure/point_set_range_composite.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/segtree.cpp\"\n\n\n#include<vector>\n#include<functional>\n\
    template<typename T>\nstruct Segtree {\n\tusing F = std::function<T(T,T)>;\n\t\
    const T e;\n\tF func;\n\tsize_t sz = 1;\n\tstd::vector<T> data;\n\tSegtree(int\
    \ n, F func, T e): func(func), e(e){\n\t\twhile(sz<n) sz <<= 1;\n\t\tdata.assign(sz*2,\
    \ e);\n\t}\n\n\tvoid set(size_t idx, T val){data[sz+idx] = val;}\n\tvoid build(){\n\
    \t\tfor(int i=sz-1; i>0; i--){\n\t\t\tdata[i] = func(data[2*i], data[2*i+1]);\n\
    \t\t}\n\t}\n\n\tvoid update(size_t idx, T val){\n\t\tidx += sz;\n\t\tdata[idx]\
    \ = val;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx] = func(data[idx*2], data[idx*2+1]);\n\
    \t\t}\n\t}\n\n\tT query(size_t l, size_t r){\n\t\tT resL = e, resR = e;\n\t\t\
    for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){\n\t\t\tif(l&1) resL = func(resL, data[l++]);\n\
    \t\t\tif(r&1) resR = func(data[--r], resR);\n\t\t}\n\t\treturn func(resL, resR);\n\
    \t}\n\n\tT operator[](size_t idx){return data[sz+idx];}\n};\n\n\n"
  code: "#ifndef INCLUDED_SEGTREE\n#define INCLUDED_SEGTREE\n#include<vector>\n#include<functional>\n\
    template<typename T>\nstruct Segtree {\n\tusing F = std::function<T(T,T)>;\n\t\
    const T e;\n\tF func;\n\tsize_t sz = 1;\n\tstd::vector<T> data;\n\tSegtree(int\
    \ n, F func, T e): func(func), e(e){\n\t\twhile(sz<n) sz <<= 1;\n\t\tdata.assign(sz*2,\
    \ e);\n\t}\n\n\tvoid set(size_t idx, T val){data[sz+idx] = val;}\n\tvoid build(){\n\
    \t\tfor(int i=sz-1; i>0; i--){\n\t\t\tdata[i] = func(data[2*i], data[2*i+1]);\n\
    \t\t}\n\t}\n\n\tvoid update(size_t idx, T val){\n\t\tidx += sz;\n\t\tdata[idx]\
    \ = val;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx] = func(data[idx*2], data[idx*2+1]);\n\
    \t\t}\n\t}\n\n\tT query(size_t l, size_t r){\n\t\tT resL = e, resR = e;\n\t\t\
    for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){\n\t\t\tif(l&1) resL = func(resL, data[l++]);\n\
    \t\t\tif(r&1) resR = func(data[--r], resR);\n\t\t}\n\t\treturn func(resL, resR);\n\
    \t}\n\n\tT operator[](size_t idx){return data[sz+idx];}\n};\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/segtree.cpp
  requiredBy: []
  timestamp: '2021-02-02 00:04:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo/data_structure/point_set_range_composite.test.cpp
  - test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
documentation_of: data_structure/segtree.cpp
layout: document
redirect_from:
- /library/data_structure/segtree.cpp
- /library/data_structure/segtree.cpp.html
title: data_structure/segtree.cpp
---
