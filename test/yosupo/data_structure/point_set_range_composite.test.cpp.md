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
    PROBLEM: https://judge.yosupo.jp/problem/point_set_range_composite
    links:
    - https://judge.yosupo.jp/problem/point_set_range_composite
  bundledCode: "#line 1 \"test/yosupo/data_structure/point_set_range_composite.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n#include<cstdio>\n#include<cstdint>\n#line 1 \"data_structure/segtree.cpp\"\n\
    \n\n#include<vector>\n#include<functional>\ntemplate<typename T>\nstruct Segtree\
    \ {\n    using F = std::function<T(T,T)>;\n    const T e;\n    F func;\n    size_t\
    \ sz = 1;\n    std::vector<T> data;\n    Segtree(int n, F func, T e): func(func),\
    \ e(e){\n        while(sz<n) sz <<= 1;\n        data.assign(sz*2, e);\n    }\n\
    \n\tvoid set(size_t idx, T val){data[sz+idx] = val;}\n\tvoid build(){\n\t\tfor(int\
    \ i=sz-1; i>0; i--){\n\t\t\tdata[i] = func(data[2*i], data[2*i+1]);\n\t\t}\n\t\
    }\n\n    void update(size_t idx, T val){\n        idx += sz;\n        data[idx]\
    \ = val;\n        while(idx>>=1){\n            data[idx] = func(data[idx*2], data[idx*2+1]);\n\
    \        }\n    }\n\n    T query(size_t l, size_t r){\n        T resL = e, resR\
    \ = e;\n        for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){\n            if(l&1) resL\
    \ = func(resL, data[l++]);\n            if(r&1) resR = func(data[--r], resR);\n\
    \        }\n        return func(resL, resR);\n    }\n\n\tT operator[](size_t idx){return\
    \ data[sz+idx];}\n};\n\n\n#line 5 \"test/yosupo/data_structure/point_set_range_composite.test.cpp\"\
    \nusing ll = int_fast64_t;\nusing P = std::pair<ll,ll>;\nconst ll MOD = 998244353;\n\
    \nP composite(P a, P b){\n\treturn P(a.first*b.first%MOD, (b.first*a.second%MOD+b.second)%MOD);\n\
    }\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n, &q);\n\tSegtree<P> seg(n,\
    \ composite, P(1,0));\n\tfor(int i=0; i<n; i++){\n\t\tP a;\n\t\tscanf(\"%ld %ld\"\
    , &a.first, &a.second);\n\t\tseg.update(i, a);\n\t}\n\n\twhile(q--){\n\t\tint\
    \ t, a, b, c;\n\t\tscanf(\"%d %d %d %d\", &t, &a, &b, &c);\n\t\tif(t==0) seg.update(a,\
    \ P(b, c));\n\t\telse{\n\t\t\tP x = seg.query(a, b);\n\t\t\tprintf(\"%ld\\n\"\
    , (x.first*c%MOD+x.second)%MOD);\n\t\t}\n\t}\n\treturn 0;\n}\n\n\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n#include<cstdio>\n#include<cstdint>\n#include\"../../../data_structure/segtree.cpp\"\
    \nusing ll = int_fast64_t;\nusing P = std::pair<ll,ll>;\nconst ll MOD = 998244353;\n\
    \nP composite(P a, P b){\n\treturn P(a.first*b.first%MOD, (b.first*a.second%MOD+b.second)%MOD);\n\
    }\n\nint main(){\n\tint n, q;\n\tscanf(\"%d %d\", &n, &q);\n\tSegtree<P> seg(n,\
    \ composite, P(1,0));\n\tfor(int i=0; i<n; i++){\n\t\tP a;\n\t\tscanf(\"%ld %ld\"\
    , &a.first, &a.second);\n\t\tseg.update(i, a);\n\t}\n\n\twhile(q--){\n\t\tint\
    \ t, a, b, c;\n\t\tscanf(\"%d %d %d %d\", &t, &a, &b, &c);\n\t\tif(t==0) seg.update(a,\
    \ P(b, c));\n\t\telse{\n\t\t\tP x = seg.query(a, b);\n\t\t\tprintf(\"%ld\\n\"\
    , (x.first*c%MOD+x.second)%MOD);\n\t\t}\n\t}\n\treturn 0;\n}\n\n\n"
  dependsOn:
  - data_structure/segtree.cpp
  isVerificationFile: true
  path: test/yosupo/data_structure/point_set_range_composite.test.cpp
  requiredBy: []
  timestamp: '2020-10-03 01:13:54+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/data_structure/point_set_range_composite.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/data_structure/point_set_range_composite.test.cpp
- /verify/test/yosupo/data_structure/point_set_range_composite.test.cpp.html
title: test/yosupo/data_structure/point_set_range_composite.test.cpp
---
