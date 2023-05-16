#include "main.h"
#include <stdlib.h>
/**
* *create_array - creates arr of char
*@size: sie of arr
*@c: char to initialize arr
*
*Return: pointer to arr
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = (char *)malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	/*
	 * if (a == NULL)
	*{
		*return (0);
	*}
	*/
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
