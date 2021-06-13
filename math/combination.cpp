#include<vector>

const int MOD = 1e9 + 7;

template<typename Int>
struct Combination {
	std::vector<Int> fac, inv, finv;
	Combination(int n=1e6): fac(n), inv(n), finv(n) {
		fac[0] = fac[1] = inv[1] = finv[0] = finv[1] = 1;
		for(Int i=2; i<n; i++){
			fac[i] = fac[i-1] * i % MOD;
			inv[i] = (MOD - MOD/i) * inv[MOD%i] % MOD;
			finv[i] = finv[i-1] * inv[i] % MOD;
		}
	}

	Int C(Int n, Int k){
		if(n==k || k==0) return 1;
		if(n<0 || k<0 || n<k) return 0;
		return fac[n] * finv[k] % MOD * finv[n-k] % MOD;
	}

	Int P(Int n, Int k){
		return C(n, k) * fac[k] % MOD;
	}

	Int H(Int n, Int k){
		return C(n+k-1, k);
	}
};
