#include <stdio.h>

int main(){
    int a_divisor = 0; //약수를 입력받을 변수
    long long max = 0, min = 1000001; //입력받은 약수중 최대값과 최소값을 각각 저장할 변수

    int num_of_divisors;
    scanf("%d", &num_of_divisors);

    for(int i = 0; i < num_of_divisors; i++){ 
        scanf("%d", &a_divisor);

        if(a_divisor > max)                 
            max = a_divisor;
        if(a_divisor < min)
            min = a_divisor;
    }

    printf("%lld\n", max * min);

    return 0;
}