#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte, ind;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (ind= 0; ind < 10; ind++)
		{
			if ((ind + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + ind + byte));

			if ((ind % 2) != 0 && ind != 0)
				printf(" ");
		}

		for (ind = 0; ind< 10; ind++)
		{
			if ((ind + byte) >= size)
				break;

			else if (*(b + ind + byte) >= 31 &&
				 *(b + ind + byte) <= 126)
				printf("%c", *(b + ind + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
