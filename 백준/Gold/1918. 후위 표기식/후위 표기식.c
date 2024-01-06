#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char stack[101];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

int is_empty() {
    if (top == -1){
        return 1;
    }
    return 0;
}

char pop(){
    if (is_empty()){
        return -1;
    }
    return stack[top--];
}

char peak() {
    if (is_empty()){
        return 0;
    }
    else {
        return stack[top];
    }

}

int precedence(char op) {
    if (op == '(') {
        return -1;
    }
    else if (op == '+' || op == '-') {
        return 0;
    }
    else return 1;
}


int main() {

    char string[101];
    scanf("%s", string);

    int nos = strlen(string);
    for (int i = 0; i < nos; i++){
        if (string[i]>='A' && string[i] <= 'Z'){
            printf("%c", string[i]);
        }
        else if (string[i] == '('){
            push(string[i]);
        }
        else if (string[i] == ')'){
            while (peak() != '('){
                printf("%c", pop());
            }
            pop();
        }
        else {
            while (!is_empty()&& precedence(peak()) >= precedence(string[i])){
                printf("%c", pop());
            }
            push(string[i]);
        }
    
    }
    while (!is_empty()){
        printf("%c", pop());
    }

    return 0;
}