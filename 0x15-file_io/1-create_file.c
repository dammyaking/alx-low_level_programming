#include "main.h"

/**
 * create_file - creates a file, filled with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int f, i, j = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(f, text_content, j);
		if (i != j)
			return (-1);
	}

	close(f);

	return (1);
}
