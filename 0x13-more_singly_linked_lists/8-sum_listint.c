#include "lists.h"
/**
*sum_listint - calc the sum or list ele
*@head: pointer to head of list
*
*Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
