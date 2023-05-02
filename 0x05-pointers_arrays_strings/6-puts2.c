#include "main.h"
#include <stdio.h>
/**
*puts2 - prints each char of a string
*@str: srting storage
*Return:void
*
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i+1] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
