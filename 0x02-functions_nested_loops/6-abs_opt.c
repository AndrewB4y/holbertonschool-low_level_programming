#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input number to be computed into its absolute value
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	int n_1 = n;

	if (n_1 < 0)
		n_1 = n_1 * -1;
	else if (n_1 == 0)
		n_1 = 1;

	n = n * n;
	n = n / n_1;
	return (n);
}
