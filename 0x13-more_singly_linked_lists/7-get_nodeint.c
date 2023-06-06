#include "lists.h"
#include <stdlib.h>
/**
*get_nodeint_at_index - return list node
*@head: pointer to head of list
*@index: the index of node
*
*Return: the node at index(n)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	for (; tmp && i < index; i++, tmp = tmp->next)
	{

	}
	if (tmp && i != index)
		return (NULL);
	else
		return (tmp);
}
