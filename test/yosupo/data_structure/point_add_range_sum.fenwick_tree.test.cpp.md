---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/fenwicktree.cpp
    title: data_structure/fenwicktree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n#include<cstdio>\n\
    #include<cstdint>\n#line 1 \"data_structure/fenwicktree.cpp\"\n\n\n#include<vector>\n\
    \n// add: idx\u756A\u76EE\u306E\u5024\u306Bx\u3092\u52A0\u7B97\n// sum: \u533A\
    \u9593[l, r)\u306E\u7DCF\u548C\u3092\u53D6\u5F97\n\ntemplate<typename T>\nstruct\
    \ FenwickTree {\n\tstd::vector<T> data;\n\tFenwickTree(int sz=1e5): data(sz+1,\
    \ 0) {}\n\n\tvoid add(int idx, T x){\n\t\tidx++;\n\t\twhile(idx<data.size()){\n\
    \t\t\tdata[idx] += x;\n\t\t\tidx += idx & -idx;\n\t\t}\n\t}\n\n\tT __sum(int r){\n\
    \t\tT ret = 0;\n\t\twhile(r>0){\n\t\t\tret += data[r];\n\t\t\tr -= r & -r;\n\t\
    \t}\n\t\treturn ret;\n\t}\n\n\tT sum(int l, int r){\n\t\treturn __sum(r) - __sum(l);\n\
    \t}\n\n};\n\n\n\n#line 5 \"test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp\"\
    \nusing ll = int_fast64_t;\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n,\
    \ &q);\n\tFenwickTree<ll> bit(n);\n\tfor(int i=0; i<n; i++){\n\t\tint a;\n\t\t\
    scanf(\"%d\", &a);\n\t\tbit.add(i, a);\n\t}\n\t\n\twhile(q--){\n\t\tint t, a,\
    \ b;\n\t\tscanf(\"%d %d %d\", &t, &a, &b);\n\t\tif(t==0) bit.add(a, b);\n\t\t\
    else printf(\"%ld\\n\", bit.sum(a, b));\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include<cstdio>\n#include<cstdint>\n#include\"../../../data_structure/fenwicktree.cpp\"\
    \nusing ll = int_fast64_t;\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n,\
    \ &q);\n\tFenwickTree<ll> bit(n);\n\tfor(int i=0; i<n; i++){\n\t\tint a;\n\t\t\
    scanf(\"%d\", &a);\n\t\tbit.add(i, a);\n\t}\n\t\n\twhile(q--){\n\t\tint t, a,\
    \ b;\n\t\tscanf(\"%d %d %d\", &t, &a, &b);\n\t\tif(t==0) bit.add(a, b);\n\t\t\
    else printf(\"%ld\\n\", bit.sum(a, b));\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - data_structure/fenwicktree.cpp
  isVerificationFile: true
  path: test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
  requiredBy: []
  timestamp: '2021-06-13 03:44:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
- /verify/test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp.html
title: test/yosupo/data_structure/point_add_range_sum.fenwick_tree.test.cpp
---
