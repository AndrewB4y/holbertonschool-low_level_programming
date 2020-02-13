#include "holberton.h"

/**
 * print_number - prints an integer on console
 * @n: number to be printed
 *
 * Return: void, and the stated print
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	print_any_int(n);
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
