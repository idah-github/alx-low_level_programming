#include "main.h"
/**
*print_sign - return 0 letter not lowercase, 1 letter lowercase
*@n: the var to print
*Return: Always 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar('0');
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}

