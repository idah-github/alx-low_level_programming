#include "main.h"
/**
*clear_bit - setbit value to 0
*@n: the number to change
*@index: the pos to change
*
*Return: 1 or #
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n &= ~(1ul << index);
	return (1);
}
