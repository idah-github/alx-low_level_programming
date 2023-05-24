#include "function_pointers.h"
/**
*array_iterator - array function par
*@array: the arr
*@size: the size of the arr
*@action: the pointer to function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
