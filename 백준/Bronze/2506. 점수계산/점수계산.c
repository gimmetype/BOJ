#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int b;

    int sum = 0;
    int add = 1;
    for (int i = 0; i < N; i++) {
        scanf("%d", &b);
        if (b == 1){
            sum += add;
            add++;
        }
        else if (b == 0){
            add = 1;
        }
    }
    printf("%d", sum);
}