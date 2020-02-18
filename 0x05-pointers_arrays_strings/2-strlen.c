#include "holberton.h"

/**
 * _strlen - obtains the length of a string
 * @s: char pointer to the first position in string
 *
 * Return: the length of the string as an int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		++count;
	}
	return (count);
}
