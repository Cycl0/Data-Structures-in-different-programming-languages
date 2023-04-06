#include <stdio.h>
#include "stack.h"

void printAll(Stack *s) {
	signed char *top = &(s->top);
	printf("[");
	for(unsigned char i = 0; i <= *top; ++i) {
		short el = s->array[i];
		printf("%hd", el);
		// If it's not last
		if(i != *top) {
			printf(", ");
		}
	}
	printf("]\n");
}
