#ifndef BINOM_LUCAS_INCLUDED
#define BINOM_LUCAS_INCLUDED

#include<combination.cpp>
template<typename Int>
Int binom(Int n, Int k){
	//TODO 二項係数 mod P を求めるやつ
}

template<typename Int>
Int binom_lucas(Int n, Int k, Int p){
	if(n<0 || k<0 || n<k) return 0;
	Int ret = 1;
	while(n>0 && k>0){
		ret *= binom(n%p, k%p);
		n /= p;
		k /= p;
	}
	return ret;
}


#endif
