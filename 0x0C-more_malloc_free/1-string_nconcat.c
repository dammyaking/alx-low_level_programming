#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * s1: The first string.
 * s2: The second string.
 * n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Else, a pointer to the concatenated space in memory is returned.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, ind;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind]; ind++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (ind = 0; s1[ind]; ind++)
		concat[len++] = s1[ind];

	for (ind = 0; s2[ind] && ind < n; ind++)
		concat[len++] = s2[ind];

	concat[len] = '\0';

	return (concat);
}
