#include "main.h"

/**
 * prime_check - scans through possible dividers
 * @n: number to be checked
 * @i: initial vallue
 *
 * Return: 1 if prime 0 if not
 */

int prime_check(int n, int i)
{
	if (n == 1)
		return (0);

	if ((n % i) == 0 && i != n)
		return (0);

	if ((n % i) != 0 && i < n)
		return (prime_check(n, (i + 1)));

	return (1);
}

/**
 * is_prime_number - check if the number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (prime_check((-n), 2));

	return (prime_check(n, 2));
}
