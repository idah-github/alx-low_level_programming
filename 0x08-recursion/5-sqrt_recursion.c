#include "main.h"
/**
*_sqrt_recursion - return natural number sqr root
*@n: number to ger sqr root of
*@i: iterator
*Return: resulting sqr root
*/
int _sqrt_recursion(int n, int i)

{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
