#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

Node *Node_Init(short value) {
	Node *n = malloc(sizeof(struct Node));
	n->value = value;
	n->next = NULL;
	return n;
}

Stack *Stack_Init() {
	Stack *s = malloc(sizeof(struct Stack));
	s->head = NULL;
	return s;
}

void push(Stack *s, short value) {
	Node *n = Node_Init(value);
	// Reference to the previous head
	n->next = s->head;
	// Replace head
	s->head = n;
}

short pop(Stack *s) {
	if (!s->head) {
		printf("Stack is empty\n");
		return -1;
	}
	// Save value before freeing node
	Node *prevHead = s->head;
	short value = prevHead->value;
	// Change head to next node
	s->head = prevHead->next;
	free(prevHead);
	return value;
}
