#include <stdio.h>

int divide(int a, int b) {
	printf("division...\n");
	return a/b;
}

int main() {

	int a = 5, b = 0;

	if(b && divide(a, b)) {
		// ...
	}

	if(a || divide(a, b)) {
		// ...
	}

	return 0;
}