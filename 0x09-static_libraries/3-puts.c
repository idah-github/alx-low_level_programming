#include "main.h"
#include <stdio.h>

/**
*_puts -prints a string
*@str: the string var
*Return: return void
*
*/
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
