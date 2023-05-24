#include "function_pointers.h"
/**
*int_index - search for an integer
*@array: the arr
*@size: size of the arr
*@cmp: arr funct pointer
*Return: 0,1 / -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}
	for (; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
