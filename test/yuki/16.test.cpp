#define PROBLEM "https://yukicoder.me/problems/no/16"
#include<bits/stdc++.h>
#include"../../math/modpow.cpp"
using ll = int_fast64_t;
const int MOD = 1000003;

int main(){
	ll x, n, a;
	scanf("%ld %ld", &x, &n);

	ll ans = 0;
	for(int i=0; i<n; i++){
		scanf("%ld", &a);
		ans += modpow<ll>(x, a, MOD);
		ans %= MOD;
	}

	printf("%ld\n", ans);
	return 0;
}

