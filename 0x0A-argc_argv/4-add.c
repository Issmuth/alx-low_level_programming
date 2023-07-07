#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of arguments
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 if success 1 if fail
 */

int main(int argc, char * argv[])
{
	int i, j = 0, sum = 0;

	if (argc < 2)
		putchar('0');

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			continue;
		} else
		{
			j++;
		}
	}
	if (j != 0)
	{
		printf("Error");
		return (1);
	} else
	{
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
