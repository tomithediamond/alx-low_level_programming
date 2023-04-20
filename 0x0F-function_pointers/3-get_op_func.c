#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_function - selects the correct function to perform
 * the operation asked the by user.
 * @s: the operator passed at argument
 * Return:a pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int z = 0;
	while (ops[z].op != NULL && ops[z].op != *s)
		z++;

	return (ops[z].f);
}
