#ifndef INCLUDED_SEGTREE_HPP
#define INCLUDED_SEGTREE_HPP
#include<vector>

<template typename T>
struct Segtree {
	using func = std::function<T(T, T)>;

	int sz;
	func f;
	T unit;
	std::vector<T> data;

	Segtree(int n=1e5, func f, T u): f(f), unit(u) {
		sz = 1;
		while(sz<n) sz<<=1;
		seg.assign(2*sz, unit);
	}

	void set(int idx, T x){
		seg[sz + idx] = x;
	}

	void build(){
		for(int k=sz-1; k>0; k--){
			data[k] = f(data[2*k], data[2*k+1]);
		}
	}


	void update(int idx, T x){
		idx += sz;
		data[idx] = x;
		while(idx>>=1){
			data[idx] = f(data[2*idx], data[2*idx+1]);
		}
	}

	T query(int a,  int b){
		T l = unit, r = unit;
		for(a+=sz, b+=sz; a<b; a>>=1, b>>=1){
			if(a&1) l = f(l, data[a++]);
			if(b&1) r = f(data[--b], r);
		}
		return f(l, r);
	}
};

#endif
