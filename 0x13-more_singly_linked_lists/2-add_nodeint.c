#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Function that adds a new node at the head
 *               of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @n: The integer the new node will contain.
 *@i: new node to be added
 * Return: Return i for success and NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;

	*head = i;

	return (i);
}
