#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Remove the first node of a listint_t list.
 * @head: The pointer to the address of the
 *        head of a listint_t list.
 *
 * Return: If listint Null - 0. If !Null return n
 *        
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int lists;

	if (*head == NULL)
		return (0);

	temp = *head;
	lists = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (lists);
}
