#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - add a node to end of list
*@head: pointer to firt node
*@n: list data
*
*Return: the new node add
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode;
	listint_t *tp = *head;

	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;
	nwnode->next = NULL;
	if (*head == NULL)
	{
		*head = nwnode;
		return (nwnode);
	}
	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = nwnode;
	return (nwnode);
}


