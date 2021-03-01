#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/1/DPL_1_E"

#include<cstdio>
#include<string>
#include<iostream>

#include"../../../string/edit_distance.cpp"

int main(){
	std::string s, t;
	std::cin >> s >> t;
	int ans = edit_distance(s, t);
	printf("%d\n", ans);
	return 0;
}
