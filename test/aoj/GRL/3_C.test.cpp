#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C"

#include"../../../graph/scc_decompose.cpp"

#include<cstdio>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<std::vector<int>> links(n), rlinks(n);
	REP(i, 0, m){
		int s, t;
		scanf("%d %d", &s, &t);
		links[s].push_back(t);
		rlinks[t].push_back(s);
	}

	std::vector<std::vector<int>> scc = scc_decompose(links, rlinks);
	int component_id[n], cnt = 0;
	for(auto &c: scc){
		for(auto &v: c){
			component_id[v] = cnt;
		}
		cnt++;
	}

	int q;
	scanf("%d", &q);
	while(q--){
		int u, v;
		scanf("%d %d", &u, &v);
		if(component_id[u]==component_id[v]){
			puts("1");
		}else puts("0");
	}
	return 0;
}
