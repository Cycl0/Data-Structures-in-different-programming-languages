#include "stack.h"
#include <stdio.h>

void printAll(Stack *s) {
	Node *head = s->head;
	if (!head) {
		printf("empty\n");
		return;
	}
	Node *current = head;
	printf("[");
	while(current) {
		printf("%hd", current->value);
		// If not last
		if (current->next) {
			printf(", ");
		}
		current = current->next;
	}
	printf("]\n");
}
