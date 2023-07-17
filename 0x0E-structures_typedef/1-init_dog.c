#include "dog.h"

/**
 * init_dog - initializes variable of type dog
 * @d: variable
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
		malloc = (sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
