#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func - function pointer
*@s: thestr
*Return: thepointer
*
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
	int n = 0;

	for (; ops[n].op != NULL || *(ops[n].op) != *s; n++)
	{
		return (ops[n].f);
	}
	return (NULL);

}
