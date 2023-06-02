#include "lists.h"
#include <stdlib.h>
/**
*free_list - free linked list list_t
*@head: pointer to list being freed #head
*
*
*/
void free_list(list_t *head)
{
	list_t *cn;

	while (head != NULL)
	{
		cn = head;
		head = head->next;
		free(cn->str);
		free(cn);
	}
}


