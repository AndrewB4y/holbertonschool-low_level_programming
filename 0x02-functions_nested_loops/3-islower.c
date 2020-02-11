#include "holberton.h"
/**
 * _islower - compares if an input character is lowercase
 * @c: Input character to be compared received as int
 *
 * Return: 1 if the character c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
