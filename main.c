#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ADT_queue.h"
#include "ADT_stack.h"

int main(){
	STACK* s1 = create_stack();
	
	printf("stack s1's size : %d\n", s1 ->count);
	printf("input : ");
	char  value[10];
	gets(value, sizeof(value));

	char* tok;
	tok = strtok(value," ");
	while (tok!=NULL){
		push(s1,tok);
		tok = strtok(NULL, " ");
	}	
	printf("stack s1's size : %d\noutput : ", s1 ->count);
	char* temp;
	while (s1->count != 0){
		temp = (char*)pop(s1);
		printf("%c ",*temp);
	}
	printf("\nstack s1's size : %d\n\n", s1 ->count);

	QUEUE* q1 = create_queue();
	
	printf("queue  q1's size : %d\n", q1 ->count);
	printf("input : ");
	gets(value, sizeof(value));

	tok = strtok(value," ");
	while (tok!=NULL){
		enqueue(q1,tok);
		tok = strtok(NULL, " ");
	}	
	printf("queue q1's size : %d\n output : ", q1 ->count);
	while (q1->count != 0){
		temp = (char*)dequeue(q1);
		printf("%c ",*temp);
	}
	printf("\n queue  q1's size : %d\n", q1 ->count);

return 0;
}
