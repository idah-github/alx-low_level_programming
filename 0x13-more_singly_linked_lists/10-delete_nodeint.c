#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index - delete node at give index
*@head: pointer to firts node pointer
*@index: index to del
*
*Return: 1 if success else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *k;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (-1);
	}
	for (; i < index - 1; i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}
	k = NULL;
	k = tmp->next;
	tmp->next = k->next;
	free(k);
	return (1);
}
