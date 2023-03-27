#include "main.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int ind = 0, len = 0, n;

	while (str[ind++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (ind = n; ind < len; ind++)
		_putchar(str[ind]);

	_putchar('\n');
}
