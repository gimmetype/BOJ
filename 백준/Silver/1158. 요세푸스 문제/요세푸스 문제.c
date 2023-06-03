#include <stdio.h>
#include <stdlib.h>

//연결 리스트 ADT
typedef struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}Node;

void addNode(int data);
void deleteNode(struct Node* front, int N, int K);
struct Node* createNode(int data);
struct Node* front = NULL;
struct Node* rear = NULL;


//연결리스트 노드 만들기
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

//Node 추가
void addNode(int data){
    struct Node* temp = front;
    struct Node* newNode = createNode(data);

    if(front == NULL){
        front = newNode;
        rear = front;
    }
    else{
        temp = rear;
        temp->next = newNode;
        newNode->prev = temp;
        rear = newNode;
    }
}

//노드 삭제
void deleteNode(struct Node*, int N, int K){
    struct Node* tmp = front->prev;
    int cnt = 0;
    int T = 0;
    printf("<");
    while(cnt < N){
        T = K;
        while(T--){
            tmp = tmp->next;
        }
        printf(cnt++ ? ", %d" : "%d", tmp->data);
        tmp->next->prev = tmp->prev;
        tmp->prev->next = tmp->next;
    }
    puts(">");
}



int main(){

    int N, K;
    scanf("%d %d", &N, &K);

    for(int i=0;i<N;i++){
        addNode(i+1);
    }
    front->prev = rear;
    rear->next = front;

    deleteNode(front, N, K);

    return 0;
}