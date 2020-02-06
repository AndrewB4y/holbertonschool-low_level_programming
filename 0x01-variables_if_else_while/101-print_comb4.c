#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int first = 0;
	int mid = 0;
	int last = 0;

	for (first = 0; first <= 9; first++)
	{
		for (mid = first + 1; mid <= 9; mid++)
		{
			for (last = mid + 1; last <= 9; last++)
			{
				putchar(first + 48);
				putchar(mid + 48);
				putchar(last + 48);
				if (first < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
