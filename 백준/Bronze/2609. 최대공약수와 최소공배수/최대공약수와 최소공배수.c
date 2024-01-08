#include <stdio.h>

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int lcm(int a, int b){
    return (a / gcd(a,b)) * b;
}


int main(){
    int A, B;

    scanf("%d\n%d", &A, &B);

    printf("%d\n%d", gcd(A, B), lcm(A, B));

    return 0;
}