#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h, k, bool;

	for (h = 0; *(s + h) != '\0'; h++)
	{
		bool = 1;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + h) == *(accept + k))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (h);}
