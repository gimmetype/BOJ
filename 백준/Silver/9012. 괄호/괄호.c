#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int N;
	char string[51];
	scanf("%d", &N);


	int left = 0, right = 0;
	for (int i = 0; i < N; i++) {
		scanf("%s", string);
		int len = strlen(string);

		for (int j = 0; j < len; j++) {
			if (string[j] == '(') {
				left++;
			}
			else if (string[j] == ')') {
				right++;
			}
			if (right > left)
			{
				break;
			}
		}

		if (left != right) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
		left = 0;
		right = 0;

	}

	return 0;
}
