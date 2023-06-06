#include <stdlib.h>
#include "lists.h"
/**
*insert_nodeint_at_index - insert new node at idx
*@head: pointer to first node
*@idx: where to add thenode
*@n: the data
*Return: the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
			tmp = tmp->next;

	}
	return (NULL);
}
