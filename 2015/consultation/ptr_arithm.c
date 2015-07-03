#include <stdio.h>

int main() {

	int arr[] = { 1, 2, 3, 4 };

	int *ptr;
	ptr = arr;
	printf("%d ", *ptr);
	
	// increment ptr with sizeof(int) bytes
	ptr++; // same as ptr = ptr + 1;

	printf("%d", *ptr);
	printf("\n");

	// offset with ptr
	printf("%d\n", ptr[1]);

	printf("arr ptr = %d\n", *(arr + 2));

	// *(arr + 2) is the same as arr[2]
	
	return 0;
}




