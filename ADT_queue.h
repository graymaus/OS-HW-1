#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node_Q{
	void* data_ptr;
	struct node_Q* next;
}QUEUE_NODE;

typedef struct {
	int count;
	QUEUE_NODE* front;
	QUEUE_NODE* rear;
}QUEUE;

QUEUE* create_queue();
bool enqueue(QUEUE* queue, void* input);
void* dequeue(QUEUE* queue);
