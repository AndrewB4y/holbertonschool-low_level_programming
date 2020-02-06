B#include <string.h>
#include <unistd.h>
/**
 * main - Entry point, prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19"
 * Return: error 2
 */
int main(void)
{
	char *mErr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, mErr, strlen(mErr));
	return (1);
}
