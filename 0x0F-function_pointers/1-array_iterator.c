/*
 * A function that executes a function gievn as a parameter on each element of
 * an array
 */
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the funtion given to @array on each @size elements
 * @array: An array of integers
 * @size: The size of the array
 * @action: The function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
		for (j = 0; j < size; j++)
			action(array[j]);
}
