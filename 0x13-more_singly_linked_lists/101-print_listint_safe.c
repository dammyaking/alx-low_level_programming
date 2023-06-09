#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: First list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num1 = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		num1++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num1);
}
