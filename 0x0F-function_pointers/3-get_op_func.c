#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - An array of 5 functions
 * @s: the pointer that holds the user's input
 * Return: pointer to the function that match with the operation
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
	int j = 0;

	while (j < 10)
	{
		if (s[0] == ops->op[j])
			break;
		j++;
	}

	return (ops[j / 2].f);
}
