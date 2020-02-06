#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int first = 0;
	int last = 0;

	for (first = 0; first <= 9; first++)
	{
		for (last = first + 1; last <= 9; last++)
		{
			putchar(first + 48);
			putchar(last + 48);
			if (first < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
