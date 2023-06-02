#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - add node to begining oflist
*@head: pointer to head pointer
*@str: str for new node
*
*Return: new node address
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len;

	for (len = 0; str[len]; len++)

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	else
	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
