#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: char operator.
 *
 * Return: pointer to the function that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			break;
		i++;
	}

	return (ops[i].f);
}