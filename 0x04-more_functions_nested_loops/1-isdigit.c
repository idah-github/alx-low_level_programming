#include "main.h"
/**
*_isdigit - the fun
*@c: the dig storage
*Return: returns 1 or 0
*/
int _isdigit(int c)
{
	if (c == 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
