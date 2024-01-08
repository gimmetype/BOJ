#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

char arr[1001], str[1001][1001];

int main(){

    scanf("%s", arr);
    int nos = strlen(arr);

    for (int i = 0; i < nos; i++){
        strcpy(str[i], arr);
        for (int j = 0; j < nos; j++){
            arr[j] = arr[j + 1];
        }
    }
    qsort(str, nos, sizeof(str[0]), comp);
    for (int i = 0; i < nos; i++){
        printf("%s\n", str[i]);
    }

    return 0;
}