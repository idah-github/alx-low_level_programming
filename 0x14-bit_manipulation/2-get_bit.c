#include "main.h"
/**
*get_bit - return value of a bit at a given index.
*@n: the number
*@index: bit to get from 0
*
* Return: the value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int tmp;

	if (index >= 64)
		return (-1);
	tmp = n >> index;
	return (tmp & 1);
}
