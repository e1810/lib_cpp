#ifndef INCLUDED_EDIT_DISTANCE
#define INCLUDED_EDIT_DISTANCE

#include<string>
#include<algorithm>

int edit_distance(std::string s, std::string t){
	int n = s.size(), m = t.size();
	int dp[n+1][m+1];
	for(int i=0; i<=n; i++) for(int j=0; j<=m; j++) dp[i][j] = 1e9;
	dp[0][0] = 0;

	for(int i=0; i<=n; i++){
		for(int j=0; j<=m; j++){
			if(i>0 && j>0){
				if(s[i-1]==t[j-1]) dp[i][j] = std::min(dp[i][j], dp[i-1][j-1]);
				else dp[i][j] = std::min(dp[i][j], dp[i-1][j-1]+1);
			}
			if(i>0) dp[i][j] = std::min(dp[i][j], dp[i-1][j] + 1);
			if(j>0) dp[i][j] = std::min(dp[i][j], dp[i][j-1] + 1);
		}
	}
	
	return dp[n][m];
}

#endif
