#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array folloed by a new line
 * @a: pointer to the first element in array to be printed
 * @n: number of array elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
