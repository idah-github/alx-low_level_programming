#include "main.h"
/**
*_sqrt_recursion - return natural number sqr root
*@n: number to ger sqr root of
*@i: iterator
*Return: resulting sqr root
*
*int the_sqrt_recursion(int);
*int i;
*/

int _sqrt_recursion(int n, int i)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
/*
 * int the_sqrt_recursion(int n)
*{
*/
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
