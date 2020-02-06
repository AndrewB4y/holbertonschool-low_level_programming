#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 15; num++)
	{
		if (num <= 9)
			putchar(num + 48);
		else if (num <= 15)
			putchar(num + 97 - 10);
	}
	putchar('\n');
	return (0);
}
