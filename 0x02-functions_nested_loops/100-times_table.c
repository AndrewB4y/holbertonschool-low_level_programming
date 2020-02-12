#include "holberton.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to the which times table is going to be printed
 *
 * Return: void, and the print of the n times table
 */

void print_times_table(int n)
{
	int i;
	int j;
	int r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				print_any_int(r);

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * (j + 1)) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((i * (j + 1)) < 100)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_any_int - uses _putchar to print every digit of any int
 * @m: input integer to be printed with _putchar
 *
 * Return: void, printing every digit of m into stdout
 */
void print_any_int(int m)
{
	int last;

	if (m / 10)
		print_any_int(m / 10);

	last = m % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
}
