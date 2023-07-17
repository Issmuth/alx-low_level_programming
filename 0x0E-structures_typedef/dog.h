#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type for class of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: data type of dog that stores
 * information about name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
