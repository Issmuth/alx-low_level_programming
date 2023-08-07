#include "main.h"
/**
 * read_textfile - reads a file and prints
 * the content to the console
 * @filename: name of the file
 * @letters: number of letters to read and write
 *
 * Return: the actual letters it read or wrote
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int file;
	int write_size, read_size;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read_size = read(file, str, letters);
	if (read_size == -1)
		return (0);

	close(file);

	write_size = write(1, str, letters);

	if (write_size == -1 || write_size != (int) letters)
		return (0);

	return (write_size);
}
