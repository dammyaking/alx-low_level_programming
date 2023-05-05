#include "main.h"
/**
 * get_endianness - return the endianness
 *
 * Return: 0 for Big endian, 1 for Little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
