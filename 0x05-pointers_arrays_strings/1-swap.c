#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: The 1st  int of value 98
 * @b: The 2nd int of value 42
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
