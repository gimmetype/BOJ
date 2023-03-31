#include <stdio.h>

long long int Fibonacci(int N){
    if(N < 2){
        if(N == 0){
            return 0;
        }
        else{
            return 1;
        }
    }

    long long int ans = 0;
    long long int cur = 1;
    long long int pre = 1;

    for(int i=2;i<N+1;i++){
        ans = pre + cur;
        pre = cur;
        cur = ans;
    }
    return pre;

}

int main(){
    int N;
    scanf("%d", &N);
    printf("%lld", Fibonacci(N));

    return 0;
}