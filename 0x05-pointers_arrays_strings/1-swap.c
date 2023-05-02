#include "main.h"
#include <stdio.h>
/**
* swap_int - swaps the numbers
* @a: the first int
* @b: the second int
* Return: void
*
*/
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
