#include <stdio.h>
#include <stdlib.h>

int main() {

	int *ptr;

	int n;
	scanf("%d", &n);
	printf("sizeof(int) = %ld\n", sizeof(int));

	// possible to allocate large amounts of memory
	// malloc needs the amount ot BYTES to allocate
	// malloc returns a (void *), needs to be casted to correct type
	ptr = (int *)malloc(n * sizeof(int));

	printf("Success!\n");

	// tells the OS this memory is not going to be used further and can be reused
	free(ptr);

	return 0;
}