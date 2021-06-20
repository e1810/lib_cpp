#define PROBLEM "https://judge.yosupo.jp/problem/scc"

#include"../../../graph/scc_decompose.cpp"

#include<cstdio>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<std::vector<int>> links(n), rlinks(n);
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a].push_back(b);
		rlinks[b].push_back(a);
	}

	std::vector<std::vector<int>> scc = scc_decompose(links, rlinks);
	std::vector<int> topo = topological_sort(links, scc);

	printf("%ld\n", scc.size());
	for(int i: topo){
		printf("%ld", scc[i].size());
		for(auto v: scc[i]) printf(" %d", v); puts("");
	}
	return 0;
}

