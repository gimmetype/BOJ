#include <stdio.h>
#include <stdlib.h>

#define SIZE 1001

typedef struct{
	int queue[SIZE];
	int front, rear;
}Queue;

void init_queue(Queue* q){
	q->front = q->rear = 0;
}

int is_full(Queue* q){
	return ((q->rear + 1) % SIZE == q->front);
}

int is_empty(Queue* q){
	return (q->front == q->rear);
}

void push(Queue* q, int e){
	if (is_full(q)){
		return;
    }

	q->rear = (q->rear + 1) % SIZE;
	q->queue[q->rear] = e;
}

int pop(Queue* q){
	if (is_empty(q))
		return -1;

	q->front = (q->front + 1) % SIZE;
	return q->queue[q->front];
}

int size(Queue* q){
	if (q->front < q->rear){
		return q->rear - q->front;
    }
	else{
		return SIZE - q->front + q->rear;
    }
}

int main(){
	Queue Q; init_queue(&Q);

	int i, j, N, K, tmp;

	scanf("%d %d", &N, &K);

	for (i = 0; i < N; i++){
		push(&Q, i + 1);
	}

	printf("<");
	for (i = 0; i < N; i++){
		for (j = 0; j < K - 1; j++){
			tmp = pop(&Q);
			push(&Q, tmp);
		}
		if (size(&Q) == 1){
			break;
        }
		tmp = pop(&Q);
		printf("%d, ", tmp);
	}
	printf("%d>", pop(&Q));

	return 0;
}