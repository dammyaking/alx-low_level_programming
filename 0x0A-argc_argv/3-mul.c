#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of aruguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		product *= atoi(argv[j]);
	}
	printf("%d\n", product);
	return (0);
}
