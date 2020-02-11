#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercass with ending new line
 *
 * Return: void, and prints the alphabet on the standard output
 */

void print_alphabet(void)
{
	int letterz = 'a';

	for (; letterz <= 'z'; letterz++)
	{
		_putchar(letterz);
	}
	_putchar('\n');
}
