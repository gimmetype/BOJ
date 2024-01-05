#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double stack[100];
int idx = -1;
void push(double value) {
	stack[++idx] = value;
}
double pop() {
	return stack[idx--];
}
int main() {
	int n;
	char str[101];
	scanf("%d", &n);
	int* value = (int*)malloc(sizeof(int) * n);
	scanf("%s", str);
	for (int i = 0; i < n; i++) {
		scanf("%d", &value[i]);
	}
	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			push(value[str[i] - 'A']);
		}
		else if (str[i] == '+') {
			double b = pop();
			double a = pop();
			push(a + b);
		}
		else if (str[i] == '-') {
			double b = pop();
			double a = pop();
			push(a - b);
		}
		else if (str[i] == '*') {
			double b = pop();
			double a = pop();
			push(a * b);
		}
		else if (str[i] == '/') {
			double b = pop();
			double a = pop();
			push(a / b);
		}
	}
	printf("%.2lf", pop());

	return 0;
}