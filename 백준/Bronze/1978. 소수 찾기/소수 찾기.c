#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    int num;
    int prime_number = 0;

    for (int i = 0; i < N; i++){
        scanf("%d", &num);

        if (num == 1){
            continue;
        }
        int cnt = 0;
        for (int j = 2; j < num; j++){
            if (num % j == 0){
                cnt++;
            }
        }
        if (cnt == 0){
            prime_number++;
        }
    }

    printf("%d", prime_number);

    return 0;
}