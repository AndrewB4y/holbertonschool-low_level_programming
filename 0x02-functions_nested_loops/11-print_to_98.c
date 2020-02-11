#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input integer from which the count starts until 98
 *
 * Return: 0 on success
 */

void print_to_98(int n)
{
	int delta = 1;
	int current = n;

	if (n > 98)
		delta = -1;

	/*print current n*/
	if (current < 0)
		_putchar('-');
	print_any_int(n);

	while (current != 98)
	{
		_putchar(',');
		_putchar(' ');
		current = current + delta;
		if (current < 0)
			_putchar('-');
		print_any_int(current);
	}
	_putchar('\n');
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
