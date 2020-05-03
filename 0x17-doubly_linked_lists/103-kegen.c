#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * f3 - calculation of the 3rd character
 * @arg_1: pointer to first input argument.
 * @arg_2_len2: 6
 *
 * Return: result of the calculation.
 */
unsigned long f3(char *arg_1, int arg_2_len2)
{
	unsigned int local_10;
	int local_c;

	local_10 = 1;
	local_c = 0;
	while (local_c < arg_2_len2)
	{
		local_10 = arg_1[local_c] * local_10;
		local_c = local_c + 1;
	}
	return ((unsigned long)((local_10 ^ 0x55) & 0x3f));
}

/**
 * f4 - calculation of the 3rd character
 * @arg_1: pointer to first input argument.
 * @arg_2_len2: 6
 *
 * Return: result of the calculation.
 */
unsigned long f4(char *arg_1, int arg_2_len2)
{
	unsigned int uVar1;
	unsigned int local_10;
	int local_c;

	local_10 = arg_1[0];
	local_c = 0;
	/*Looking for the smallest character*/
	while (local_c < arg_2_len2)
	{
		if ((int)local_10 < (int)arg_1[local_c])
		{
			local_10 = arg_1[local_c];
		}
		local_c = local_c + 1;
	}
	srand(local_10 ^ 0xe);
	uVar1 = rand();
	return ((unsigned long)(uVar1 & 0x3f));
}
/**
 * f5 - calculation of the 3rd character
 * @arg_1: pointer to first input argument.
 * @arg_2_len2: 6
 *
 * Return: result of the calculation.
 */

unsigned long f5(char *arg_1, int arg_2_len2)
{
	int local_10;
	int local_c;

	local_10 = 0;
	local_c = 0;
	while (local_c < arg_2_len2)
	{
		local_10 = local_10 + arg_1[local_c] * arg_1[local_c];
		local_c = local_c + 1;
	}
	return ((unsigned long)((unsigned int)(char)((char)local_10 ^ 0xef) & 0x3f));
}

/**
 * f6 - calculation of the 3rd character
 * @arg_1: pointer to first input argument.
 *
 * Return: result of the calculation.
 */

unsigned long f6(char arg_1)
{
	int local_10;
	int local_c;

	local_10 = 0;
	local_c = 0;
	while (local_c < arg_1)
	{
		local_10 = rand();
		local_c = local_c + 1;
	}
	return ((unsigned long)((unsigned int)(char)((char)local_10 ^ 0xe5) & 0x3f));
}

/**
 * main - program that generates a key for a given name
 * @argc: count of input arguments
 * @argv: array of string inputs.
 *
 * Return: 0 on success, 1 if failed.
 */

int main(int argc, char **argv)
{
	char *str_1, str_2[7], *local_58;
	uint uVar2;
	unsigned long uVar3;
	unsigned int local_10;
	int local_c;

	local_58 = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		exit(1);
	}
	str_1 = argv[1];
	uVar2 = 6;
	uVar3 = ((6 ^ 0x3b) & 0x3f);
	str_2[0] = local_58[uVar3];
	/* f2 */
	local_10 = 0;
	local_c = 0;
	while (local_c < (int)uVar2)
	{
		local_10 = local_10 + str_1[local_c];
		local_c = local_c + 1;
	}
	uVar3 = ((local_10 ^ 0x4f) & 0x3f);
	str_2[1] = local_58[uVar3];
	uVar3 = f3(str_1, uVar2);
	str_2[2] = local_58[uVar3];
	uVar3 = f4(str_1, uVar2);
	str_2[3] = local_58[uVar3];
	uVar3 = f5(str_1, uVar2);
	str_2[4] = local_58[uVar3];
	uVar3 = f6(*str_1);
	str_2[5] = local_58[uVar3];
	str_2[6] = '\0';
	printf("%s", str_2);
	return (0);
}
