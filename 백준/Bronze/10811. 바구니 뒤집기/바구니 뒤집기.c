#include <stdio.h>

int main(){

    int N, M;
    int arr[101] = {0, };

    scanf("%d %d", &N, &M);

//  바구니에 숫자 넣기
    for(int i=0;i<N;i++){
        arr[i] = i+1;
    }

    int x, y;
    for(int j=0;j<M;j++){
        scanf("%d %d", &x, &y);
        for(int k=x-1;k<y;k++){
            int tmp = arr[k];
            arr[k] = arr[y-1];
            arr[y-1] = tmp;
            y--;
        }
    }

    for(int l=0;l<N;l++){
        printf("%d ", arr[l]);
    }


    return 0;
}