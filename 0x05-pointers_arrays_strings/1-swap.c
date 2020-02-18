#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int to be swap with b
 * @b: second int to be swap with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
