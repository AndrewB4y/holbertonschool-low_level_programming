#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of the input string
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int count;
	char i;

	while (*(str + count) != '\0')
	{
		++count;
	}

	half = count / 2;

	for (i = 0; i < half; i++)
	{
		if (count % 2 == 0)
			_putchar(*(str + i + half));
		else
			_putchar(*(str + 1 + i + half));
	}
	_putchar('\n');
}
