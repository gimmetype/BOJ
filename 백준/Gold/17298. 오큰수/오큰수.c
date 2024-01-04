#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int stack[1000000];
int idx = -1;

void push(int value) {
	stack[++idx] = value;
}

int pop() {
	return stack[idx--];
}

int is_empty() {
	return (idx == -1);
}

int top() {
	return stack[idx];
}

int main() {
	int N;
	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		while (!is_empty() && arr[top()] < arr[i]) {
			arr[pop()] = arr[i];
		}
		push(i);
	}
	while (!is_empty()) {
		arr[pop()] = -1;
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}
