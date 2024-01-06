#include <stdio.h>
#include <string.h>

int main(){

    char S[101] = {0, };
    char alphabet[27];

    scanf("%s", S);

    //반복문을 써서 A - Z까지 알파벳 넣기
    //linear search로 하나씩 찾아야 함

    int cnt[26] = {0, };
    for(int i=0;i<26;i++){
        alphabet[i] = 'a' + i;

        for(int j=0;j<100;j++){
            if(alphabet[i] == S[j]){
                cnt[i]++;
            }
        }
        printf("%d ", cnt[i]);
    }
    
    return 0;
}