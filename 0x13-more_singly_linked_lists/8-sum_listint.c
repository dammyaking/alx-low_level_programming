#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Adds all of the data (n) in a list.
 * @head: Address of the Head node of the list.
 * Return: total sum.
 **/

int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
