#include <stdio.h>

void print_array(int ababa[3][3]) {
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", ababa[i][j]);
		}
		printf("\n");
	}
}

void input_array(int arr[3][3]) {
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

}

int main() {
	// static array with 5 elements
	int arr[5];

	// static 2d array 3x3
	int arr2d[3][3];

	// ./a.out < input.txt - redirect of input
	input_array(arr2d);

	print_array(arr2d);

	return 0;
}

