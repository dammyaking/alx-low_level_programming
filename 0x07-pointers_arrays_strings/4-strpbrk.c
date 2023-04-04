#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int h, k;

	for (h = 0; *(s + h) != '\0'; h++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + h) == *(accept + k))
				return (s + h);
		}
	}
	return ('\0');
}
