---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/GRL/3_C.test.cpp
    title: test/aoj/GRL/3_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/graph/scc.test.cpp
    title: test/yosupo/graph/scc.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/scc_decompose.cpp\"\n#include<vector>\n#include<algorithm>\n\
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
    return ret;\n}\n\n\n\n"
  code: "#include<vector>\n#include<algorithm>\n#include<functional>\n#include<queue>\n\
    \nstd::vector<std::vector<int>> scc_decompose(\n\t\tstd::vector<std::vector<int>>\
    \ &links,\n\t\tstd::vector<std::vector<int>> &rlinks\n\t){\n\tint n = links.size();\n\
    \tint cnt = 0;\n\tstd::vector<int> order;\n\tstd::vector<bool> visited(n, false);\n\
    \tstd::function<void(int)> dfs = [&](int x){\n\t\tvisited[x] = true;\n\t\tfor(auto\
    \ to: links[x]) if(!visited[to]) dfs(to);\n\t\torder.push_back(x);\n\t};\n\n\t\
    for(int i=0; i<n; i++) if(!visited[i]) dfs(i);\n\tstd::reverse(order.begin(),\
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
    return ret;\n}\n\n\n\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/scc_decompose.cpp
  requiredBy: []
  timestamp: '2021-06-20 15:00:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/GRL/3_C.test.cpp
  - test/yosupo/graph/scc.test.cpp
documentation_of: graph/scc_decompose.cpp
layout: document
title: scc_decompose
---

## 概要
scc_decompose: 強連結成分分解を行う。
同じ成分に属す頂点集合を同じリストにまとめ、そのリストのリストを返す。

dfsを行い、帰りがけ順序を記録しておく。辺の向きを反転させ、先程記録した順序で再びdfsを行う。各dfsで始点を抜けると、それまでに通過した頂点集合が強連結成分となる。


topological_sort: 強連結成分ごとのトポロジカルソートを行う。

まず強連結成分ごとに一つの頂点を割り当てる。各辺を見ていき、両端の属す成分が異なるならばその辺を張る、とすることでグラフが完成する。あとは普通のトポロジカルソート

## 計算量
scc_decompose: $ O(E + V) $

topological_sort: $ O(E + V) $
