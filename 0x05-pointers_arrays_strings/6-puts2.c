#include "main.h"

/**
 * puts2 - A function that prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int ind = 0, len = 0;

	while (str[ind++])
		len++;

	for (ind = 0; ind < len; ind += 2)
		_putchar(str[ind]);

	_putchar('\n');
}
