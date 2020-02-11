#include "holberton.h"

/**
 * main - prints "Holberton"
 *
 * Return: 0 and the message on the stdout, on success
 */

int main(void)
{
	char *message = "Holberton";
	int i = 0;

	do {
		_putchar(message[i++]);
	} while (message[i] != '\0');
	_putchar('\n');

	return (0);
}
