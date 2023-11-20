#include <stdio.h>

int main(void) {
	int N, i, j;
	int line = 2;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		int mul = 1;
		if (i == 1) {
			++line;
		}
		else {
			for (j = 1; j < i; j++) {
				mul *= 2;
			}
			line += mul;
		}
	}

	printf("%d\n", line * line);

	return 0;
}