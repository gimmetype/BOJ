#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int i = 2;
    while (N > 1) {
        if (N == 1){
            break;
        }
        if (N % i == 0){
            printf("%d\n", i);
            N /= i;
        }
        else {
            i += 1;
        }
    }

    return 0;
}