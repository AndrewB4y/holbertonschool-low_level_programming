#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
