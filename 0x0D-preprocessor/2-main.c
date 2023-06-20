#include <stdio.h>

/**
 * main - prints the name of the
 * file it was compiled from
 * Return: Always Success (0)
 */

int main(void)
{
	printf("%lu", _FILE_);
	return (0);
}
