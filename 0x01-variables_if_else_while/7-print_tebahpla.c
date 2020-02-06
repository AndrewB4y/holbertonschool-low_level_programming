#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
