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
    #include<cassert>\n\ntemplate<typename T>\nstruct HeapQ {\n    std::vector<T>\
    \ tree;\n    HeapQ(): tree(1) {}\n\n    T top(){\n        assert(tree.size()>1);\n\
    \        return tree[1];\n    }\n\n    void push(T x){\n        tree.push_back(x);\n\
    \        size_t pos = tree.size() - 1;\n        while(pos/2 > 0){\n          \
    \  if(tree[pos/2] < tree[pos]){\n                std::swap(tree[pos/2], tree[pos]);\n\
    \            }else break;\n            pos /= 2;\n        }\n    }\n\n    void\
    \ pop(){\n        tree[1] = tree.back();\n        tree.pop_back();\n        size_t\
    \ pos = 1;\n        while(pos*2<tree.size()){\n            size_t nx = pos * 2;\n\
    \            if(nx+1 < tree.size()){\n\t\t\t\tif(tree[nx] < tree[nx+1]) nx++;\n\
    \            }\n            if(tree[pos] < tree[nx]){\n                std::swap(tree[pos],\
    \ tree[nx]);\n            }else break;\n            pos = nx;\n        }\n   \
    \ }\n};\n\n\n\n"
  code: "#ifndef INCLUDED_HEAPQ\n#define INCLUDED_HEAPQ\n\n#include<vector>\n#include<algorithm>\n\
    #include<cassert>\n\ntemplate<typename T>\nstruct HeapQ {\n    std::vector<T>\
    \ tree;\n    HeapQ(): tree(1) {}\n\n    T top(){\n        assert(tree.size()>1);\n\
    \        return tree[1];\n    }\n\n    void push(T x){\n        tree.push_back(x);\n\
    \        size_t pos = tree.size() - 1;\n        while(pos/2 > 0){\n          \
    \  if(tree[pos/2] < tree[pos]){\n                std::swap(tree[pos/2], tree[pos]);\n\
    \            }else break;\n            pos /= 2;\n        }\n    }\n\n    void\
    \ pop(){\n        tree[1] = tree.back();\n        tree.pop_back();\n        size_t\
    \ pos = 1;\n        while(pos*2<tree.size()){\n            size_t nx = pos * 2;\n\
    \            if(nx+1 < tree.size()){\n\t\t\t\tif(tree[nx] < tree[nx+1]) nx++;\n\
    \            }\n            if(tree[pos] < tree[nx]){\n                std::swap(tree[pos],\
    \ tree[nx]);\n            }else break;\n            pos = nx;\n        }\n   \
    \ }\n};\n\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/heapq.cpp
  requiredBy: []
  timestamp: '2021-02-02 00:04:27+09:00'
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
