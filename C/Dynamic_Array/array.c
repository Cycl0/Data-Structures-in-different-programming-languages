#include <stdlib.h>
#include "array.h"

Array *Array_Init(size_t initialSize) {
	Array *a = (Array*)malloc(sizeof(Array));
	a->array = (short*)malloc(initialSize * sizeof(short));
	a->count = 0;
	a->size = initialSize;
	return a;
}

void append(Array *a, short value) {
	if(a->count == a->size) {
		// Doubles the size if full
		a->size *= 2;
		a->array = (short*)realloc(a->array, a->size * sizeof(short));
	}
	//a->array[a->count++]
	*(a->array + a->count++) = value;
}

short pop(Array *a) {
	size_t lastIndex = a->count - 1;
	// Saved before decrement
	short popped = *(a->array + lastIndex);
	// Decrease count
	a->count--;
	return popped;
}

void removeAtIndex(Array *a, unsigned short i) {
	if(i >= a->count || a->count <= 0) {
		// Return if not in range or array is empty
		return;
	}
	size_t lastIndex = a->count - 1;
	for(; i < lastIndex; ++i) {
		// Shift all to the left from element on the i index until second last
		*(a->array + i) = *(a->array + i + 1);
	}
	// Decrease element count
	a->count--;
}

void insertAtIndex(Array *a, unsigned short i, short value) {
	if(i >= a->count || a->count <= 0) {
		// Return if not in range or array is empty
		return;
	}
	*(a->array + i) = value;
}

void freeArray(Array *a) {
	free(a->array);
	free(a);
}
