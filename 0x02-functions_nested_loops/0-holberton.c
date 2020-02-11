#include "holberton.h"
#include <string.h>

/**
 * main - prints "Holberton"
 *
 * Return: 0 and the message on the stdout, on success
 */

int main(void)
{
	char *message = "Holberton";
	int i = 0;

	for (i = 0; i <= (int)strlen(message); i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');

	return (0);
}
