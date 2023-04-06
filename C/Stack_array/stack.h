#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct Stack{
	short array[MAX];
	signed char top;
} Stack;

Stack Stack_init();
void push(Stack *s, short val);
short pop(Stack *s);
void printAll(Stack *s);

#endif

