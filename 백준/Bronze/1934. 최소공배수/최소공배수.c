#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
    {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}


int main() {

    int T;
    scanf("%d", &T);

    int A, B; 
    int lcm;

    int tmp;

    for (int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        lcm = (A * B) / gcd(A, B);
        printf("%d\n", lcm);
    }

    return 0;
}