#include "holberton.h"

/**
 * _puts - prints a string followed by anew line
 * @str: input string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
