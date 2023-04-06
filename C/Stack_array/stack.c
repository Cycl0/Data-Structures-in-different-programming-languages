#include "stack.h"

Stack Stack_init() {
	Stack s;
	s.top = -1;
	return s;
}
void push(Stack *s, short val) {
	signed char *top = &(s->top);
	short *array = s->array;
	*top += 1;
	array[*top] = val;
}
short pop(Stack *s) {
	signed char *top = &(s->top);
	short *array = s->array;
	short temp = array[*top];
	*top -= 1;
	return temp;
}
