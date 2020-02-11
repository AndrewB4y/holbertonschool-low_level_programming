#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number and returns the same
 * @n: input int number from which is going to be get its last digit
 *
 * Return: the last number of n
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;
	last  = n % 10;
	_putchar(last + '0');
	return (last);
}
