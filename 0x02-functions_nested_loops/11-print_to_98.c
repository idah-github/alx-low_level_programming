#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Check number fromnto98
*@n: A input integer
*
*Return: Numbers
*/
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}
	for (; n >= 98; n--)
	{
		printf("%d, ", n);
	}
}
