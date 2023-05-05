#include "main.h"


/**
 * flip_bits - number of different bits been flipped
 * @n: first num
 * @m: second num
 *
 * Return: number of bits neede to flip nos
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, j;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
