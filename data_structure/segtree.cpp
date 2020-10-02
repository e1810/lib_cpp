#ifndef INCLUDED_SEGTREE
#define INCLUDED_SEGTREE
#include<vector>
#include<functional>
template<typename T>
struct Segtree {
    using F = std::function<T(T,T)>;
    const T e;
    F func;
    size_t sz = 1;
    std::vector<T> data;
    Segtree(int n, F func, T e): func(func), e(e){
        while(sz<n) sz <<= 1;
        data.assign(sz*2, e);
    }

	void set(size_t idx, T val){data[sz+idx] = val;}
	void build(){
		for(int i=sz-1; i>0; i--){
			data[i] = func(data[2*i], data[2*i+1]);
		}
	}

    void update(size_t idx, T val){
        idx += sz;
        data[idx] = val;
        while(idx>>=1){
            data[idx] = func(data[idx*2], data[idx*2+1]);
        }
    }

    T query(size_t l, size_t r){
        T resL = e, resR = e;
        for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){
            if(l&1) resL = func(resL, data[l++]);
            if(r&1) resR = func(data[--r], resR);
        }
        return func(resL, resR);
    }

	T operator[](size_t idx){return data[sz+idx];}
};

#endif
