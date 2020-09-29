#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include<cstdio>
#include<cstdint>
#include"../../../data_structure/fenwicktree.cpp"
using ll = int_fast64_t;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	FenwickTree<ll> bit(n);
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		bit.add(i, a);
	}
	
	while(q--){
		int t, a, b;
		scanf("%d %d %d", &t, &a, &b);
		if(t==0) bit.add(a, b);
		else printf("%ld\n", bit.sum(a, b));
	}
	return 0;
}
