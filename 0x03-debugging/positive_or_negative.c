#include "holberton.h"

/**
 * main - entry point: prints if n is negative or positive
 * @n: input number to check
 * Return: Always 0 on success
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

}
