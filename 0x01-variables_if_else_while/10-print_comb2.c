#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;
	int first = 0;

	for (num = 0; num <= 99; num++)
	{
		first = num;
		while (first >= 10)
			first = first / 10;
		if (num < 10)
			first = 0;

		putchar(first + 48);
		putchar((num % 10) + 48);
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
