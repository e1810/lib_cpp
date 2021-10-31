---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data_structure/unionfind.cpp
    title: data_structure/unionfind.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/yosupo/data_structure/unionfind.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include<bits/stdc++.h>\n\
    #line 1 \"data_structure/unionfind.cpp\"\n\n\n#line 4 \"data_structure/unionfind.cpp\"\
    \n\nstruct UnionFind {\n\tstd::vector<int> data;\n\tUnionFind(int n=1e5): data(n,\
    \ -1) {}\n\n\tint root(int x){\n\t\tif(data[x]<0) return x;\n\t\telse return data[x]\
    \ = root(data[x]);\n\t}\n\n\tvoid unite(int x, int y){\n\t\tx = root(x);\n\t\t\
    y = root(y);\n\t\tif(x==y) return;\n\t\tdata[x] += data[y];\n\t\tdata[y] = x;\n\
    \t}\n};\n\n\n#line 4 \"test/yosupo/data_structure/unionfind.test.cpp\"\n\nint\
    \ main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n, &q);\n\tUnionFind uf(n);\n\twhile(q--){\n\
    \t\tint t, u, v;\n\t\tscanf(\"%d %d %d\", &t, &u, &v);\n\t\tif(t==0) uf.unite(u,\
    \ v);\n\t\telse printf(\"%d\\n\", uf.same(u, v));\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include<bits/stdc++.h>\n\
    #include\"../../../data_structure/unionfind.cpp\"\n\nint main(){\n\tint n, q;\n\
    \tscanf(\"%d %d\", &n, &q);\n\tUnionFind uf(n);\n\twhile(q--){\n\t\tint t, u,\
    \ v;\n\t\tscanf(\"%d %d %d\", &t, &u, &v);\n\t\tif(t==0) uf.unite(u, v);\n\t\t\
    else printf(\"%d\\n\", uf.same(u, v));\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - data_structure/unionfind.cpp
  isVerificationFile: true
  path: test/yosupo/data_structure/unionfind.test.cpp
  requiredBy: []
  timestamp: '2021-10-31 15:09:52+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo/data_structure/unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/data_structure/unionfind.test.cpp
- /verify/test/yosupo/data_structure/unionfind.test.cpp.html
title: test/yosupo/data_structure/unionfind.test.cpp
---
