#include <stdio.h>

/**
 * main - prints the number
 * of passed arguments
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always Success (0)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d", (argc - 1));
	return (0);
}
