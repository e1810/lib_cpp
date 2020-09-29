---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/segtree.cpp
    title: data_structure/segtree.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n#include<cstdio>\n\
    #include<cstdint>\n#line 1 \"data_structure/segtree.cpp\"\n\n\n#include<vector>\n\
    #include<functional>\n\ntemplate<typename T>\nstruct Segtree {\n\tusing func =\
    \ std::function<T(T, T)>;\n\n\tint sz;\n\tfunc f;\n\tT unit;\n\tstd::vector<T>\
    \ data;\n\n\tSegtree(int n, func f, T u): f(f), unit(u) {\n\t\tsz = 1;\n\t\twhile(sz<n)\
    \ sz<<=1;\n\t\tdata.assign(2*sz, unit);\n\t}\n\n\tvoid set(int idx, T x){\n\t\t\
    data[sz + idx] = x;\n\t}\n\n\tvoid build(){\n\t\tfor(int k=sz-1; k>0; k--){\n\t\
    \t\tdata[k] = f(data[2*k], data[2*k+1]);\n\t\t}\n\t}\n\n\n\tvoid update(int idx,\
    \ T x){\n\t\tidx += sz;\n\t\tdata[idx] = x;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx]\
    \ = f(data[2*idx], data[2*idx+1]);\n\t\t}\n\t}\n\n\tT query(int a,  int b){\n\t\
    \tT l = unit, r = unit;\n\t\tfor(a+=sz, b+=sz; a<b; a>>=1, b>>=1){\n\t\t\tif(a&1)\
    \ l = f(l, data[a++]);\n\t\t\tif(b&1) r = f(data[--b], r);\n\t\t}\n\t\treturn\
    \ f(l, r);\n\t}\n\n\tT operator[](size_t i){\n\t\treturn data[sz+i];\n\t}\n};\n\
    \n\n#line 5 \"test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp\"\
    \nusing ll = int_fast64_t;\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n,\
    \ &q);\n\tSegtree<ll> seg(n, [](ll a, ll b){return a+b;}, 0);\n\tfor(int i=0;\
    \ i<n; i++){\n\t\tint a;\n\t\tscanf(\"%d\", &a);\n\t\tseg.set(i, a);\n\t}\n\t\
    seg.build();\n\n\twhile(q--){\n\t\tint t, a, b;\n\t\tscanf(\"%d %d %d\", &t, &a,\
    \ &b);\n\t\tif(t==0) seg.update(a, seg[a]+b);\n\t\telse printf(\"%ld\\n\", seg.query(a,\
    \ b));\n\t}\n\treturn 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include<cstdio>\n#include<cstdint>\n#include\"../../../data_structure/segtree.cpp\"\
    \nusing ll = int_fast64_t;\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n,\
    \ &q);\n\tSegtree<ll> seg(n, [](ll a, ll b){return a+b;}, 0);\n\tfor(int i=0;\
    \ i<n; i++){\n\t\tint a;\n\t\tscanf(\"%d\", &a);\n\t\tseg.set(i, a);\n\t}\n\t\
    seg.build();\n\n\twhile(q--){\n\t\tint t, a, b;\n\t\tscanf(\"%d %d %d\", &t, &a,\
    \ &b);\n\t\tif(t==0) seg.update(a, seg[a]+b);\n\t\telse printf(\"%ld\\n\", seg.query(a,\
    \ b));\n\t}\n\treturn 0;\n}\n"
  dependsOn:
  - data_structure/segtree.cpp
  isVerificationFile: true
  path: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
  requiredBy: []
  timestamp: '2020-09-29 20:15:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
- /verify/test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp.html
title: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
---
