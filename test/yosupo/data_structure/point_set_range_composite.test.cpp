#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"
#include<cstdio>
#include<cstdint>
#include"../../../data_structure/segtree.cpp"
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
const ll MOD = 998244353;

P composite(P a, P b){
	return P(a.first*b.first%MOD, (b.first*a.second%MOD+b.second)%MOD);
}

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	Segtree<P> seg(n, composite, P(1,0));
	for(int i=0; i<n; i++){
		P a;
		scanf("%ld %ld", &a.first, &a.second);
		seg.update(i, a);
	}

	while(q--){
		int t, a, b, c;
		scanf("%d %d %d %d", &t, &a, &b, &c);
		if(t==0) seg.update(a, P(b, c));
		else{
			P x = seg.query(a, b);
			printf("%ld\n", (x.first*c%MOD+x.second)%MOD);
		}
	}
	return 0;
}


