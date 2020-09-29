#ifndef INCLUDED_FENWICK_HPP
#define INCLUDED_FENWICK_HPP
#include<vector>

// add: idx番目の値にxを加算
// sum: 区間[0, r]の総和を取得

template<typename T>
struct Fenwick {
    std::vector<T> data;
    Fenwick(int sz=1e5): data(sz+1, 0) {}

    void add(int idx, T x){
		idx++;
		while(idx<data.size()){
	    	data[idx] += x;
	    	idx += idx & -idx;
		}
    }

	T __sum(int r){
		T ret = 0;
		while(r>0){
			ret += data[r];
			r -= r & -r;
		}
		return ret;
	}

	T sum(int l, int r){
		return __sum(r+1) - __sum(l);
	}

};


#endif
