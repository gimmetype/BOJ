#include <stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans *= i;
    }
    return ans;
}

int main(){

    int N, K;
    scanf("%d %d", &N, &K);

    printf("%d", factorial(N) / (factorial(K) * factorial(N-K)));

    return 0;
}