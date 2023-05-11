
#include <stdio.h>
#include <stdlib.h>


int main(){
    long long N, M;

    scanf("%lld %lld", &N, &M);

    long long res = 0;
    res = llabs(N-M);

    printf("%lld", res);

    return 0;
}