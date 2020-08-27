#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of
 *               integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where value is located. -1 otherwise.
 */

int jump_search(int *array, size_t size, int value)
{
	int b = 0, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	b = sqrt(size);
	/* finding interval in which @value is*/
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[b] < value && (size_t)b < size)
	{
		prev = b;
		b = b + sqrt(size);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, b);

	if ((size_t)b > size)
		b = size;
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev++;
		if (prev > b || (size_t)prev == size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	}

	if (array[prev] != value)
		return (-1);

	return (prev);
}
