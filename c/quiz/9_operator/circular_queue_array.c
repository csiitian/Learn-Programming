#include<stdio.h>
#include<stdlib.h>
struct queue_node {
	int front,rear;
	int *arr;
	int size;
};
typedef struct queue_node queue;
queue* init_queue(int capacity) {
	queue* qnode = (queue*)(malloc(sizeof(queue)));
	qnode->front = 0;
	qnode->rear = 0;
	qnode->size = capacity;
	qnode->arr = (int*)(malloc(capacity*sizeof(int)));
	return qnode;
}
void printQueue(queue *qnode) {
	int i;
	for(i=qnode->front;i<qnode->rear;i++) {
		i = i % qnode->size;
		printf("%d ",qnode->arr[i]);
	}
}
int isFull(queue* qnode) {
	return (qnode->front == ((qnode->rear+1)%qnode->size));
}
int isEmpty(queue* qnode) {
	return (qnode->front == qnode->rear);
}
void insertQueue(queue *qnode,int data) {
	if(isFull(qnode)) {
		printf("Queue is full.\n");
		return;	
	}
	qnode->arr[qnode->rear] = data;
	qnode->rear = (qnode->rear+1)%qnode->size;
}
int removeQueue(queue *qnode) {
	if(isEmpty(qnode)) {
		printf("Queue is empty.\n");
		return -1;
	}	
	qnode->front = (qnode->front+1)%qnode->size;
	return qnode->arr[qnode->front];	
}
int main() {
	queue *qnode = init_queue(4);
	//you can only insert maximum 3(n-1) element 
	
	insertQueue(qnode,12);
	insertQueue(qnode,2);
	insertQueue(qnode,25);
	
	printQueue(qnode);
	
	removeQueue(qnode);
	removeQueue(qnode);
	removeQueue(qnode);
	removeQueue(qnode);
	
	
}
