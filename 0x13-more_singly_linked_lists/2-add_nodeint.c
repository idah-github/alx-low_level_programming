#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - add new new elemet at start
*@head: pointer to head pointer
*@n: the node data
*
*Return: the new node address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnd;

	newnd = malloc(sizeof(listint_t));
	if (!newnd)
		return (NULL);
	newnd->n = n;
	newnd->next = *head;
	newnd = *head;
	return (*head);
}

