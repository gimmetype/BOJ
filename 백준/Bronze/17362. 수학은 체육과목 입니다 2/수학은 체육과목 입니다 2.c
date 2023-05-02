#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int check = N % 8;
    int ans;

    if(check == 1){
        ans = 1;
    }
    else if (check == 2 || check == 0){
        ans = 2;
    }
    else if (check == 3 || check == 7){
        ans = 3;
    }
    else if(check == 4 || check == 6){
        ans = 4;
    }
    else if(check == 5){
        ans = 5;
    }
    
    printf("%d", ans);
    return 0;
}