#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owners name
 *
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int i, j;

	i = strlen(name);
	j = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (i + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (j + 1));

	if (dog->owner == NULL)
	{
		free(d);
		free(d.name);
		return (NULL);
	}

	strcpy(d.name, name);
	d.age = age;
	strcpy(d.owner, owner);

	return (d);
}
