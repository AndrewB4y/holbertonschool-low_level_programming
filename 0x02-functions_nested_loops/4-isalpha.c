#include "holberton.h"

/**
 * _isalpha - compares the input argutment and checks if is alphabetic
 * @c: Input character to be compared, taken as int
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
