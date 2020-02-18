#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: input string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *init = s;

	if (*s != '\0')
	{
		while (*s != '\0')
			s++;

		--s;   /*going back before the \0 */
		while (s != init)
		{
			_putchar(*s);
			--s;
		}
		_putchar(*s);    /*printing when *s == init */
	}
	_putchar('\n');
}
