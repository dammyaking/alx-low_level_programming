#include "lists.h"
#include <stddef.h>
/**
 * listint_len - Return the width of a linked list.
 * @h: head of a linke list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t xnode = 0;

	while (h != NULL)
	{
		h = h->next;
		xnode++;
	}
	return (xnode);
}
