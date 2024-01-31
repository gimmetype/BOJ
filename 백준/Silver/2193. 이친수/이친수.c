#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
long long arr[100] = { 0, };
int sum;

int main() {
    scanf("%d", &N);
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;

    for (int i = 3; i < N+1; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%lld", arr[N]);

    return 0;
}