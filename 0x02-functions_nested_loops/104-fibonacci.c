#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the first 98 fibonacci, starting with 1 and 2
 *
 * Return: 0, and the print stated.
 */

int main(void)
{
	long h1 = 0, l1 = 1, h2 = 0, l2 = 1, h3 = 0, l3 = l1;
	long max = 999999999999999999;
	long carry = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (l3 > max)
		{
			carry = get_first_l(l3);
			l3 = l3 - (carry * (max + 1));
			l2 = l3;
			h3 = h3 + carry;
			h2 = h3;
		}
		if (h3 == 0)
			printf("%ld", l3);
		else
			printf("%ld%ld", h3, l3);
		l3 = l1 + l2;
		l1 = l2;
		l2 = l3;
		h3 = h1 + h2;
		h1 = h2;
		h2 = h3;
		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

/**
 * get_first_l - obtains the first digit of the input number
 * @n: input number from which the first digit is obtained
 *
 * Return: the first digit
 */

long get_first_l(long n)
{
	if (n < 10)
	{
		n = 0;
	}
	while (n >= 10)
	{
		n = n / 10;
	}

	return (n);
}
