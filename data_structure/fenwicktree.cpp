#ifndef INCLUDED_FENWICKTREE
#define INCLUDED_FENWICKTREE
#include<vector>

// add: idx番目の値にxを加算
// sum: 区間[l, r)の総和を取得

template<typename T>
struct FenwickTree {
	std::vector<T> data;
	FenwickTree(int sz=1e5): data(sz+1, 0) {}

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
		return __sum(r) - __sum(l);
	}

};


#endif
