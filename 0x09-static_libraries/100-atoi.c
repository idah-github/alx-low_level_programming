#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_atoi - convert str to int
*@s: store the var
*Return: the int
*
*
*/
int _atoi(char *s)
{
	int res, c = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		c++;
	}
	for (; s[c] != '\0'; c++)
	{
		if (s[c] >= '0' && s[c] <= '9')
		{
			res = res * 10 + (s[c] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (sign * res);
}
