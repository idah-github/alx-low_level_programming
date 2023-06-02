#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*add_node_end - add node at end of lis
*@head: pointer to list
*@str: string to add
*
*Return: the address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	
	
	/*
	 * unsigned int len;
	*for (len = 0; (str[len]); len++)
	*/
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	return (n);
}
