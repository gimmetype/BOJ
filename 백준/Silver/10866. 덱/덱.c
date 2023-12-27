#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 덱의 최대 크기 정의
#define MAX_SIZE 100000

// 덱을 나타내는 구조체 정의
typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
    int size;
} Deque;



void push_front(Deque* deque, int x) {
    // 덱이 가득 찼는지 확인
    if (deque->size == MAX_SIZE) {
        printf("-1\n"); // 덱이 가득 찼을 경우 -1 출력
        return;
    }

    deque->size++;
    deque->front = (deque->front - 1 + MAX_SIZE) % MAX_SIZE;

    deque->data[deque->front] = x;
}

void push_back(Deque* deque, int x) {
    // 덱이 가득 찼는지 확인
    if (deque->size == MAX_SIZE) {
        printf("-1\n"); // 덱이 가득 찼을 경우 -1 출력
        return;
    }

    // 덱의 크기 증가 및 rear 위치 조정
    deque->size++;
    deque->rear = (deque->rear + 1) % MAX_SIZE;

    // 덱에 값 삽입
    deque->data[deque->rear] = x;
}

int pop_front(Deque* deque) {
    // 덱이 비어있는지 확인
    if (deque->size == 0) {
        return -1; // 덱이 비어있을 경우 -1 반환
    }

    // 덱의 크기 감소 및 front 위치 조정
    deque->size--;
    int result = deque->data[deque->front];
    deque->front = (deque->front + 1) % MAX_SIZE;

    return result;
}

int pop_back(Deque* deque) {
    // 덱이 비어있는지 확인
    if (deque->size == 0) {
        return -1; // 덱이 비어있을 경우 -1 반환
    }

    // 덱의 크기 감소 및 rear 위치 조정
    deque->size--;
    int result = deque->data[deque->rear];
    deque->rear = (deque->rear - 1 + MAX_SIZE) % MAX_SIZE;

    return result;
}

// 덱에 들어있는 정수의 개수를 출력하는 작업 구현
int size(Deque* deque) {
    return deque->size;
}

// 덱이 비어있는지 여부를 출력하는 작업 구현
int empty(Deque* deque) {
    return (deque->size == 0) ? 1 : 0;
}

// 덱의 가장 앞에 있는 정수를 출력하는 작업 구현
int front(Deque* deque) {
    // 덱이 비어있는지 확인
    if (deque->size == 0) {
        return -1; // 덱이 비어있을 경우 -1 반환
    }

    return deque->data[deque->front];
}

// 덱의 가장 뒤에 있는 정수를 출력하는 작업 구현
int back(Deque* deque) {
    // 덱이 비어있는지 확인
    if (deque->size == 0) {
        return -1; // 덱이 비어있을 경우 -1 반환
    }

    return deque->data[deque->rear];
}

int main() {
    int N;
    scanf("%d", &N);

    Deque deque;
    deque.front = MAX_SIZE / 2;  // 중앙에서 시작
    deque.rear = MAX_SIZE / 2 - 1;  // 중앙에서 시작
    deque.size = 0;


    int num;
    for (int i = 0; i < N; i++) {
        char command[15];
        scanf("%s", command);

        if (!strcmp(command, "push_front")) {
            scanf("%d", &num);
            push_front(&deque, num);
        }
        else if (!strcmp(command, "push_back")) {
            scanf("%d", &num);
            push_back(&deque, num);
        }
        else if (!strcmp(command, "pop_front")) {
            printf("%d\n", pop_front(&deque));
        }
        else if (!strcmp(command, "pop_back")) {
            printf("%d\n", pop_back(&deque));
        }
        else if (!strcmp(command, "size")) {
            printf("%d\n", size(&deque));
        }
        else if (!strcmp(command, "empty")) {
            printf("%d\n", empty(&deque));
        }
        else if (!strcmp(command, "front")) {
            printf("%d\n", front(&deque));
        }
        else if (!strcmp(command, "back")) {
            printf("%d\n", back(&deque));
        }
    }

    return 0;
}

