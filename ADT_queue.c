#include "ADT_queue.h"

QUEUE* create_queue(){
	QUEUE* new_queue;
	new_queue =(QUEUE*)malloc(sizeof(QUEUE));
	if(new_queue){
	new_queue -> front = NULL;
	new_queue -> rear = NULL;
	new_queue -> count = 0;
	return new_queue;
	} else{
	return NULL;
	}
}

bool enqueue(QUEUE*queue, void* input){
	QUEUE_NODE* fresh_node;
	fresh_node = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
	fresh_node -> data_ptr = input;
	fresh_node -> next = NULL;
	if(queue->count == 0){
	queue -> front = fresh_node;
	queue -> rear = fresh_node;
	(queue->count)++;
	} else{
	queue-> rear -> next = fresh_node;
	queue -> rear = fresh_node;
	(queue->count)++;
	}
	return true; 
}

void* dequeue(QUEUE* queue){
	if(queue -> count ==0) false;
	QUEUE_NODE* byebye_node;
	byebye_node = queue -> front;
	void* output = byebye_node -> data_ptr;
	if(queue -> count ==1) {
	queue->front = NULL;
	queue->rear = NULL;
	}else{
	queue -> front = queue -> front ->next;
}
	free(byebye_node);
	queue->count --;
	return output;
}
