#include "main.h"

/**
 * main - copies the content of
 * one file to another
 * @argc: argument count
 * @argv: list of argument
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_count, read_from;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_EXCL,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to < 0)
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_from = read(file_from, buffer, 1024)) > 0)
	{
		if (read_from < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (dprintf(file_to, "%s", buffer) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	close_count = close(file_from);
	if (close_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_count = close(file_to);
	if (close_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
