#include "main.h"
/**
*_isdigit - the fun
*@c: the dig storage
*Return: returns 1 or 0
*/
int _isdigit(int c)
{
	if (c == 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
