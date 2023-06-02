#include "lists.h"
#include "stdio.h"
/**
*print_list - prints the elements of linked list
*@h: pointer to list
*
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t c = 0;
	char *str;

	while (h)
	{
		if (h == NULL || str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}

	return (c);
}
