#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - alloctaes memory
*@b: size of memory
*
*Return: memory pointer 98 if mallocfail
*
*/
void *malloc_checked(unsigned int b)
{
	int *mp;

	mp = malloc(b);
	if (mp == NULL)
	{
		exit(98);
	}
	return (mp);
	free(mp);
}
