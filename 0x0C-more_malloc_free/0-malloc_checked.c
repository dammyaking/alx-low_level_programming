#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if not successful
 * @b: int whose memory is alotted
 * Return: returns pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
int *mem = malloc(b);
if (mem == 0)
	exit(98);

return (mem);
}
