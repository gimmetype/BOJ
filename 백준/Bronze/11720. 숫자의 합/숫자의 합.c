#include <stdio.h>

int main(){
    int N;
    int num[100] = {0, };

    scanf("%d", &N);

    int sum = 0;
    for (int i=0;i<N;i++){
        scanf("%1d", &num[i]);
    }
    for (int i=0;i<N;i++){
        sum += num[i];
    }

    printf("%d\n", sum);

    return 0;
}