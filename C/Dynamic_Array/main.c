#include <stdio.h>
#include "array.h"

int main(void) {
	Array *a = Array_Init(2);

	unsigned char i;
	for (i = 0; i < 10; ++i) {
		append(a, i);
	}
	printAll(a);
    printf("Size: %d\n", a->size);

	insertAtIndex(a, 9, 20);
	insertAtIndex(a, 0, 10);
	printf("Insert 20 at 9 and 10 at 0\n");
	printAll(a);

	removeAtIndex(a, 9);
	removeAtIndex(a, 3);
	printf("Remove elements at 9 and 3\n");
	printAll(a);

	printf("Insert 0 at 0\n");
	insertAtIndex(a, 0, 0);
	printAll(a);

	printf("Element %hd popped\n", pop(a));
	printAll(a);

    freeArray(a);

	return 0;
}
