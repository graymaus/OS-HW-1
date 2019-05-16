all:
	gcc -c ADT_stack.c
	gcc -c ADT_queue.c
	gcc -c main.c
	gcc -o homework ADT_stack.o ADT_queue.o  main.o
	./homework
