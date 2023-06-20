#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intialiaes a dog struct type
 * @d: a variables of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
