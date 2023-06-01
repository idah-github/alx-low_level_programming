#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
/**
*main - mul 2 positives
*@argc: arg count
*@argv: arg store
*
*Return: #0
*/
int main(int argc, char *argv[])
{
	int num, num1, mul, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	i = 1;
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(1);
			}
		}
		i++;
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	mul = num * num1;
	printf("%d\n", mul);
	return (0);
}
