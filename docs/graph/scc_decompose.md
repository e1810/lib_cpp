---
title: scc_decompose
documentation_of: ../../graph/scc_decompose.cpp
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
