#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[100000];
int top = -1;

int empty() {
	if (top == -1) {
		return 1;
	}
	return 0;
}

void push(int x) {
	stack[++top] = x;
}

int pop() {
	if (top!= -1){
		return stack[top--];
	}
	return 0;
}


int main() {

	int N;
	scanf("%d", &N);

	char op[200001];

	int num;
	int j = 1, k = 0;
	int res;
	for (int i = 0; i < N; i++){
		scanf("%d", &num);

		while (j <= num) {
			push(j);
			op[k++] = '+';
			j++;
		}
		res = pop();
		if (res == num){
			op[k++] = '-';
		}
		else {
			printf("NO\n");
			return 0;
		}
	}
	for (int i = 0; i < N*2; i++){
		printf("%c\n", op[i]);
	}

	return 0;
}
