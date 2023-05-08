#include "main.h"

/**
 * main -entry point
 * @argc: counts nos of argument
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int f_r, f_w, y, i, j;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_r = open(argv[1], O_RDONLY);
	if (f_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can not read from file %s\n", argv[1]);
		exit(98);
	}
	f_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((y = read(f_r, buff, BUFSIZ)) > 0)
	{
		if (f_w < 0 || write(f_w, buff, y) != y)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_r);
			exit(99);
		}
	}
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(f_r);
	j = close(f_w);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_r);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_w);
		exit(100);
	}
	return (0);
}
