#include <stdio.h>

void swap(int *c, int *d) {
	int z = *c;
	*c = *d;
	*d = z;

	printf("Swapped!\n");
	printf("inside swap: %d %d\n", *c, *d);
}

int main() {
	int a = 5, b = 6;

	printf("%d %d\n", a, b);

	// copy of pointers, not values
	swap(&a, &b);
	printf("%d %d\n", a, b);


	return 0;
}