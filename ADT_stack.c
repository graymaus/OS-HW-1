#include "ADT_stack.h"

STACK* create_stack(){
	STACK* stack;
	stack = (STACK*)malloc(sizeof(STACK));
	stack -> top = NULL;
	stack -> count = 0;
	return stack;
}
bool push(STACK* stack, void* data){
	STACK_NODE* add_stack;
	add_stack = (STACK_NODE*)malloc(sizeof(STACK_NODE));
	add_stack -> data_ptr = data;
	add_stack -> link = stack->top;
	stack->top = add_stack; 
	(stack -> count++); 
	return true;
}

void* pop(STACK* stack){
	if(stack->count ==0) return false;
	STACK_NODE* pop_stack;
	pop_stack = stack->top;
	void* value = stack->top->data_ptr;
	stack -> top = pop_stack -> link;
	pop_stack -> link = NULL;
	free(pop_stack);
	pop_stack = NULL;
	(stack -> count)--;
	return value;
}



