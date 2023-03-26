#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int b, h;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (h  = size - b; h  > 0; h--)
			{
				_putchar(' ');
			}
			for (h = 0; h < b; h++)
			{
				_putchar('#');
			}
			if (b == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
