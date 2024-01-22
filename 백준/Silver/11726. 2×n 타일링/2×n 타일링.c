#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1001] = { 0, 1, 2 };
int main() {

    int N;
    scanf("%d", &N);

    for (int i = 3; i <= N; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }
    printf("%d", arr[N]);

    return 0;
}