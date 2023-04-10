#include <stdio.h>
#include "array.h"

void printAll(Array *a) {
	printf("[");
	unsigned short i;
	for(i = 0; i < a->count; ++i) {
		short value = *(a->array + i);
		printf("%d", value);
		if(i < (a->count - 1)) {
			// If not last print comma
			printf(", ");
		}
	}
	printf("]\n");
}
