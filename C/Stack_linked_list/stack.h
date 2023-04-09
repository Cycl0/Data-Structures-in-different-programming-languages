#ifndef STACK_H
#define STACK_H

typedef struct Node {
	short value;
	struct Node *next;
} Node;
Node *Node_Init(short value);

typedef struct Stack {
	Node *head;
} Stack;
Stack *Stack_Init(void);

void push(Stack *s, short value);
short pop(Stack *s);

void printAll(Stack *s);

#endif
