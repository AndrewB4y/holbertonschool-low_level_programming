#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int array1[] = {
		0, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9
	};
	int array2[] = {
		1
	};
	int array3[] = {
		5, 6
	};
	int array_R[] = {
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5
	};

	size_t size = sizeof(array) / sizeof(array[0]);
	size_t size1 = sizeof(array1) / sizeof(array1[0]);
	size_t size2 = sizeof(array2) / sizeof(array2[0]);
	size_t size3 = sizeof(array3) / sizeof(array3[0]);
	size_t size_R = sizeof(array_R) / sizeof(array_R[0]);

	printf("============================================\n");
	printf("Array: NULL\n");
	printf("Found %d at index: %d\n\n", 0, jump_search(NULL, 0, 0));

	printf("============================================\n");
	printf("Array: ");
	print_array(array, 0, (int)size - 1);
	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array, size, 5));
	printf("Found %d at index: %d\n\n", 0, jump_search(array, size, 0));
	printf("Found %d at index: %d\n\n", 9, jump_search(array, size, 9));

	printf("============================================\n");
	printf("Array: ");
	print_array(array1, 0, (int)size1 - 1);
	printf("Found %d at index: %d\n\n", 6, jump_search(array1, size1, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array1, size1, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array1, size1, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array1, size1, 5));
	printf("Found %d at index: %d\n\n", 0, jump_search(array1, size1, 0));
	printf("Found %d at index: %d\n\n", 9, jump_search(array1, size1, 9));
	printf("Found %d at index: %d\n\n", 2, jump_search(array1, size1, 2));

	printf("============================================\n");
	printf("Array: ");
	print_array(array2, 0, (int)size2 - 1);
	printf("Found %d at index: %d\n\n", 6, jump_search(array2, size2, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array2, size2, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array2, size2, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array2, size2, 5));
	printf("Found %d at index: %d\n\n", 0, jump_search(array2, size2, 0));
	printf("Found %d at index: %d\n\n", 9, jump_search(array2, size2, 9));

	printf("============================================\n");
	printf("Array: ");
	print_array(array3, 0, (int)size3 - 1);
	printf("Found %d at index: %d\n\n", 6, jump_search(array3, size3, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array3, size3, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array3, size3, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array3, size3, 5));
	printf("Found %d at index: %d\n\n", 0, jump_search(array3, size3, 0));
	printf("Found %d at index: %d\n\n", 9, jump_search(array3, size3, 9));

	printf("============================================\n");
	printf("Array: ");
	print_array(array_R, 0, (int)size_R - 1);
	printf("Found %d at index: %d\n\n", 6, jump_search(array_R, size_R, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array_R, size_R, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array_R, size_R, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array_R, size_R, 5));
	printf("Found %d at index: %d\n\n", 0, jump_search(array_R, size_R, 0));
	printf("Found %d at index: %d\n\n", 9, jump_search(array_R, size_R, 9));
	printf("Found %d at index: %d\n\n", 29, jump_search(array_R, size_R, 29));

	return (EXIT_SUCCESS);
}
