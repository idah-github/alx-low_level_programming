#include "lists.h"
#include <stdio.h>
/**
*print_listint - print list element
*@h: the head pointer
*
*Return: the number of nodes
*
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
