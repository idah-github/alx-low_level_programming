#include "main.h"
#include <stdlib.h>
/**
*_calloc - arr memalloc
*@nmemb: arr size
*@size: size of each arr element
*
*Return: arr mem pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr  == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

