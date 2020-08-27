#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of
 *                        integers using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where @value is located. -1 Otherwise.
 */


int interpolation_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	while ((array[h] != array[l])
	       && l < h)
	{
		mid = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		printf("Value checked array[%d] ", mid);

		if ((size_t)mid >= size)
		{
			printf("is out of range\n");
			return (-1);
		}
		else
			printf("= [%d]\n", array[mid]);

		if (array[mid] < value)
			l = mid + 1;
		else if (value < array[mid])
			h = mid - 1;
		else
			return (mid);
	}

	if (value == array[l])
		return (l);

	return (-1);
}
