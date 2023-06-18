#include <stdio.h>

/**
 * print_sign - checks if the value is negative
 * positve or zero and returns an integer accordingly
 *@n: value to be checked
 * Return: 1 if positive, 0 if zero and -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
