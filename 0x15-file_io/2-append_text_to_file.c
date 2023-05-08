#include "main.h"

/**
 * append_text_to_file -Function to append text at the end of a file
 * @filename:The filewhich text will be appended
 * @text_content: Text to append into the file
 *
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, j, k = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(f, text_content, k);
		if (j != k)
			return (-1);
	}

	close(f);

	return (1);
}
