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
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	for (j = 0; j < i; j += 2)
	{
		putchar(str[i]);
	}
	printf("\n");
}
