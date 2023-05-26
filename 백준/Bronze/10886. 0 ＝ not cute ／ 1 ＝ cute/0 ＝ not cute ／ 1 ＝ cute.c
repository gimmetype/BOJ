#include <stdio.h>

int main(){
    int cnt, y=0, n=0;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++){
        int ans;
        scanf("%d", &ans);
        if (ans == 0) n += 1;
        else y += 1;
    }
    if (n > y){
        printf("Junhee is not cute!");
    }
    else{
        printf("Junhee is cute!");
    }
    return 0;
}