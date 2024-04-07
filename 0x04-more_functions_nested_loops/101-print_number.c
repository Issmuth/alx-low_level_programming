#include "main.h"

/**
 * digits - ...
 * @n: ...
 * Return: ...
 */

int digits(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * _pow - ...
 * @n: ...
 * Return: ...
 */

int _dig(int n)
{
	int dig = 1;

	while (n--)
		dig *= 10;

	return (dig);
}

/**
 * print_number - ...
 * @n: ...
 * Return: ..
 */

void print_number(int n)
{
	int dig, temp, count, i;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	count = digits(n);
	dig = _dig(count) / 10;

	for (i = 0; i < count; i++)
	{
		temp = n / dig;
		temp = temp % 10;
		_putchar(temp + '0');
		dig = dig / 10;
	}
}
