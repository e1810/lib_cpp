#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include<cstdio>
#include<cstdint>
#include"../../../data_structure/segtree.cpp"
using ll = int_fast64_t;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	Segtree<ll> seg(n, [](ll a, ll b){return a+b;}, 0);
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		seg.set(i, a);
	}
	seg.build();

	while(q--){
		int t, a, b;
		scanf("%d %d %d", &t, &a, &b);
		if(t==0) seg.update(a, seg[a]+b);
		else printf("%ld\n", seg.query(a, b));
	}
	return 0;
}
