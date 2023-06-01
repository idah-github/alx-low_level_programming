#include "main.h"
#include <stdlib.h>
/**
*_realloc - reallocate mem block using mallco and free
*@ptr: pointer to prev malloc
*@old_size: size of mem for ptr
*@new_size: size of new mem block
*Return: pointer to new mem block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr0;
	char *ptr1;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr)
		return (NULL);
	/*
	*if (ptr == NULL)
	*{
		*ptr1 = malloc(new_size);
		*if (!ptr1)
			*return (NULL);
		*return (ptr);
	*}
	*if (new_size == old_size)
		*return (ptr);
		*/
	ptr0 = ptr;
	if (new_size < old_size)
	{
		for (; i < new_size; i++)
			ptr1[i] = ptr0[i];
	}
	if (new_size > old_size)
		for (; i < old_size; i++)
			ptr1[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr1);
}
