#include "3-calc.h"

/**
 * get_op_func - selects the correct operation function
 * @s: operator passed as argument
 * Return: pointer to a function of
 * the selected operation function
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
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops->f);
		}
		i++;
	}

	return (NULL);
}