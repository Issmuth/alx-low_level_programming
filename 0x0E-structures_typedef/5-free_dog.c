#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs duuh
 * @d: pointer to struct dog variable
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
