#include "main.h"

/**
 * main - concactenates n number of character
 * @src: source
 * @dest: destination
 * @n: number
 *
 * Return: concactenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
