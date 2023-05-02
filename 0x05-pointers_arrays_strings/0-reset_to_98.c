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
	int i = 98;

	n = &i;

	printf("%d\n", i);
}


