#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - does operations
*@argc: arg coun
*@argv: arg arr store
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num, num1;
	char op;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Errorr\n");
		exit(98);
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[3]);
	/*op = *argv[2];*/
	fun = get_op_func(argv[2]);
	op = *argv[2];

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && num1 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", fun(num, num1));
	return (0);
}


