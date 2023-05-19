#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return 1;
    if (num1 > num2)
        return -1;
    return 0;
}

int main(){
    int i;
    int n;
    int len;
    scanf("%d", &n);
    
    int t = n;
    int s = n;
    
    len = 0;
    while (s > 0){
        t = s % 10;
        s = s / 10;
        len++;
    }
    int arr[len]; 
    
    i = 0;
    while (n > 0){
        t = n % 10;
        n = n / 10;
        arr[i] = t;
        i++;
    }
    qsort(arr, len, sizeof(int), compare);
    i = 0;
    while (i < len){
        printf("%d", arr[i]);
        i++;
    }
}