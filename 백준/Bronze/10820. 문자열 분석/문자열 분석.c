#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {

    char string[101];


    while (gets(string) != '\0'){
        int small = 0, capital = 0, number = 0, space = 0;
        int nos = strlen(string);

        for (int j = 0; j < nos; j++) {
            if (string[j] >= 'a' && string[j] <= 'z') {
                small++;
            }
            else if (string[j] >= 'A' && string[j] <= 'Z') {
                capital++;
            }
            else if (string[j] == ' ') {
                space++;
            }
            else {
                number++;
            }
        }
        printf("%d %d %d %d\n", small, capital, number, space);
    }
    
    return 0;
}