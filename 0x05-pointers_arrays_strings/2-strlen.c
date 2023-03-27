#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: The pointer to the string
 * Return: 0
 */

int _strlen(char *str)

{
	int len;

	for (len = 0; str[len] != '\0'; ++len)
		;
	return (len);
}
