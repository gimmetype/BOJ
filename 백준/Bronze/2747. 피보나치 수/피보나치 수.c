#include <stdio.h>

int Fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = 0;
    int cur = 1;
    int pre = 0;
    for(int i=2;i<n+1;i++){
        ans = cur + pre;
        pre = cur;
        cur = ans;
    }
    return cur;
}

int main(){

    int N;
    scanf("%d", &N);

    printf("%d", Fibonacci(N));
    return 0;
}