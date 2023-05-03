#include <stdio.h>

int main(){

    int T;
    scanf("%d", &T);


    char word[101];

    int answer = 0;

    for(int t=0; t<T; t++){

        scanf("%s", word);

        int pre_number = -1;
        int cur_number = -1;
        int alphabet_cnt[26] = {0,};

        for(int i=0; word[i] != '\0'; i++){
            cur_number = word[i] - 'a';
            if(pre_number != cur_number){
                alphabet_cnt[cur_number] += 1;
                pre_number = cur_number;
            }
        }

        //alphabet_cnt
        for(int j=0; j<26;j++){
            if(alphabet_cnt[j] >= 2){
                answer++;
                break;
            }

        }
    }

    printf("%d", T - answer);

    //aabbbccba 0 25
    //연속 단어가 아닐 경우, 알파벳을 숫자로 치환한 i에 대해서 alphabet[i]에 1이 추가된다.
    //연속적으로 나올 경우 -> previous변수의 값과 flag변수의 값이 같은 경우 알파벳이 연속으로 나온다.
    //임의의 i(0<= i < 26)에 대해서 alphabet[i]의 값이 2이상인 경우 단어가 떨어져서 나온 것을 알 수 있다.
    //현재 단어가 어느 숫자에 치환되는지
    //그룹 단어의 개수를 출력하기 위해, number_of_gl변수를 만든다.
    //그룹 단어인 경우 number_of_gl++을 실행한다.


    return 0;
}