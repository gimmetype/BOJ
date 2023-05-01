#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    if(T % 10 != 0){
        printf("-1");
    }

    else{
//        5분 버튼부터 확인
        int five_minute = T / 300;
        T = T % 300;
        int one_minute = T / 60;
        T = T % 60;
        int ten_seconds = T / 10;
    
        printf("%d %d %d", five_minute, one_minute, ten_seconds);


    }


    return 0;
}