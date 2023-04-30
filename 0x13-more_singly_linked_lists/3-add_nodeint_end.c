#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the tail of a listint_t list.
 * @n: The integer the new node to contain.
 *  @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: Return NULL if fail, new node if success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *last;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
		*head = i;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = i;
	}

	return (*head);
}
