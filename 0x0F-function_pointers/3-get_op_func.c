#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Function to call op
 * @s: integer to call function to pointer
 * Return: Success
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

	int n;

	n = 0;

	while (ops[n].op != 0 && *(ops[n].op) != *s)
		n++;

	return (ops[n].f);
}
