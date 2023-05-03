#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of nodes
 *                      in a looped listint_t list.
 * @head: A pointer to the head of the listint_t.
 *
 * Return: If loop fail - 0. if success return nodes
 *         
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *dog, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dog = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (dog == cat)
		{
			dog = head;
			while (dog != cat)
			{
				nodes++;
				dog = dog->next;
				cat = cat->next;
			}

			dog = dog->next;
			while (dog != hare)
			{
				nodes++;
				dog = dog->next;
			}

			return (nodes);
		}

	dog = dog->next;
		cat = (cat->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list free lists with loops
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
