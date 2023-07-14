#include <stdio.h>

int N, M;
int arr[101] = {0, };
int a, b;

void swap(int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}


int main(){
    scanf("%d %d", &N, &M);

    for(int i=1;i<=N;i++){
        arr[i] = i;
    }

    for(int i=0;i<M;i++) {
        scanf("%d %d", &a, &b);
        swap(a, b);
    }

    for(int i=1;i<=N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}