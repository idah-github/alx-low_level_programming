#include "3-calc.h"
#include "stdlib.h"
/**
*op_add - calc the sum
*@a: first num
*@b: sec num
*
*Return: the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - calc difference
*@a: num 1
*@b: num2
*Return: the diff
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - calc the product
*@a: num1
*@b: num2
*Return: the product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divisio calc
*@a: num1
*@b: num2
*Return: the division res
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - modulus calc
*@a: num1
*@b: num2
*Return: the remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
