#include <stdio.h>
#include <string.h>
#define stack_size 10001

int top = -1;
int stack[stack_size];

void push(int x){
    stack[++top] = x;
}

int empty(){
    if (top == -1){
        return 1;
    }
    return 0;
}

int pop(){
    if (empty()){
        return -1;
    }
    return stack[top--];
}

int stack_top(){
    if (empty()){
        return -1;
    }
    return stack[top];
}

int main(){

    int N = 0, num = 0;
    char command[5] = {0, };

    scanf("%d", &N);

    for (int i =0;i<N;i++){

        scanf("%s", command);

        if (!strcmp(command, "push")){
            scanf("%d", &num);
            push(num);
        }
        else if (!strcmp(command, "pop")){
            printf("%d\n", pop());
        }
        else if (!strcmp(command, "empty")){
            printf("%d\n", empty());
        }
        else if (!strcmp(command, "size")){
            printf("%d\n", top + 1);
        }
        else if (!strcmp(command, "top")){
            printf("%d\n", stack_top());
        }
    }

    return 0;
}