#include <stdlib.h>
#include "lists.h"
/**
*free_listint2 - free the list
*@head: the pointer to head pointer
*
*
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	for (; *head; *head = tmp)
	{
		tmp = (*head)->next;
		free(*head);
	}
	*head = NULL;
}

