#include "stack.h"
#include <stdio.h>

int main(void) {
	Stack *s = Stack_Init();
	push(s, 1);
	push(s, 2);
	push(s, 3);
	printAll(s);
	printf("Element %hd popped\n", pop(s));
	printAll(s);
}
