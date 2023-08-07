#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "\0";

	app_count = write(file, text_content, strlen(text_content));

	close(file);
	if (app_count < 0)
		return (-1);

	return (1);
}
