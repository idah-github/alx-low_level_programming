#include "main.h"
/**
*print_last_digit - last digit
*
*@n: store value/n
*Return: last digit
 */
int print_last_digit(int n)
{
	int last_dgt = n % 10;

	_putchar (last_dgt + '0');
	return (last_dgt);
}
