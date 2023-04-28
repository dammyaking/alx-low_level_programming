#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Display the length or  number of elements of a list
  * @h: The linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
