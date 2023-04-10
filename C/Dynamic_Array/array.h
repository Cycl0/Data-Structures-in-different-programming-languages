#ifndef ARRAY_H
#define ARRAY_H
#include <stdlib.h>

typedef struct {
	short* array;
	// Count actual elements
	size_t count;
	size_t size;

} Array;
Array *Array_Init(size_t initialSize);

void append(Array *a, short value);
void removeAtIndex(Array *a, unsigned short i);
void insertAtIndex(Array *a, unsigned short i, short value);
void freeArray(Array *a);

void printAll(Array *a);

#endif
