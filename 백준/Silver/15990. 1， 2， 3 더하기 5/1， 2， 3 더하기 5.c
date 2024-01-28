#include <stdio.h>
#define M 1000000009

int main(void) {
	int t, i, n, ans, dp[100001][3] = {};
	scanf("%d", &t);
	
	dp[1][0] = 1;
	dp[2][1] = 1;
	dp[3][0] = 1;
	dp[3][1] = 1;
	dp[3][2] = 1;
	
	for(i=4; i<=100000; i++) {
		dp[i][0] = (dp[i-1][1] + dp[i-1][2])%M;
		dp[i][1] = (dp[i-2][0] + dp[i-2][2])%M;
		dp[i][2] = (dp[i-3][0] + dp[i-3][1])%M;
	}
	
	while(t--) { 
		scanf("%d", &n);
		ans = (((dp[n][0] + dp[n][1]) % M) + dp[n][2]) %M;
		printf("%d\n", ans); 
	}
}