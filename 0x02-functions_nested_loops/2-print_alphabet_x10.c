#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercass x10 with ending new line
 *
 * Return: void, and prints the alphabet on the standard output
 */

void print_alphabet_x10(void)
{
	int letterz = 'a';
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letterz = 'a'; letterz <= 'z'; letterz++)
		{
			_putchar(letterz);
		}
		_putchar('\n');
	}
}
