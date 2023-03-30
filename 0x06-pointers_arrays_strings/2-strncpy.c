#include "main.h"

/**
 * _strncpy - Copies at most inputted number
 * @dest: The buffer storing the string copied.
 * @src: The source where string is copied from.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind = 0, src_len = 0;

	while (src[ind++])
		src_len++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[ind] = src[ind];

	for (ind = src_len; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
