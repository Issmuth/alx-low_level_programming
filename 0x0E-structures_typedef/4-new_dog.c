#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @a: string to be checked
 *
 * Return: return the numerical length of the string
 */

int _strlen(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies the the entire string
 * @dest: destination where the copied string will be stored
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *good_boy;
	int puplen, ownlen;

	puplen = _strlen(name);
	ownlen = _strlen(owner);

	good_boy = malloc(sizeof(dog_t));
	if (good_boy == NULL)
		return (NULL);

	good_boy->name = malloc(sizeof(char) * (puplen + 1));
	if (good_boy->name == NULL)
	{
		free(good_boy);
		return (NULL);
	}
	good_boy->owner = malloc(sizeof(char) * (ownlen + 1));
	if (good_boy->owner == NULL)
	{
		free(good_boy);
		free(good_boy->name);
		return (NULL);
	}
	_strcpy(good_boy->name, name);
	_strcpy(good_boy->owner, owner);
	good_boy->age = age;

	return (good_boy);
}
