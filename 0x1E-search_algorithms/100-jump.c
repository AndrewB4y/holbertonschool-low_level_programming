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
	while (array[b] < value && (size_t)b < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = b;
		b = b + sqrt(size);
		if ((size_t)b > size)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, b);
	while ((size_t)prev < size && array[prev] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
