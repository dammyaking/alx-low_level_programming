#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabets in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char dcb;

	for (dcb = 'z'; dcb >= 'a'; --dcb)
	{
		putchar(dcb);
	}
	putchar('\n');

	return (0);
}
