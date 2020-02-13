#include "holberton.h"

/**
 * _isupper - checks if input is uppercase
 * @c: input to be checked aginst ascii equivalence as character
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
