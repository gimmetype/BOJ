#include <stdio.h>

int main(){
    int num[7] = {0, };
    int sum = 0;
    int min_odd = 0;

    for(int i=0;i<7;i++){
        scanf("%d", &num[i]);
        if (num[i] % 2 == 1){
            sum += num[i];
            min_odd = num[i];
        }
    }
    for(int j=0;j<7;j++){
        if(min_odd > num[j]){
            if(num[j] % 2 == 1){
                min_odd = num[j];
            }
        }
    }
    if(sum == 0){
        printf("%d", -1);
    }
    else{
        printf("%d\n", sum);
        printf("%d", min_odd);
    }


    return 0;
}