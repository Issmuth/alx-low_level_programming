#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: each dog struct will store the name age and owner
 * of a single dog enity
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
