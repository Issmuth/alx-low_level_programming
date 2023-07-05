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
	if ((n % i) == 0 && i != n)
		return (0);

	if ((n % i) != 0 && i < n)
		return (prime_check(n, (i + 1)));

	return (1);
}

/**
 * _is_prime_number - check if the number is prime
 * @
 *
 *
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
