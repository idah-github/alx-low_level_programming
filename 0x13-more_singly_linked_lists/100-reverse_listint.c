#include "lists.h"
/**
*reverse_listint - reverse a lis
*@head: pointer to head
*
*
*Return: the pointer to ist node of rvred lsi
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *pn = NULL;

	for (; *head; *head = pn)
	{
		pn = (*head)->next;
		(*head)->next = pv;
		pv = *head;
	}
	*head = pv;
	return (*head);
}
