#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: input pointer to the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *init = s;
	char *last = s;
	char tmp;
	char count = 0;
	int i;

	while (*(s + count) != '\0')
	{
		last++;
		count++;
	}
	--last;            /* back previous \0*/

	for (i = 0; i < (count / 2); i++)
	{
		tmp = *last;
		*last = *init;
		*init = tmp;

		++init;
		--last;
	}
}
