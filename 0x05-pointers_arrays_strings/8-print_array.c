#include <stdio.h>
#include "main.h"

/**
 * print_array - This function prints 'n' elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);

		if (ind == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

