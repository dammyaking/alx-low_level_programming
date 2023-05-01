#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free a list.
 * @head: Address of the first node of list.
 **/

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
