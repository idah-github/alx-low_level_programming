#include "lists.h"
#include <stdlib.h>
/**
*free_listint - free list memory
*@head: listnd being free
*
*
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	for(; head; head = tmp)
	{
		tmp = head->next;
		free (head);
		/*tmp = head; */
	}
}
