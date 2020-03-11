#include "3-calc.h"

/**
 * get_op_func - selects the correct function asked by the operator.
 * @s: string holding the operator to perform.
 *
 * Return: pointer to function that corresponds to the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s[1] != '\0' || s == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	while (s[0] != *ops[i].op && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
