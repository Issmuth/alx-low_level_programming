#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text added to the file
 *
 * Return: 1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content[len])
		len++;

	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
