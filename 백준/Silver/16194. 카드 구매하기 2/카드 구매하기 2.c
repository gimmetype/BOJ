#include <stdio.h>

int main(void) {
	int i, j, n;
	int min, tmp;
	int p[1001], dp[1001];

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		scanf("%d", &p[i]);

	dp[0] = 0;

	for (i = 1; i <= n; i++) {
		min = p[1] + dp[i-1];

		for (j = 2; j <= i; j++) {
			tmp = p[j] + dp[i - j];

			if (tmp < min)
				min = tmp;
		}

		dp[i] = min;
	}
	
	printf("%d", dp[n]);
	
	return 0;
}