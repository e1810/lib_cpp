---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/scc_decompose.cpp
    title: scc_decompose
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/scc
    links:
    - https://judge.yosupo.jp/problem/scc
  bundledCode: "#line 1 \"test/yosupo/graph/scc.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/scc\"\
    \n\n#line 1 \"graph/scc_decompose.cpp\"\n#include<vector>\n#include<algorithm>\n\
    #include<functional>\n#include<queue>\n\nstd::vector<std::vector<int>> scc_decompose(\n\
    \t\tstd::vector<std::vector<int>> &links,\n\t\tstd::vector<std::vector<int>> &rlinks\n\
    \t){\n\tint n = links.size();\n\tint cnt = 0;\n\tstd::vector<int> order;\n\tstd::vector<bool>\
    \ visited(n, false);\n\tstd::function<void(int)> dfs = [&](int x){\n\t\tvisited[x]\
    \ = true;\n\t\tfor(auto to: links[x]) if(!visited[to]) dfs(to);\n\t\torder.push_back(x);\n\
    \t};\n\n\tfor(int i=0; i<n; i++) if(!visited[i]) dfs(i);\n\tstd::reverse(order.begin(),\
    \ order.end());\n\n\tcnt = 0;\n\tstd::vector<std::vector<int>> scc;\n\tstd::fill(visited.begin(),\
    \ visited.end(), false);\n\tdfs = [&](int x){\n\t\tvisited[x] = true;\n\t\tfor(auto\
    \ to: rlinks[x]) if(!visited[to]) dfs(to);\n\t\tscc[cnt].push_back(x);\n\t};\n\
    \n\tfor(auto i: order) if(!visited[i]){\n\t\tscc.push_back(std::vector<int>());\n\
    \t\tdfs(i);\n\t\tcnt++;\n\t}\n\n\treturn scc;\n}\n\n\nstd::vector<int> topological_sort(\n\
    \t\tstd::vector<std::vector<int>> &links,\n\t\tstd::vector<std::vector<int>> &scc\n\
    \t){\n\tint n = links.size();\n\tstd::vector<int> scc_num(n);\n\tfor(int i=0;\
    \ i<scc.size(); i++){\n\t\tfor(int &v: scc[i]) scc_num[v] = i;\n\t}\n\t\n\tstd::vector<int>\
    \ in_cnt(scc.size());\n\tstd::vector<std::vector<int>> scc_links(scc.size());\n\
    \tfor(int i=0; i<links.size(); i++){\n\t\tfor(int j: links[i]){\n\t\t\tif(scc_num[i]!=scc_num[j]){\n\
    \t\t\t\tscc_links[scc_num[i]].push_back(scc_num[j]);\n\t\t\t\tin_cnt[scc_num[j]]++;\n\
    \t\t\t}\n\t\t}\n\t}\n\n\tstd::queue<int> que;\n\tfor(int i=0; i<scc.size(); i++)\
    \ if(in_cnt[i]==0) que.push(i);\n\tstd::vector<int> ret;\n\twhile(!que.empty()){\n\
    \t\tint now = que.front();\n\t\tque.pop();\n\t\tret.push_back(now);\n\t\tfor(auto\
    \ to: scc_links[now]){\n\t\t\tif(--in_cnt[to]==0) que.push(to);\n\t\t}\n\t}\n\t\
    return ret;\n}\n\n\n\n#line 4 \"test/yosupo/graph/scc.test.cpp\"\n\n#include<cstdio>\n\
    \nint main(){\n\tint n, m;\n\tscanf(\"%d %d\", &n, &m);\n\tstd::vector<std::vector<int>>\
    \ links(n), rlinks(n);\n\tfor(int i=0; i<m; i++){\n\t\tint a, b;\n\t\tscanf(\"\
    %d %d\", &a, &b);\n\t\tlinks[a].push_back(b);\n\t\trlinks[b].push_back(a);\n\t\
    }\n\n\tstd::vector<std::vector<int>> scc = scc_decompose(links, rlinks);\n\tstd::vector<int>\
    \ topo = topological_sort(links, scc);\n\n\tprintf(\"%ld\\n\", scc.size());\n\t\
    for(int i: topo){\n\t\tprintf(\"%ld\", scc[i].size());\n\t\tfor(auto v: scc[i])\
    \ printf(\" %d\", v); puts(\"\");\n\t}\n\treturn 0;\n}\n\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/scc\"\n\n#include\"../../../graph/scc_decompose.cpp\"\
    \n\n#include<cstdio>\n\nint main(){\n\tint n, m;\n\tscanf(\"%d %d\", &n, &m);\n\
    \tstd::vector<std::vector<int>> links(n), rlinks(n);\n\tfor(int i=0; i<m; i++){\n\
    \t\tint a, b;\n\t\tscanf(\"%d %d\", &a, &b);\n\t\tlinks[a].push_back(b);\n\t\t\
    rlinks[b].push_back(a);\n\t}\n\n\tstd::vector<std::vector<int>> scc = scc_decompose(links,\
    \ rlinks);\n\tstd::vector<int> topo = topological_sort(links, scc);\n\n\tprintf(\"\
    %ld\\n\", scc.size());\n\tfor(int i: topo){\n\t\tprintf(\"%ld\", scc[i].size());\n\
    \t\tfor(auto v: scc[i]) printf(\" %d\", v); puts(\"\");\n\t}\n\treturn 0;\n}\n\
    \n"
  dependsOn:
  - graph/scc_decompose.cpp
  isVerificationFile: true
  path: test/yosupo/graph/scc.test.cpp
  requiredBy: []
  timestamp: '2021-06-20 15:00:49+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo/graph/scc.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo/graph/scc.test.cpp
- /verify/test/yosupo/graph/scc.test.cpp.html
title: test/yosupo/graph/scc.test.cpp
---
