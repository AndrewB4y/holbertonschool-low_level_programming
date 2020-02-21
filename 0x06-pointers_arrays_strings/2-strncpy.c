#include "holberton.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: pointer to destination of the copy
 * @src: source from the one n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = src[i];

	return (dest);
}