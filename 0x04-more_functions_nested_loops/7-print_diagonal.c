#include "main.h"

/**
 * print_diagonal - Draws diagonal line with the use of \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int m)
{
	int line, space;

	if (m > 0)
	{
		for (line = 0; line < m; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (line == m - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
