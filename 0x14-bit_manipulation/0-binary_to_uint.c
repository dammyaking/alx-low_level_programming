#include "main.h"

/**
 * binary_to_uint - converts a binary nos to an unsigned int.
 * @b: pointer to a string that has a binary nos
 *
 * Return: unsigned int with decimal values and 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num1;

	num1 = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		num1 <<= 1;
		if (b[j] == '1')
			num1 += 1;
	}
	return (num1);
}
