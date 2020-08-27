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
	int array2[] = {
		1
	};
	int array3[] = {
		5, 6
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	size_t size2 = sizeof(array2) / sizeof(array2[0]);
	size_t size3 = sizeof(array3) / sizeof(array3[0]);

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
	return (EXIT_SUCCESS);
}
