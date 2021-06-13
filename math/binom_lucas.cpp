#include"combination.cpp"

struct Lucas {
	const int64_t MOD;
	Combination com;
	Lucas(int m): MOD(m), com(m, m) {}

	int64_t binom_lucas(int64_t n, int64_t k){
		if(n<0 || k<0 || n<k) return 0;
		int64_t ret = 1;
		while(n>0 || k>0){
			ret = ret * com.C(n%MOD, k%MOD) % MOD;
			n /= MOD;
			k /= MOD;
		}
		return ret;
	}
};
