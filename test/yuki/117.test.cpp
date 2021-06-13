#define PROBLEM "https://yukicoder.me/problems/no/117"

#include<cstdio>
#include<cstdint>
#include"../../math/combination.cpp"
const int MOD = 1e9 + 7;

int main(){
	int t;
	scanf("%d", &t);

	Combination com(2e6, MOD);

	while(t--){
		getchar();
		char c = getchar();
		int n, k;
		scanf("(%d,%d)", &n, &k);
		if(c=='C') printf("%ld\n", com.C(n, k));
		if(c=='P') printf("%ld\n", com.P(n, k));
		if(c=='H') printf("%ld\n", com.H(n, k));
	}
	return 0;
}
