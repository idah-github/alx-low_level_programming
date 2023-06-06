#include "lists.h"
#include <stdlib.h>
/**
*pop_listint - deletethe head of list
*@head: the pointer to head pointer of list
*
*Return: the head data
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	/**head = tp;*/

	return (data);
}
