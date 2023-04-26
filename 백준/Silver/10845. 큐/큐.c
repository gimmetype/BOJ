#include <stdio.h>
#include <string.h>
#define max_size 10001

int queue[max_size];
int first = -1;
int last = -1;


void push(int x){
    queue[++last] = x;
}

int empty(){
    if(first == last){
        return 1;
    }
    return 0;
}

int pop(){
    if(empty()){
        return -1;
    }
    return queue[++first];
}

int size(){
    return last - first;
}

int front(){
    if(empty()){
        return -1;
    }
    return queue[first+1];
}

int back(){
    if(empty()){
        return -1;
    }
    return queue[last];
}

int main(){
    int N;
    int num = 0;
    char command[6] = {0, };

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf("%s", command);

        if(!strcmp(command, "push")){
            scanf("%d", &num);
            push(num);
        }
        else if(!strcmp(command, "pop")){
            printf("%d\n", pop());
        }
        else if(!strcmp(command, "empty")){
            printf("%d\n", empty());
        }
        else if(!strcmp(command, "size")){
            printf("%d\n", size());
        }
        else if(!strcmp(command, "front")){
            printf("%d\n", front());
        }
        else if(!strcmp(command, "back")){
            printf("%d\n", back());
        }
    }

    return 0;
}
