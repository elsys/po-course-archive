#include <stdio.h>

int main() {

	// pointer to int
	int *ptr;

	// pointer to a pointer to int
	int **pptr;

	// ...
	int ***ppptr;

	int var = 5;

	// change pointion position
	ptr = &var;
	printf("%d\n", *ptr);

	// change value of pointing position
	*ptr = 42;
	printf("%d\n", *ptr);
	printf("%d\n", var);

	return 0;
}