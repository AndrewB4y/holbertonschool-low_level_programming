#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - creates a random valid password for the 101-crackme executable
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int digit;
	int div = 1;
	int sum = 0;
	int left = 0;
	
	while (sum < 2772)
	{
		srand(time(0));
		n = rand();
		div = n;
		/*get the sum of the random number digits*/
		while (div != 0)
		{
			digit = div % 100;
			sum += digit;
			if (sum > 2772)
			{
				left = sum - 2772;
				digit -= left;
				sum -= left;
				div = 0;
			}
			div = div / 100;
			putchar(digit);
		}
	}

	return (0);
}
