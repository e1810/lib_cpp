#include<vector>

struct Combination {
	int64_t MOD;
	std::vector<int64_t> fac, inv, finv;
	Combination(int n, int m): MOD(m), fac(n), inv(n), finv(n) {
		fac[0] = fac[1] = inv[1] = finv[0] = finv[1] = 1;
		for(int64_t i=2; i<n; i++){
			fac[i] = fac[i-1] * i % MOD;
			inv[i] = (MOD - MOD/i) * inv[MOD%i] % MOD;
			finv[i] = finv[i-1] * inv[i] % MOD;
		}
	}

	int64_t C(int64_t n, int64_t k){
		if(n==k || k==0) return 1;
		if(n<0 || k<0 || n<k) return 0;
		return fac[n] * finv[k] % MOD * finv[n-k] % MOD;
	}

	int64_t P(int64_t n, int64_t k){
		return C(n, k) * fac[k] % MOD;
	}

	int64_t H(int64_t n, int64_t k){
		return C(n+k-1, k);
	}
};
