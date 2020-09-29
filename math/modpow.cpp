#ifndef MODPOW_INCLUDED
#define MODPOW_INCLUDED

template<typename T>
T modpow(T a, T p, T m){
    T ret = 1;
    while(p){
	if(p&1) ret = ret * a % m;
	a = a * a % m;
	p >>= 1;
    }
    return ret;
}

#endif
