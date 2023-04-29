#include <stdio.h>

int main(){

    int S, T, D;
    scanf("%d %d %d", &S, &T, &D);

    printf("%d", D / (2 * S) * T);
    return 0;
}