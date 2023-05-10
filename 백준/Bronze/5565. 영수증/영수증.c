#include <stdio.h>
 
int main(){
 
    int N, A;
    scanf("%d", &N);
 
    int sum = 0;
    for(int i=0; i<9; i++){
        scanf("%d", &A);
        sum += A;
    }
 
    printf("%d", N - sum);
}