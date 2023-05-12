#include "main.h"
/**
*_isalpha - Return alphabet if upperor lowercase
*@c: Var/ argument
*Return: Always #
*/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
