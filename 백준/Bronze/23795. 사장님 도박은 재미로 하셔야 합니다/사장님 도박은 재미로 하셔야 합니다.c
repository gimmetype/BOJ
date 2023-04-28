#include <stdio.h>

int main(){

    int N;
    unsigned int sum = 0;
    while(1){
        scanf("%d", &N);
        if(N == -1){
            break;
        }
        sum += N;
    }
    printf("%u", sum);

    return 0;
}