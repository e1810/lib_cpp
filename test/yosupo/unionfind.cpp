#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include<bits/stdc++.h>
#include"../../data_structure/unionfind.cpp"

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	UnionFind uf(n);
	while(q--){
		int t, u, v;
		scanf("%d %d %d", &t, &u, &v);
		if(t==0) uf.unite(u, v);
		else printf("%d\n", uf.same(u, v));
	}
	return 0;
}
