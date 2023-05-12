#include "main.h"
#include <stdio.h>
/**
*_isupper - checks if int is uppercase
*@c: is the var
*Return: ether 1 || 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
