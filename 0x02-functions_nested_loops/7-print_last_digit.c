#include "main.h"
/**
*print_last_digit - last digit
*
*@n: store value/n
*Return: last digit
 */
int print_last_digit(int n)
{
	int last_dgt;

	if (n < 0)
		n = -n;
	last_dgt = n % 10;

	if (last_dgt < 0)
		last_dgt = -last_dgt;

	_putchar (last_dgt + '0');
	return (last_dgt);
}
