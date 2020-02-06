#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int num1 = 0;
	int first1 = 0;
	int num2 = 0;
	int first2 = 0;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			first1 = num1;
			while (first1 >= 10)
				first1 = first1 / 10;
			if (num1 < 10)
				first1 = 0;

			first2 = num2;
			while (first2 >= 10)
				first2 = first2 / 10;
			if (num2 < 10)
				first2 = 0;
			putchar(first1 + 48);
			putchar((num1 % 10) + 48);
			putchar(' ');
			putchar(first2 + 48);
			putchar((num2 % 10) + 48);
			if (num1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
