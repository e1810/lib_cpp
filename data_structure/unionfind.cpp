#ifndef INCLUDED_UNIONFIND_HPP
#define INCLUDED_UNIONFIND_HPP
#include<vector>

struct UnionFind {
    std::vector<int> data;
    UnionFind(int n=1e5): data(n, -1) {}

	int root(int x){
		if(data[x]<0) return x;
		else return data[x] = root(data[x]);
	}

	bool same(int x, int y){
		return root(x)==root(y);
	}

	void unite(int x, int y){
		x = root(x);
		y = root(y);
		if(x==y) return;
		data[x] += data[y];
		data[y] = x;
	}
};

#endif
