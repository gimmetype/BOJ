#include <stdio.h>

int main(){
    char line[8];
    scanf("%s", line);

    if(line[0] == '5' && line[1] == '5' && line[2] == '5'){
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}