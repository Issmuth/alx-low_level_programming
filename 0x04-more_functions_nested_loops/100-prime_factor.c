#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...
 * Return: ...
 */

int main(void)
{
	long int num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (num == i)
				break;

			i = 2;
		}
	}
	printf("%ld\n", num);
	return (0);
}
