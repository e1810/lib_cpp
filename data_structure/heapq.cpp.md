---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ALDS1/9_C.test.cpp
    title: test/aoj/ALDS1/9_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/heapq.cpp\"\n\n\n\n#include<vector>\n#include<algorithm>\n\
    #include<cassert>\n\ntemplate<typename T>\nstruct HeapQ {\n\tstd::vector<T> tree;\n\
    \tHeapQ(): tree(1) {}\n\n\tT top(){\n\t\tassert(tree.size()>1);\n\t\treturn tree[1];\n\
    \t}\n\n\tvoid push(T x){\n\t\ttree.push_back(x);\n\t\tsize_t pos = tree.size()\
    \ - 1;\n\t\twhile(pos/2 > 0){\n\t\t\tif(tree[pos/2] < tree[pos]){\n\t\t\t\tstd::swap(tree[pos/2],\
    \ tree[pos]);\n\t\t\t}else break;\n\t\t\tpos /= 2;\n\t\t}\n\t}\n\n\tvoid pop(){\n\
    \t\ttree[1] = tree.back();\n\t\ttree.pop_back();\n\t\tsize_t pos = 1;\n\t\twhile(pos*2<tree.size()){\n\
    \t\t\tsize_t nx = pos * 2;\n\t\t\tif(nx+1 < tree.size()){\n\t\t\t\tif(tree[nx]\
    \ < tree[nx+1]) nx++;\n\t\t\t}\n\t\t\tif(tree[pos] < tree[nx]){\n\t\t\t\tstd::swap(tree[pos],\
    \ tree[nx]);\n\t\t\t}else break;\n\t\t\tpos = nx;\n\t\t}\n\t}\n};\n\n\n\n"
  code: "#ifndef INCLUDED_HEAPQ\n#define INCLUDED_HEAPQ\n\n#include<vector>\n#include<algorithm>\n\
    #include<cassert>\n\ntemplate<typename T>\nstruct HeapQ {\n\tstd::vector<T> tree;\n\
    \tHeapQ(): tree(1) {}\n\n\tT top(){\n\t\tassert(tree.size()>1);\n\t\treturn tree[1];\n\
    \t}\n\n\tvoid push(T x){\n\t\ttree.push_back(x);\n\t\tsize_t pos = tree.size()\
    \ - 1;\n\t\twhile(pos/2 > 0){\n\t\t\tif(tree[pos/2] < tree[pos]){\n\t\t\t\tstd::swap(tree[pos/2],\
    \ tree[pos]);\n\t\t\t}else break;\n\t\t\tpos /= 2;\n\t\t}\n\t}\n\n\tvoid pop(){\n\
    \t\ttree[1] = tree.back();\n\t\ttree.pop_back();\n\t\tsize_t pos = 1;\n\t\twhile(pos*2<tree.size()){\n\
    \t\t\tsize_t nx = pos * 2;\n\t\t\tif(nx+1 < tree.size()){\n\t\t\t\tif(tree[nx]\
    \ < tree[nx+1]) nx++;\n\t\t\t}\n\t\t\tif(tree[pos] < tree[nx]){\n\t\t\t\tstd::swap(tree[pos],\
    \ tree[nx]);\n\t\t\t}else break;\n\t\t\tpos = nx;\n\t\t}\n\t}\n};\n\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/heapq.cpp
  requiredBy: []
  timestamp: '2021-03-01 16:28:30+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ALDS1/9_C.test.cpp
documentation_of: data_structure/heapq.cpp
layout: document
redirect_from:
- /library/data_structure/heapq.cpp
- /library/data_structure/heapq.cpp.html
title: data_structure/heapq.cpp
---
