#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0 and prints the table on stdout
 */

void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(res + '0');
			}
			else if (res < 99)
			{
				_putchar(get_first(res) + '0');
				_putchar(get_last(res) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * (j + 1)) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * get_first - obtains the first digit of the input number
 * @n: input number from which the first digit is obtained
 *
 * Return: the first digit
 */

int get_first(int n)
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

/**
 * get_last - obtains the last digit of the input number
 * @m: input number from which the last digit is obtaind
 *
 * Return: the last digit of m
 */

int get_last(int m)
{
	m = m % 10;
	return (m);
}
