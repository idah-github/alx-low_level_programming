#include "lists.h"

/**
*list_len - count element in linked list
*@h: pointer to list
*
*
*Return: number of elementsof h
*/
size_t list_len(const list_t *h)
{
	size_t e = 0;

	for (; h; e++)
		h = h->next;
	return (e);
}
