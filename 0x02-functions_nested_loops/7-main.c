#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-5);
	print_last_digit(1027);
	_putchar('\n');
	r = print_last_digit(-1024);
	_putchar('0' + r);
	r = print_last_digit(0);
        _putchar('0' + r);
	r = print_last_digit(5);
        _putchar('0' + r);
	r = print_last_digit(-99);
        _putchar('0' + r);
	r = print_last_digit(-2147483648);
        _putchar('0' + r);
	_putchar('\n');
	return (0);
}
