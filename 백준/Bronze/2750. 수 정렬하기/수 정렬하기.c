#include <stdio.h>
#include <stdlib.h>


void swap(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int main(){

    int N;
    scanf("%d", &N);

    int* nums;
    nums = (int*)malloc(N * sizeof(int));

    for(int i=0;i<N;i++){
        scanf("%d", &nums[i]);
    }

    int min_idx = 0;
    for(int j=0;j<N-1;j++){
        min_idx = j;
        for(int k=j+1;k<N;k++){
            if(nums[min_idx] > nums[k]){
                min_idx = k;
            }
        }
        swap(&nums[j], &nums[min_idx]);
    }

    for(int i=0;i<N;i++){
        printf("%d ", nums[i]);
    }

    return 0;
}