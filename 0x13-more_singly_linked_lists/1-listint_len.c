#include "lists.h"
/**
*listint_len - return the list elements
*@h: pointer to head add
*
*
*Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t el = 0;

	for (; h != NULL; h =  h->next)
	{
		el++;
	}
	return (el);
}
