#ifndef BINOM_MOD3_INCLUDED
#define BINOM_MOD3_INCLUDED

#include<vector>
#include<cassert>

struct binom_mod3 {
	std::vector<int> quo, rem;
	binom_mod3(int n): quo(n), rem(n) {
		quo[0] = 0;
		rem[0] = 1;
		for(int i=1; i<n; i++){
			int m = i, cnt = 0;
			while(m%3==0){
				m /= 3;
				cnt++;
			}
			quo[i] = quo[i-1] + cnt;
			rem[i] = rem[i-1] * m % 3;
		}
	}
	
	int eval(int n, int k){
		assert(n < quo.size());
		if(n<0 || k<0 || n<k) return 0;
		if(quo[n] > quo[k] + quo[n-k]) return 0;
		int num = rem[n], den = rem[k] * rem[n-k] % 3;
		return num * den % 3;
	}
};

#endif

