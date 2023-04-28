#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - This add  a new node to the start  of a list
  * @head: The Initial linked list
  * @str: The string to be added to the node
  *
  * Return: The address of the new list or NULL if add_node fails
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
