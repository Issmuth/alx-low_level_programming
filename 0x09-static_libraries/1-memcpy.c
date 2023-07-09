#include "main.h"

/**
 * main - copies n number of characters
 * @dest: destination
 * @src: source
 * @n: number of chracaters
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
