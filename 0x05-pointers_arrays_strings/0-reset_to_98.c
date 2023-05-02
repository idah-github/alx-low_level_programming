#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - uses pointer to update int value
*@n: the pointer
*
*void -will be 0#
*/
void reset_to_98(int *n)
{
	int i;

	n = &i;
	*n = 98;

	printf("%d\n", i);
}


