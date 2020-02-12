#include "holberton.h"
#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0, and the print stated on success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
