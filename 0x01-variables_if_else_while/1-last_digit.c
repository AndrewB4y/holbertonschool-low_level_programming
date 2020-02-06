#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point, prints definition of last digit in random number
 *
 * Return: Always 0 on success
*/
int main(void)
{
	int n;
	int first;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	first = n % 10;
	if (first > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, first);
	else if (first == 0)
		printf("Last digit of %d is %d and is 0\n", n, first);
	else if (first < 6 && first != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, first);

	return (0);
}
