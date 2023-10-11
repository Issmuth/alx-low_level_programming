#include "main.h"

/**
 * read_textfile - writes the content of a file
 * to the POSIX stdout.
 * @filename: file to be referenced
 * @letters: number of letters to print
 *
 * Return: number of letters actually printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t actual;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	actual = read(fd, buf, letters);
	if (actual < 0)
		return (0);

	actual = write(STDOUT_FILENO, buf, letters);
	if (actual < 0)
		return (0);

	return (actual);
}
