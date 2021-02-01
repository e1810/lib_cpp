---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/segtree.cpp
    title: data_structure/segtree.cpp
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
  bundledCode: "#line 1 \"test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n#include<cstdio>\n\
    #include<cstdint>\n#line 1 \"data_structure/segtree.cpp\"\n\n\n#include<vector>\n\
    #include<functional>\ntemplate<typename T>\nstruct Segtree {\n\tusing F = std::function<T(T,T)>;\n\
    \tconst T e;\n\tF func;\n\tsize_t sz = 1;\n\tstd::vector<T> data;\n\tSegtree(int\
    \ n, F func, T e): func(func), e(e){\n\t\twhile(sz<n) sz <<= 1;\n\t\tdata.assign(sz*2,\
    \ e);\n\t}\n\n\tvoid set(size_t idx, T val){data[sz+idx] = val;}\n\tvoid build(){\n\
    \t\tfor(int i=sz-1; i>0; i--){\n\t\t\tdata[i] = func(data[2*i], data[2*i+1]);\n\
    \t\t}\n\t}\n\n\tvoid update(size_t idx, T val){\n\t\tidx += sz;\n\t\tdata[idx]\
    \ = val;\n\t\twhile(idx>>=1){\n\t\t\tdata[idx] = func(data[idx*2], data[idx*2+1]);\n\
    \t\t}\n\t}\n\n\tT query(size_t l, size_t r){\n\t\tT resL = e, resR = e;\n\t\t\
    for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){\n\t\t\tif(l&1) resL = func(resL, data[l++]);\n\
    \t\t\tif(r&1) resR = func(data[--r], resR);\n\t\t}\n\t\treturn func(resL, resR);\n\
    \t}\n\n\tT operator[](size_t idx){return data[sz+idx];}\n};\n\n\n#line 5 \"test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp\"\
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
  timestamp: '2021-02-02 00:04:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
- /verify/test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp.html
title: test/yosupo/data_structure/point_add_range_sum.segment_tree.test.cpp
---
