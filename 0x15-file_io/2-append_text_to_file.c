#include "main.h"

/**
 * append_text_to_file - appends text at the
 * end of a file
 * @filename: name of text file
 * @text_content: appended string of text
 *
 * Return: 1 on success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}

	return (1);
}

