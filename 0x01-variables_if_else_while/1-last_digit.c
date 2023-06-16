#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - compares the last digit of a randomly generated number to  5
 *
 * Return: 0 if successful 1 otherwise
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	if (m > 5)
	{
		printf("and is greater than 5\n");
	} else if (m == 0)
	{
		printf("and is 0\n");
	} else if (m < 6)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
