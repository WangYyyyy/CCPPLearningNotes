#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

// typedef int Item;

typedef struct item {
	long arrive; //加入队列的时间
	int processtime; //花费的时间
} Item;

#define MAXQUEUE 10

typedef struct node {
	Item item;
	struct node * next;
} Node;

typedef struct queue {
	Node * front;
	Node * rear;
	int items;
} Queue;


void InitializeQueue(Queue * pq);

bool QueueIsFull(const Queue * pq);

bool QueueIsEmpty(const Queue * pq);

int QueueItemCount(const Queue * pq);

bool EnQueue(Item item, Queue * pq);

bool DeQueue(Item * pitem, Queue * pq);

void EmptyTheQueue(Queue * pq);

#endif