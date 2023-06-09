#include "main.h"
/**
*set_bit - set value of bit to 1 at index
*@n: pointer to number
*@index: the index to change
*
*Return: 1 if success else 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b = 1;

	if (index >= 64)
		return (-1);
	for (; index > 0; index--, b *= 2)
	{
		;
	}
	*n += b;
	return (1);
}
