#include "main.h"

/**
 * create_file - creates a file with
 * specific content
 * @filename: name of file created
 * @text_content: content of file
 *
 * Return:1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "\0";

	write_count = write(file, text_content, strlen(text_content));

	if (write_count < 0)
		return (-1);

	return (1);
}
