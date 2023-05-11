#include <stdio.h>

int main(){

    //실수 입력
    //0번 곱부터 4번 곱까지의 합
    float N;
    while(1){
        scanf("%f", &N);

        if(N==0){
            break;
        }

        float M=1;
        float sum=0;
        for(int i=0;i<5;i++){
            sum += M;
            M = N * M;
        }
        printf("%0.2f\n", sum);

    }


    return 0;
}