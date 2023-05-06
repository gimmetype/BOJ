#include <stdio.h>

int number_of_digits(int n){

    int cnt=0;
    while(n!=0){
        n = n/10;
        cnt++;
    }
    return cnt;
}

int main(){

    int N;
    scanf("%d", &N);

    int A=0;
    int B=0;
    int digits = number_of_digits(N);


    if(digits==2){
        A = N/10;
        B = N%10;
    }
    else if(digits ==3){
        if(N%10==0){
            A = N / 100;
            B = 10;
        }
        else{
            A = 10;
            B = N % 10;
        }

    }
    else{
        A = 10;
        B = 10;
    }
    printf("%d", A+B);


    return 0;
}