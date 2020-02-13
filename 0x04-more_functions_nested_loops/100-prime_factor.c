#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: void, and the stated print
 */

int main(void)
{
	long n = 612852475143;
	long div = 2;
	long largest;

	while (n != 0)
	{
		if (n % div != 0)
		{
			++div;
		}
		else
		{
			largest = n;
			n /= div;
			if (n == 1)
			{
				printf("%lu\n", largest);
				n = 0;
			}
		}
	}
	return (0);
}
