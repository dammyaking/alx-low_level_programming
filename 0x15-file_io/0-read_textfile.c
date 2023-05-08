#include "main.h"
/**
 * read_textfile - reads a text file and prints to the stdout
 * @letters: nos of letters to read and print
 * @filename: name of file to be read and returned
 * Return: the nos of letters printed, 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int j, x;
	char *buf;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	j = read(f, buf, letters);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	buf[j] = '\0';
	close(f);
	x = write(STDOUT_FILENO, buf, j);
	if (x < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (x);
}
