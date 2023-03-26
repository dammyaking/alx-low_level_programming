#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * size: The size of the sqaure
 */

void print_square(int size)
{
	int br, lt;

	if (size > 0)
	{
		for (br = 0; br < size; br++)
		{
			for (lt = 0; lt < size; lt++)
				_putchar('#');

			if (br == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
