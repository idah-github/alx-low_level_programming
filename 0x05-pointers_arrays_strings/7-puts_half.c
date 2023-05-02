#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts_half - returns half of a string
*@str: the ver of the string
*Return: void
*/
void puts_half(char *str)
{
	int l = strlen(str);
	int hl = l / 2;
	int hs;

	for (hs = 0; hs < hl; hs++)
	{
		printf("%c", str[hs]);
	}
	printf("\n");
}


