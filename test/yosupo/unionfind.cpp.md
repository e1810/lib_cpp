---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: data_structure/unionfind.cpp
    title: data_structure/unionfind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/yosupo/unionfind.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n#include<bits/stdc++.h>\n#line 1 \"data_structure/unionfind.cpp\"\n\n\n#line\
    \ 4 \"data_structure/unionfind.cpp\"\n\nstruct UnionFind {\n    std::vector<int>\
    \ data;\n    UnionFind(int n=1e5): data(n, -1) {}\n\n\tint root(int x){\n\t\t\
    if(data[x]<0) return x;\n\t\telse return data[x] = root(data[x]);\n\t}\n\n\tbool\
    \ same(int x, int y){\n\t\treturn root(x)==root(y);\n\t}\n\n\tvoid unite(int x,\
    \ int y){\n\t\tx = root(x);\n\t\ty = root(y);\n\t\tif(x==y) return;\n\t\tdata[x]\
    \ += data[y];\n\t\tdata[y] = x;\n\t}\n};\n\n\n#line 4 \"test/yosupo/unionfind.cpp\"\
    \n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n, &q);\n\tUnionFind uf(n);\n\
    \twhile(q--){\n\t\tint t, u, v;\n\t\tscanf(\"%d %d %d\", &t, &u, &v);\n\t\tif(t==0)\
    \ uf.unite(u, v);\n\t\telse printf(\"%d\\n\", uf.same(u, v));\n\t}\n\treturn 0;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include<bits/stdc++.h>\n\
    #include\"../../data_structure/unionfind.cpp\"\n\nint main(){\n\tint n, q;\n\t\
    scanf(\"%d %d\", &n, &q);\n\tUnionFind uf(n);\n\twhile(q--){\n\t\tint t, u, v;\n\
    \t\tscanf(\"%d %d %d\", &t, &u, &v);\n\t\tif(t==0) uf.unite(u, v);\n\t\telse printf(\"\
    %d\\n\", uf.same(u, v));\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - data_structure/unionfind.cpp
  isVerificationFile: false
  path: test/yosupo/unionfind.cpp
  requiredBy: []
  timestamp: '2020-09-29 17:31:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/yosupo/unionfind.cpp
layout: document
redirect_from:
- /library/test/yosupo/unionfind.cpp
- /library/test/yosupo/unionfind.cpp.html
title: test/yosupo/unionfind.cpp
---
