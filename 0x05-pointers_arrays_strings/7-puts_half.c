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
	int n = strlen(str);
	int hs;

	if (n % 2 != 0)
	{
		n = (n - 1) / 2;
		str += n;
	}
	else
	{
		n = n / 2;
		str += n;
	}

	for (hs = 0; str[hs] != '\0'; hs++)
	{
		printf("%c", str[hs]);
	}
	printf("\n");
}
