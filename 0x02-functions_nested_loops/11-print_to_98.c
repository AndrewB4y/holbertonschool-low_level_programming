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
	int diff = n - 98;
	int current = n;

	if (diff > 0)
		delta = -1;

	/*print current n*/
	print_any_int(n);

	while (current != 98)
	{
		_putchar(',');
		_putchar(' ');
		current = current + delta;
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
	int count = 0;
	int eval = m;
	int bigTen = 1;
	int digit;
	int sign = 1;

	if (m < 0)
	{
		sign = -1;
		_putchar('-');
	}

	while (eval != 0)
	{
		eval /= 10;
		++count;  /*in the end will store the # of digits of m*/
		bigTen = bigTen * 10;
	}

	eval = m;
	while (eval >= 10 || eval <= -10)
	{
		bigTen = bigTen / 10;
		digit = get_first(eval);
		if(digit < 0)
			digit = digit * sign;
		_putchar(digit + '0');
		eval = eval - (digit * sign * bigTen);
	}
	if (eval < 0)
		eval = eval * sign;
	_putchar(eval + '0');

}
/**
 * get_first - obtains the first digit of the input number
 * @n: input number from which the first digit is obtained
 *
 * Return: the first digit
 */

int get_first(int n)
{
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
	}

	return (n);
}
